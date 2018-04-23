//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
// Copyright 2017 EvoLogics GmbH                                            *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ievgenii Glushko                                                 *
//***************************************************************************

#include <memory>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Utils/NMEAParser.hpp>

namespace Transports
{
    namespace EVOSSX
    {
        using DUNE_NAMESPACES;
        using DUNE::Utils::NMEAParser;
        using DUNE::Utils::NMEASentence;
        using DUNE::Utils::NMEACommands;

        struct Arguments
        {
            //! Address of EVOSSX strings' source (Evins).
            Address tcp_addr;
            //! Port to connect to.
            uint16_t tcp_port;
            //! Reference point latitude.
            double ref_lat;
            //! Reference point longitude.
            double ref_lon;
            //! Reference point height.
            double ref_height;
            //! Use time from NMEA sentences.
            bool use_nmea_time;
            //! Name of the section with modem addresses.
            std::string addr_section;
        };

        // Type definition for mapping addresses.
        typedef std::map<unsigned, unsigned> AddressMap;
        typedef std::map<std::string, unsigned> MapName;
        typedef std::map<unsigned, std::string> MapAddr;

        struct Task: public DUNE::Tasks::Task
        {
            // Task arguments.
            Arguments m_args;
            // TCP socket to listen to.
            TCPSocket* m_tcp;
            // NMEA parser.
            NMEAParser m_parser;
            // Message to send NMEA strings as text.
            IMC::DevDataText m_text;
            //! Map of Evologics modems by name.
            MapName m_modem_names;
            //! Map of Evologics modems by address.
            MapAddr m_modem_addrs;
            //! Modem address.
            unsigned m_address;

            //! Constructor.
            //! @param[in] name task name.
            //! @param[in] ctx context.
            Task(const std::string& name, Tasks::Context& ctx):
                    DUNE::Tasks::Task(name, ctx),
                    m_tcp(0)
            {
                param("TCP - Address", m_args.tcp_addr)
                        .defaultValue("10.0.0.4")
                        .description("Address for connecting to Evins");

                param("TCP - Port", m_args.tcp_port)
                        .defaultValue("9801")
                        .description("Port for connecting to USBL");

                param("Reference Point - Latitude", m_args.ref_lat)
                        .defaultValue("0.0")
                        .units(Units::Degree)
                        .description("Latitude of the reference point");

                param("Reference Point - Longitude", m_args.ref_lon)
                        .defaultValue("0.0")
                        .units(Units::Degree)
                        .description("Longitude of the reference point");

                param("Reference Point - Height", m_args.ref_height)
                        .defaultValue("0.0")
                        .units(Units::Meter)
                        .description("Height of the reference point");

                param("Use NMEA Sentence Time", m_args.use_nmea_time)
                        .defaultValue("false")
                        .description("Use time in PEVOXXX sentences for generated UsblXXX messages");

                param("Address Section", m_args.addr_section)
                        .defaultValue("Evologics Addresses")
                        .description("Name of the configuration section with modem addresses");
            }

            //! Update internal state with new parameter values.
            void
            onUpdateParameters(void)
            {
                if (m_tcp != 0 &&
                    (paramChanged(m_args.ref_lat) ||
                     paramChanged(m_args.ref_lon) ||
                     paramChanged(m_args.ref_height)))
                {
                    sendReferenceConfig();
                }
            }

            //! Acquire resources.
            void
            onResourceAcquisition(void)
            {
                try
                {
                    m_tcp = new TCPSocket;
                    m_tcp->connect(m_args.tcp_addr, m_args.tcp_port);

                    setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                    sendReferenceConfig();
                }
                catch (std::runtime_error& e)
                {
                    throw RestartNeeded(e.what(), 5);
                }
            }

            void
            onResourceInitialization(void){
                // Process modem addresses.
                std::string system = getSystemName();
                std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);
                for (unsigned i = 0; i < addrs.size(); ++i)
                {
                    unsigned addr = 0;
                    m_ctx.config.get(m_args.addr_section, addrs[i], "0", addr);
                    m_modem_names[addrs[i]] = addr;
                    m_modem_addrs[addr] = addrs[i];

                    if (addrs[i] == system)
                        m_address = addr;
                }
            }

            void
            breakIntoDegMinFrac(double lat, double& deg_int, double& min_int, double& min_frac)
            {
                min_frac = std::modf(std::modf(lat, &deg_int) * 60.0, &min_int);
            }

            void
            sendReferenceConfig()
            {
                if (m_tcp == 0)
                    return;

                char buf[256];
                char lat_hemi = m_args.ref_lat >= 0.0 ? 'N' : 'S';
                char lon_hemi = m_args.ref_lon >= 0.0 ? 'E' : 'W';
                double deg_int, min_int, min_frac;

                breakIntoDegMinFrac(std::fabs(m_args.ref_lat), deg_int, min_int, min_frac);

                double lat = deg_int * 100 + min_int + min_frac;

                breakIntoDegMinFrac(std::fabs(m_args.ref_lon), deg_int, min_int, min_frac);

                double lon = deg_int * 100 + min_int + min_frac;
                size_t n = snprintf(buf, sizeof(buf), "$PEVOCTL,BUSBL,%011.6f,%c,%012.6f,%c,%.2f,,,,\r\n",
                                    lat, lat_hemi, lon, lon_hemi, m_args.ref_height);

                inf("setting up USBL: %s", buf);

                m_tcp->write(buf, n);
            }

            //! Release resources.
            void
            onResourceRelease(void)
            {
                if (m_tcp)
                {
                    Memory::clear(m_tcp);
                    m_tcp = 0;
                }
            }

            bool resolveTid(unsigned tid, std::string &imc_name, unsigned &imc_id) {
                //! Resolve system name and imc id from transponder id
                //! Return value indicates success

                // Resolve modem transponder id to system name (evologics addresses)
                if ( m_modem_addrs.find(tid) == m_modem_addrs.end() ) {
                    war("Transponder ID not found in evologics addresses (%u)", tid);
                    return false;
                }

                imc_name = m_modem_addrs[tid];

                // Resolve IMC id from system name
                imc_id = resolveSystemName(imc_name);

                if(!AddressResolver::isValid(imc_id))
                    war("System name not found in imc addresses (%s)", imc_name.c_str());

                return AddressResolver::isValid(imc_id);
            }

            std::auto_ptr<IMC::Message>
            generateUsblPositioningMessageFromSentence(NMEASentence& sentence)
            {
                IMC::Message* msg = 0;
                std::string sys_name;
                unsigned sys_id = AddressResolver::invalid();

                if (sentence.type == SSB && sentence.data.ssb.status)
                {
                    bool success = resolveTid(sentence.data.ssb.tid, sys_name, sys_id);
                    if(!success)
                        std::auto_ptr<IMC::Message>(0);

                    switch (sentence.data.ssb.cf)
                    {
                        case NMEASentence::SentenceData::SSB::LF:{
                            UsblPosition *pos = new UsblPosition();
                            msg = pos;

                            pos->target = sys_id;
                            pos->x = sentence.data.ssb.x;
                            pos->y = sentence.data.ssb.y;
                            pos->z = sentence.data.ssb.z;
                            break;
                        }
                        case NMEASentence::SentenceData::SSB::GEOD: {
                            UsblFixExtended *fix = new UsblFixExtended();
                            msg = fix;

                            fix->target = sys_name;
                            fix->lat = Angles::radians(sentence.data.ssb.x);
                            fix->lon = Angles::radians(sentence.data.ssb.y);
                            fix->z_units = IMC::Z_DEPTH;
                            fix->z = sentence.data.ssb.z;
                            fix->accuracy = 5; // Set accuracy to 5meters

                            break;
                        }
                        default:
                            return std::auto_ptr<IMC::Message>(0);
                    }

                    if (sentence.data.ssb.epoch_time > 0)
                        msg->setTimeStamp(sentence.data.ssb.epoch_time);
                    else
                        msg->setTimeStamp();
                }

                if (sentence.type == SSA && sentence.data.ssa.status &&
                    sentence.data.ssa.cf == NMEASentence::SentenceData::SSA::LF)
                {
                    bool success = resolveTid(sentence.data.ssa.tid, sys_name, sys_id);
                    if(!success)
                        std::auto_ptr<IMC::Message>(0);

                    UsblAngles *ang = new UsblAngles();
                    msg = ang;
                    ang->target = sys_id;
                    ang->bearing = sentence.data.ssa.bearing;
                    ang->elevation = sentence.data.ssa.elevation;

                    if (sentence.data.ssa.epoch_time > 0)
                        msg->setTimeStamp(sentence.data.ssa.epoch_time);
                    else
                        msg->setTimeStamp();
                }

                return std::auto_ptr<IMC::Message>(msg);
            }

            //! Main loop.
            void
            onMain(void)
            {
                while (!stopping())
                {
                    if (m_tcp){
                        consumeMessages();
                    } else {
                        waitForMessages(1.0);
                        continue;
                    }

                    if (Poll::poll(*m_tcp, 0.1))
                    {
                        uint8_t buffer[256];
                        int rv = m_tcp->read(&buffer[0], sizeof(buffer));
                        NMEASentence sentence;

                        for (int i = 0; i < rv; i++)
                        {
                            if (m_parser.parse(buffer[i], sentence))
                            {
                                debug("%s", m_parser.getSentence().c_str());
                                m_text.value = m_parser.getSentence();
                                dispatch(m_text);

                                std::auto_ptr<IMC::Message> usbl_msg = generateUsblPositioningMessageFromSentence(sentence);
                                if (usbl_msg.get())
                                {
                                    if (m_args.use_nmea_time)
                                        dispatch(usbl_msg.get(), DF_KEEP_TIME);
                                    else
                                        dispatch(usbl_msg.get());
                                }
                            }
                        }
                    }
                }
            }
        };
    }
}

DUNE_TASK