//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 6a9b936aa9d8b562b7ec1e628dcce54c                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.5870493561273282);
    msg.setSource(61438U);
    msg.setSourceEntity(26U);
    msg.setDestination(3836U);
    msg.setDestinationEntity(18U);
    msg.state = 12U;
    msg.flags = 165U;
    msg.description.assign("HJLSJVWBRAKIZZBTIMADQVBKORHBUWAWOXYRQSHKWFUJCTMTAWVIQCWKOJHUSTZUEDDBLATORJFCIOJPGOMODUNXXEQZTVMFMAMTGLVWDPLTJPDYINHURUHYHQSAESKZLZENDFKFJMCQVLYRKADXLINOFXUSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.2763014937682684);
    msg.setSource(23927U);
    msg.setSourceEntity(248U);
    msg.setDestination(9323U);
    msg.setDestinationEntity(18U);
    msg.state = 108U;
    msg.flags = 220U;
    msg.description.assign("RXEKMGWIQYJOHAWGFTPSSVTBXLNUWUESOGZWJKFCXBDVHACEVHRIAAWGSMOQXQPZKDUEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.18031033614790903);
    msg.setSource(25206U);
    msg.setSourceEntity(135U);
    msg.setDestination(58575U);
    msg.setDestinationEntity(109U);
    msg.state = 123U;
    msg.flags = 87U;
    msg.description.assign("KMHAJWBBPNGMWXVTELHCFOQVDJGWKGQFKINC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.9090964220257771);
    msg.setSource(40566U);
    msg.setSourceEntity(122U);
    msg.setDestination(40592U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.8916288916393907);
    msg.setSource(22180U);
    msg.setSourceEntity(208U);
    msg.setDestination(32308U);
    msg.setDestinationEntity(77U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.6345717504891617);
    msg.setSource(34252U);
    msg.setSourceEntity(95U);
    msg.setDestination(20867U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.1702571366719945);
    msg.setSource(18935U);
    msg.setSourceEntity(26U);
    msg.setDestination(1316U);
    msg.setDestinationEntity(99U);
    msg.id = 254U;
    msg.label.assign("IMLYHQUNCSUOVFJADKGZBNSXEFOEYZQXBMRTDXAZSYWFLABVJCJQYXRALGVDMJWKPOJAUHJMFCPNIRLRELVQGMRBNGPCHLKLIVIWNQFQLWRDVKXIDTDOGNFXWTKIOBKFNUPOESUMENIIFWLUDHHCFKMXSRPPYWZJCAQCH");
    msg.component.assign("EEGASUKMGZUIFRGWMTTBYCMLRTKQQWYCXPOKJSRCVNGIVLNMGMCLHJRNZZVHFIQXVSJXEMLHQRLEWYLWUUTNARETDGERUZAEMCRXAVPKPDXXWOYZIVYFTUWNBAJQXMHHCPOAOPFHBSUPTSGDIBFXPLHIYKAHRAYCOOMYDNFWLZODPGXPYBDNBFWFVURSE");
    msg.act_time = 16043U;
    msg.deact_time = 29556U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.5673154845312544);
    msg.setSource(25658U);
    msg.setSourceEntity(161U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(27U);
    msg.id = 94U;
    msg.label.assign("ABVUKLVLCSERDQOLLHLDBXOHUFUXAELPOJFAWVICMLLTPERRZOQZOFSKDNBQAICFVIIYGSYGECTBOO");
    msg.component.assign("DWYGRQBQLBXEWPVMKQTWGJMDFBGONYBRXMDOXLKSCCQFREONRLETIWXHVSBXIJMLONKULSUIFBAEZPQRIZXBHDPMCAWUSVXFCOTBW");
    msg.act_time = 19606U;
    msg.deact_time = 25133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.4328095030051109);
    msg.setSource(30683U);
    msg.setSourceEntity(17U);
    msg.setDestination(51578U);
    msg.setDestinationEntity(206U);
    msg.id = 69U;
    msg.label.assign("HAQFMUDGABFHCHGITRTWOKGXQJZRPBPXDFKICNHPJSWRFEOYMVYKLQMOCYEZKKMRBRABYHJSQBPMPJWLLANOSUIEXNUZRFVGRHVVIMSKWHCISFXROJZHURTTCOZANGYCLKGGYNDIUQQCGOXK");
    msg.component.assign("XEAMPPSXZBIYCDVRLAVDTTFMGWHNVWGIEQRSJBYISZQVZNKFOTYANIDQCUGYBD");
    msg.act_time = 2534U;
    msg.deact_time = 17838U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.001092680242055999);
    msg.setSource(38993U);
    msg.setSourceEntity(109U);
    msg.setDestination(18693U);
    msg.setDestinationEntity(73U);
    msg.id = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.3546287403210887);
    msg.setSource(33861U);
    msg.setSourceEntity(241U);
    msg.setDestination(63714U);
    msg.setDestinationEntity(130U);
    msg.id = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.8566001676400792);
    msg.setSource(56069U);
    msg.setSourceEntity(64U);
    msg.setDestination(2023U);
    msg.setDestinationEntity(32U);
    msg.id = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.16937312726729092);
    msg.setSource(33750U);
    msg.setSourceEntity(109U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(248U);
    msg.op = 69U;
    msg.list.assign("WLSKOVMJBWZPOALBWHTBEQDISTTODDCNBFFGRBFVESIHOVXTUCWLYEERVNEYSTZPUDNMJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.44124675803241453);
    msg.setSource(59094U);
    msg.setSourceEntity(239U);
    msg.setDestination(44904U);
    msg.setDestinationEntity(6U);
    msg.op = 119U;
    msg.list.assign("PMAHXITZBCAMLQJVXRDWSEFFEJPNKRNIHMYLZYOBCISIGAVNUIUGPENFUXARIXFGYCDNBVLOMMTZELNVSCCKRAENMJHKHOZKFLTXFJYFGVKEGFBOURDEYVLDBMOYTKCGHKDGKTIJZDSASHJQMCNBPXODVAOXJZJXGKZREOXQQSTSHNEMSYZPZLNEFUWGQRWTQWWBFRWJIYDDLCUWAVOPBVZBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.025747999574939118);
    msg.setSource(24361U);
    msg.setSourceEntity(196U);
    msg.setDestination(22730U);
    msg.setDestinationEntity(104U);
    msg.op = 28U;
    msg.list.assign("FGBOKVYJIFQNNPDDLMANTNTCUEUGWEPHVYQJTRBKFSVGJFQSPITLHMRWLTEZOYHEQWFXFCDVFJPZKAAVNEPAHLCSQWLESUJQVXBHEXKEAMRIVOCSJHVMYNGOOOPXJMUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.2605904382355021);
    msg.setSource(33541U);
    msg.setSourceEntity(162U);
    msg.setDestination(32995U);
    msg.setDestinationEntity(243U);
    msg.value = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.242568889481925);
    msg.setSource(43694U);
    msg.setSourceEntity(107U);
    msg.setDestination(57414U);
    msg.setDestinationEntity(143U);
    msg.value = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.2141886160489348);
    msg.setSource(25243U);
    msg.setSourceEntity(132U);
    msg.setDestination(59051U);
    msg.setDestinationEntity(194U);
    msg.value = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.10528112801965306);
    msg.setSource(15480U);
    msg.setSourceEntity(254U);
    msg.setDestination(11910U);
    msg.setDestinationEntity(58U);
    msg.consumer.assign("YKFXCVGETKUYNJZUJFQMZYVPSITW");
    msg.message_id = 16688U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.14555350379464105);
    msg.setSource(43854U);
    msg.setSourceEntity(189U);
    msg.setDestination(62980U);
    msg.setDestinationEntity(109U);
    msg.consumer.assign("GROXOTNAOBORGVMKMWPNHFYENZBMPCSOBQRKBIBGMXZJGWYIIATQKSYHAQHEBMFYBFSEWRSPXUOPGTXFBFNKOIUQKRPCMWRWOZVMDXZNNUGFIDQVVIHYIDAPYQVMSAEGHHSLJMVHDAYRPLFASQCQJUCXSCKLTIZDLQJEEJBUXSEAWLDBLCJGFVLNHYUSTOYGFURKLJCZWPZGDLTDEVDRAPLDHKN");
    msg.message_id = 51003U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.20453605054790902);
    msg.setSource(61719U);
    msg.setSourceEntity(167U);
    msg.setDestination(2508U);
    msg.setDestinationEntity(3U);
    msg.consumer.assign("XLJYNXWMJYGPGDVJRTNVBVJZIUKLUBCURMSSJQUPNMIWACQTCFZYDPOEBWGKVKMSYETEYXURYNIAUQSOXGDEEPEXKYQLCX");
    msg.message_id = 47052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.04274474423764463);
    msg.setSource(9489U);
    msg.setSourceEntity(104U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.21515663970651);
    msg.setSource(22982U);
    msg.setSourceEntity(217U);
    msg.setDestination(4416U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.410121026295722);
    msg.setSource(42471U);
    msg.setSourceEntity(232U);
    msg.setDestination(12617U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.3597808781885117);
    msg.setSource(20926U);
    msg.setSourceEntity(9U);
    msg.setDestination(42384U);
    msg.setDestinationEntity(205U);
    msg.op = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.22790695964560048);
    msg.setSource(41530U);
    msg.setSourceEntity(65U);
    msg.setDestination(52527U);
    msg.setDestinationEntity(96U);
    msg.op = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.44843432679552575);
    msg.setSource(19905U);
    msg.setSourceEntity(17U);
    msg.setDestination(18250U);
    msg.setDestinationEntity(115U);
    msg.op = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.09635369610273126);
    msg.setSource(60457U);
    msg.setSourceEntity(188U);
    msg.setDestination(42956U);
    msg.setDestinationEntity(30U);
    msg.total_steps = 163U;
    msg.step_number = 225U;
    msg.step.assign("XLYBGRTBBRMDEQEYZJSMRPFNZWRIHEGWSIDSTPGKKDCANJGUWHSSDIGKVRJOWIVBHWUECQHOQTPSBNPWOHYYEGFSHHQAJFZYELBWFUAWVUUHCQLXWMBPILDOFADCXOJCENDJCZGSZVRYAZAUODLKAUNQMOJPXMIXNXAITUTPZHKXVBYUDRSNKXCASALDTMMOXNQWJMLYTTJRZGMEHJRIIFUBYCLTGKVOEVZNLCFFGOPKMTFKZK");
    msg.flags = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.07621372917209968);
    msg.setSource(35791U);
    msg.setSourceEntity(45U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(143U);
    msg.total_steps = 65U;
    msg.step_number = 251U;
    msg.step.assign("IYZIECYVPFPUEGDZIPMSTQGEEMFWTTXYERBIXSVZOIYTXRANKDRDVYWGVRZOC");
    msg.flags = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.9609076359338504);
    msg.setSource(64937U);
    msg.setSourceEntity(186U);
    msg.setDestination(63904U);
    msg.setDestinationEntity(69U);
    msg.total_steps = 253U;
    msg.step_number = 96U;
    msg.step.assign("HZCGMIZJSJAETERCNFVWOZGNIHHDRDLGAOERGQRDHTMSGPXPSWYXKJMFJFQANEBWXOYMFBWJUHSABILPVYIMUFNOQWQMAWDFZLLC");
    msg.flags = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.11780137361487597);
    msg.setSource(54873U);
    msg.setSourceEntity(195U);
    msg.setDestination(45834U);
    msg.setDestinationEntity(50U);
    msg.state = 229U;
    msg.error.assign("KVGXTOSBTJWFQVYIFWFPBLKIJAHSPVULHHMMOMTIQBGQIHVGIORONIIAOEJIBAAOJCTHVEGRUMEWSSRLHZOBDTAYBWNLEESXEZKHAURDLCULYTNVFSMCDCVANFKCWUFRZHFCZUYZHDQHWOWGJYTLBWEXQFBGERASKRGZYBUPJMVNQYUPVNWLAKPMLJGDPEBPDAXTGXKGROXCXNMFPJYYYJOZDZZUDVEPNMDRPXQSQQSMDIJTCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.18653175348596118);
    msg.setSource(9858U);
    msg.setSourceEntity(92U);
    msg.setDestination(50552U);
    msg.setDestinationEntity(90U);
    msg.state = 208U;
    msg.error.assign("OGIHAHQBLYZHYQDFSRZDFESVYBIDHTXUWBVEXWCOYJOOHSLSGOKXUJTIICLREVOGTEWCDVPMAVKOPXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.17120814932686312);
    msg.setSource(12680U);
    msg.setSourceEntity(237U);
    msg.setDestination(51170U);
    msg.setDestinationEntity(212U);
    msg.state = 54U;
    msg.error.assign("AVJDSIBHZBFVGADLILBDZPQJOEMRWVVPNBNATZUJOLDWAYTOKVETCGXFLWZKEXSJIUAUIRHLQSHQTJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.1294314435661531);
    msg.setSource(43284U);
    msg.setSourceEntity(79U);
    msg.setDestination(56052U);
    msg.setDestinationEntity(172U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.014495909174263022);
    msg.setSource(57597U);
    msg.setSourceEntity(80U);
    msg.setDestination(20224U);
    msg.setDestinationEntity(219U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.5338920365350326);
    msg.setSource(60562U);
    msg.setSourceEntity(73U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(239U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.4406769577604266);
    msg.setSource(7998U);
    msg.setSourceEntity(192U);
    msg.setDestination(53666U);
    msg.setDestinationEntity(202U);
    msg.op = 66U;
    msg.speed_min = 0.5520230960206822;
    msg.speed_max = 0.2856668730736377;
    msg.long_accel = 0.7728878885967311;
    msg.alt_max_msl = 0.7236938925117946;
    msg.dive_fraction_max = 0.10313258177768858;
    msg.climb_fraction_max = 0.464992490549305;
    msg.bank_max = 0.5851856729891164;
    msg.p_max = 0.7969690849731305;
    msg.pitch_min = 0.262313854748353;
    msg.pitch_max = 0.6567813013473207;
    msg.q_max = 0.7391434657308318;
    msg.g_min = 0.6219355217746759;
    msg.g_max = 0.48735266178228076;
    msg.g_lat_max = 0.3998425170065789;
    msg.rpm_min = 0.24006759853207027;
    msg.rpm_max = 0.009819394356196609;
    msg.rpm_rate_max = 0.07029246798626188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.7243197985990221);
    msg.setSource(46870U);
    msg.setSourceEntity(137U);
    msg.setDestination(43484U);
    msg.setDestinationEntity(30U);
    msg.op = 50U;
    msg.speed_min = 0.007915556119142741;
    msg.speed_max = 0.040754656406589373;
    msg.long_accel = 0.05799205926729578;
    msg.alt_max_msl = 0.9987510266650802;
    msg.dive_fraction_max = 0.909507911479863;
    msg.climb_fraction_max = 0.7185516952972099;
    msg.bank_max = 0.6493054940854932;
    msg.p_max = 0.5840585992832182;
    msg.pitch_min = 0.4795412375087089;
    msg.pitch_max = 0.1858635279735189;
    msg.q_max = 0.5454050968902622;
    msg.g_min = 0.13070845509051388;
    msg.g_max = 0.27145030936882986;
    msg.g_lat_max = 0.6086095740467493;
    msg.rpm_min = 0.16386145428779242;
    msg.rpm_max = 0.03269791781811715;
    msg.rpm_rate_max = 0.6448660842599171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.25338271358167097);
    msg.setSource(26122U);
    msg.setSourceEntity(130U);
    msg.setDestination(31439U);
    msg.setDestinationEntity(70U);
    msg.op = 147U;
    msg.speed_min = 0.6381500802781008;
    msg.speed_max = 0.847488996050641;
    msg.long_accel = 0.7382974665788099;
    msg.alt_max_msl = 0.010394648670252304;
    msg.dive_fraction_max = 0.3922459148350085;
    msg.climb_fraction_max = 0.9053202104191757;
    msg.bank_max = 0.2043740523535067;
    msg.p_max = 0.13099379935802213;
    msg.pitch_min = 0.9333656318823566;
    msg.pitch_max = 0.6601524457743643;
    msg.q_max = 0.3924116684017024;
    msg.g_min = 0.7305557473056077;
    msg.g_max = 0.7040535131346684;
    msg.g_lat_max = 0.42043167218002186;
    msg.rpm_min = 0.8803588065059961;
    msg.rpm_max = 0.17666362757216425;
    msg.rpm_rate_max = 0.23046207522870288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.7499022710739665);
    msg.setSource(13840U);
    msg.setSourceEntity(102U);
    msg.setDestination(16510U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.5377664427979458);
    msg.setSource(27338U);
    msg.setSourceEntity(27U);
    msg.setDestination(38119U);
    msg.setDestinationEntity(94U);
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.9978534937826525;
    tmp_msg_0.time_next_service = 0.9553770306968432;
    tmp_msg_0.time_motor_next_service = 0.057730240746101114;
    tmp_msg_0.time_idle_ground = 0.4077112174474351;
    tmp_msg_0.time_idle_air = 0.010216915091610712;
    tmp_msg_0.time_idle_water = 0.5023769346851977;
    tmp_msg_0.time_idle_underwater = 0.18965957772003716;
    tmp_msg_0.time_idle_unknown = 0.6335996816484415;
    tmp_msg_0.time_motor_ground = 0.08696456777509964;
    tmp_msg_0.time_motor_air = 0.2522015318296543;
    tmp_msg_0.time_motor_water = 0.13078789389951617;
    tmp_msg_0.time_motor_underwater = 0.6968676025089032;
    tmp_msg_0.time_motor_unknown = 0.5938948489400966;
    tmp_msg_0.rpm_min = 7965;
    tmp_msg_0.rpm_max = -30814;
    tmp_msg_0.depth_max = 0.34319132619074966;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.49426814143922104);
    msg.setSource(10633U);
    msg.setSourceEntity(85U);
    msg.setDestination(31958U);
    msg.setDestinationEntity(24U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.8828721904578257);
    msg.setSource(11046U);
    msg.setSourceEntity(203U);
    msg.setDestination(28914U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.6989196666356617;
    msg.lon = 0.7951672554440066;
    msg.height = 0.8463184004268566;
    msg.x = 0.45581005849453593;
    msg.y = 0.6259468698648599;
    msg.z = 0.9863018763836267;
    msg.phi = 0.9179866662996009;
    msg.theta = 0.02756299697794029;
    msg.psi = 0.3262237103569342;
    msg.u = 0.1603910614875963;
    msg.v = 0.2611398967427304;
    msg.w = 0.29309918582447514;
    msg.p = 0.305946309098194;
    msg.q = 0.7727935965734204;
    msg.r = 0.31709371866569447;
    msg.svx = 0.9807712717563484;
    msg.svy = 0.9321748865034505;
    msg.svz = 0.4567948433584835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.8296722169547344);
    msg.setSource(4980U);
    msg.setSourceEntity(96U);
    msg.setDestination(36409U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.3353265055654536;
    msg.lon = 0.22115774635410934;
    msg.height = 0.7398213774676062;
    msg.x = 0.5821516126146598;
    msg.y = 0.8232333191425711;
    msg.z = 0.21553691760502647;
    msg.phi = 0.13140094993744178;
    msg.theta = 0.6751275790788406;
    msg.psi = 0.16179039448949284;
    msg.u = 0.6082975949941714;
    msg.v = 0.7414128574569822;
    msg.w = 0.31909611715906183;
    msg.p = 0.35866058013925595;
    msg.q = 0.05913909000480766;
    msg.r = 0.6865800915562795;
    msg.svx = 0.933747192804643;
    msg.svy = 0.5517980295118593;
    msg.svz = 0.39100207078039373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.48341979071775676);
    msg.setSource(46683U);
    msg.setSourceEntity(140U);
    msg.setDestination(64248U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.15390067336333624;
    msg.lon = 0.36994312419775444;
    msg.height = 0.6197386668469389;
    msg.x = 0.3945277308024847;
    msg.y = 0.11529182654981174;
    msg.z = 0.9812632145465711;
    msg.phi = 0.6701071172538637;
    msg.theta = 0.003670201155650976;
    msg.psi = 0.3451594644547662;
    msg.u = 0.2854243775338884;
    msg.v = 0.24002708964767294;
    msg.w = 0.9791920626677685;
    msg.p = 0.1539871276920587;
    msg.q = 0.28360074741230346;
    msg.r = 0.18723858568021656;
    msg.svx = 0.3909594497924369;
    msg.svy = 0.23514368926806062;
    msg.svz = 0.04210100518855131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.6827697459020053);
    msg.setSource(46926U);
    msg.setSourceEntity(93U);
    msg.setDestination(51858U);
    msg.setDestinationEntity(169U);
    msg.op = 11U;
    msg.entities.assign("BGHTNRABWMPSPMXKUVWERDVDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.526997505743687);
    msg.setSource(28123U);
    msg.setSourceEntity(182U);
    msg.setDestination(659U);
    msg.setDestinationEntity(88U);
    msg.op = 3U;
    msg.entities.assign("HPHSDXWBUVQVDTLQJANLFKZVSPMNVZHFBGVKUSYSGDBAJLNMKODJRQGXKCBJFIERBKIZZTAQEFPNLTBRHYZNDSTMXQIUONJMRJDMZOUTOAEVXWCCUIDWAPGACMYLWFIPOKWHTEEISCEZCLMYXNWIRGCCRLPOZNWFDOVDAJEOKVXHUSFUXGIKXAKABZIOBUPMMNGRGCHJBEPQNRFUAJQEDXUXTYYBPGQFWMTSWSJPOSQVTLHHQKYZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.1756229452241952);
    msg.setSource(30609U);
    msg.setSourceEntity(66U);
    msg.setDestination(36010U);
    msg.setDestinationEntity(253U);
    msg.op = 200U;
    msg.entities.assign("CVBZCFZGRMPNLYTMQLTDIEIXRFRXNSYRRHAEVSHXCIEAMREQRFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.003055633427961557);
    msg.setSource(40979U);
    msg.setSourceEntity(25U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(197U);
    msg.type = 89U;
    msg.speed = 52927U;
    const char tmp_msg_0[] = {1, 13, -120, -103, -30, -95, -30, 40, 64, -5, 13, 22, 42, 1, 38, 91, 112, -66, -43, 45, -111, 53, -1, 58, -29, -70, 66, -110, -118, -43, -46, 42, -125, -82, 35, -52, 28, 83, 89, -47, 24, 44, -114, 1, -14, 76, 48, 110, 20, 103, -74, -10, -71, -124, -78, -24, 53, -80, 11, 24, 98, 62, -108, 58, 97, 78, -74, 63, -121, 17, -38, 124, -52, -65, -87, 44, 114, 60, 106, 91, -113, 77, -127, 97, 53, 69, -4, -112, -71, 105, 26, 31, -43, -114, 60, 91, -56, -3, -44, 36, -7, 39, 32, -44, -66, 26, -111, -118, -28, 125, 2, -118, 118, -33, -82, 121, 67, -98, 52, -76, 52, 4, -76, 25, -42, -54, 54, 58, 68, 19, 1, -80, -119, 32, -6, 103, -45, -55, 119, -54, 99, 45, -90, -30, 49, 85, -29, 101, 62, -104, -3, 80, 34, 48, -25, -31, 49, 111, -77, -23, 92, 43, -109, 100, -123, -61, 23, -36, 30, -44, -50, -79, 55, -65, -20, 80, -72, -11, -75, 103, 48, -100, 28, 69, 83, 99, -10, -13, 85, -113, 16, -15, -41, 8, 115, 68, 39, 76, 66, 38, -28, 16, 77, -54, -90, 50, 8, 91, -8, -78, -55, 94, 97, -65, -61, -120, -60, -40, -27, -65, -41, -33, -20, -121, 24, -34, 61, 110, -102, 67, 61, -73, 105, -73, -10, -30, -33, -124, 98, -120, -86, -5, 88, 73, -82, 88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.6571259981495425);
    msg.setSource(47465U);
    msg.setSourceEntity(211U);
    msg.setDestination(42180U);
    msg.setDestinationEntity(89U);
    msg.type = 240U;
    msg.speed = 7909U;
    const char tmp_msg_0[] = {-62, -11, -40, -2, -127, -102, 72, 125, -91, -91, -109, 34, -69, 39, -9, 59, 70, 4, -111, -80, -68, -44, -92, 91, -78, -99, -49, -80, -32, -61, -62, -41, -73, -37, -41, 51, -86, -25, 113, -119, 103, -128, -85, 65, 100, 105, 69, -12, 102, -26, 18, -113, 88, 47, 111, 72, -58, 17, -6, -88, 1, 19, 29, 56, 93, -67, 93, 76, -120, -109, 123, -19, 55, 73, 40, -24, -24, 45, -123, 9, -36, 97, 73, 5, 123, -114, 55, -29, -95, -31, -119, -128, 113, 45, 111, -89, 63, -117, 106, 25, 43, -83, -53, -85, -74, -122, 122, 12, -1, 97, -64, -44, 101, 88, 66, -112, -61, -84, -73, 7, -16, -122, -59, -121, -100, 3, 94, 1, -7, 12, -107, 73, -10, -119, 38, -52, 125, 95, -111, 64, -88, 28, 19, 28, 17, -2, 25, 27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.6401644771347241);
    msg.setSource(24740U);
    msg.setSourceEntity(36U);
    msg.setDestination(4019U);
    msg.setDestinationEntity(55U);
    msg.type = 30U;
    msg.speed = 26875U;
    const char tmp_msg_0[] = {-119, -13, 71, 110, 35, 120, -127, -20, 96, -55, -68, 117, -122, 91, -33, -44, 13, 37, -16, 42, -81, 18, -36, 12, 90, 10, -10, -5, 115, 106, -98, -13, -47, -3, -6, -82, -65, -32, -99, 23, 106, 24, -8, 78, -55, -5, -11, 76, 126, -60, 126, -54, -42, -31, -4, 117, -34, 72, 114, -49, -68, 82, 0, 53, 77, 13, -10, -75, 27, 43, 107, -127, -101, -1, 6, -75, -117, 83, 112, 3, -118, -2, -10, 51, 29, 6, 9, 80, -55, -109, 121, 69, -9, 34, 40, 74, -126, -51, 66, -96, 48, -12, 78, -88, 32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.5918878328660254);
    msg.setSource(37200U);
    msg.setSourceEntity(90U);
    msg.setDestination(16218U);
    msg.setDestinationEntity(64U);
    msg.op = 242U;
    msg.tas2acc_pgain = 0.5201327294922864;
    msg.bank2p_pgain = 0.9695708105526795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.1496158508941472);
    msg.setSource(21185U);
    msg.setSourceEntity(34U);
    msg.setDestination(56180U);
    msg.setDestinationEntity(44U);
    msg.op = 205U;
    msg.tas2acc_pgain = 0.7519225927202391;
    msg.bank2p_pgain = 0.7577301692020966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.20726082268080637);
    msg.setSource(10266U);
    msg.setSourceEntity(190U);
    msg.setDestination(7729U);
    msg.setDestinationEntity(28U);
    msg.op = 212U;
    msg.tas2acc_pgain = 0.46474431580235054;
    msg.bank2p_pgain = 0.990168400867536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.9486518086264915);
    msg.setSource(30360U);
    msg.setSourceEntity(193U);
    msg.setDestination(35284U);
    msg.setDestinationEntity(59U);
    msg.available = 590399917U;
    msg.value = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.172217597818354);
    msg.setSource(56487U);
    msg.setSourceEntity(86U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(208U);
    msg.available = 2980084167U;
    msg.value = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.9023616948155936);
    msg.setSource(4186U);
    msg.setSourceEntity(140U);
    msg.setDestination(3409U);
    msg.setDestinationEntity(228U);
    msg.available = 2479979249U;
    msg.value = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.09375306017286478);
    msg.setSource(5031U);
    msg.setSourceEntity(114U);
    msg.setDestination(20899U);
    msg.setDestinationEntity(238U);
    msg.op = 179U;
    msg.snapshot.assign("DMTSLXWEEHCHAKNO");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 103U;
    tmp_msg_0.mode.assign("ORMJVLOOCLQMNINJOZWTEGRHVNEKPGDPUBXPBJOBDFFVNYEBQVETIXQZAAQXISLWJDGXOQGYWIPCZRRUJPSNCWRZLGZDVZNMWWNZSHHXUVULECKEKDGKLBMWQRAKKYAGUHUIIWJKLSAUFTXIIQHESCVYXMOSVTCEWJYNBXESVHUOPFDCOLZBPCAPSFGFRXYTHYJGDBKINWROHFPFDZATVCTGDQYMMIQYSSYBMTURFZ");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.8016349442650055);
    msg.setSource(26017U);
    msg.setSourceEntity(140U);
    msg.setDestination(637U);
    msg.setDestinationEntity(64U);
    msg.op = 198U;
    msg.snapshot.assign("TVHPKQELDNAMHGNQFWHAHTPKTCUFX");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 20285U;
    tmp_msg_0.lat = 0.6557673256052804;
    tmp_msg_0.lon = 0.5109901321384288;
    tmp_msg_0.z = 0.10024926495867004;
    tmp_msg_0.z_units = 22U;
    tmp_msg_0.speed = 0.23719127953999086;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.roll = 0.9126171740272979;
    tmp_msg_0.pitch = 0.18406409070064533;
    tmp_msg_0.yaw = 0.46709759769324155;
    tmp_msg_0.custom.assign("PQOZHXCKRGXCWMBNOPGKLUOPNLSBGJNUUS");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.8444627270292387);
    msg.setSource(50407U);
    msg.setSourceEntity(2U);
    msg.setDestination(61995U);
    msg.setDestinationEntity(237U);
    msg.op = 164U;
    msg.snapshot.assign("RKCCDQUJSTXWKDRLADCUGCFAYVVEULLB");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GXHHIKCLANNNZGMEXLCVTGJYPSABHTKJAETFJLFWBGCVSRYLXZE");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.37290768285337506);
    msg.setSource(37353U);
    msg.setSourceEntity(33U);
    msg.setDestination(56657U);
    msg.setDestinationEntity(139U);
    msg.op = 17U;
    msg.name.assign("OBREHDZHMNFQJCYDFSQLYFWRNEOYQGFIATMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.5656575372099);
    msg.setSource(47580U);
    msg.setSourceEntity(42U);
    msg.setDestination(1600U);
    msg.setDestinationEntity(21U);
    msg.op = 131U;
    msg.name.assign("EJQMGDIPAAEDWEEPWZLYJORRZNUPDMEUCTBVMVQHYULJVTEZYPUIPJFBLIZEXXSMJQZJTMPNMAVEVQAMCPQDXGCORICQTIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.5465695796998791);
    msg.setSource(11474U);
    msg.setSourceEntity(16U);
    msg.setDestination(23787U);
    msg.setDestinationEntity(140U);
    msg.op = 215U;
    msg.name.assign("FRFLRLKPUSESFTACATSBSTAKPYIIALRHXDXVTXHAQIPWOHZAKGBOTJIUDLNWPMWQDZMMXGHGUUWWRWDCNJFKBSTLLNSVXRXZZDHMMMZFGZENXHUQGNMQPNXSLKNSKTDFJGJOEBDYOKQEOQTJFRKLY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.25698872962095276);
    msg.setSource(55295U);
    msg.setSourceEntity(144U);
    msg.setDestination(6475U);
    msg.setDestinationEntity(177U);
    msg.type = 193U;
    msg.htime = 0.9233510427040286;
    msg.context.assign("TNIYOBLWUOD");
    msg.text.assign("HBDKBCCIFYXXXSREMMOPGGWWKVTZARGCNTWTOFKINRHRQLZOUBEUNEHNTNMBGVQLMPWACXUAAHHACCIZQUIYXOUYWNUYAKOGZUKDBLOEOZCSFGWZDXMPTZTZOAGTJQSSERJYKYURXMSCPSKKWWXEDQQQLPWCPDFQFHMJFGOBIIXCSWBLRPJYSEJRYZFEVLVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.7644486453105723);
    msg.setSource(41220U);
    msg.setSourceEntity(131U);
    msg.setDestination(55741U);
    msg.setDestinationEntity(86U);
    msg.type = 176U;
    msg.htime = 0.8056433349299689;
    msg.context.assign("RJSICLBHDKOCMHRZVDFQAGALEIBWUGDAOIRXFBNMJXHOPTNXUNISWJSBUMOWWQKRCLSTJLYNFDSXJPHFWHIZXPJJYMFSLQCJTNQOAKHWUMYGQIRZPNBTCWTPTGAESFUQOCBLVNGDRAHFBMPOWXICAAUTFVGUCELVQDKYDKFFXBNZHNJIYYYXBACEBGXEDZAUIKVUKVUTMOQWEZPEQYPLVSXMPLEOEYDZZVRQCEVMRDROTKKWSJ");
    msg.text.assign("VQCOYFUSXJVPAUPNBKEDDZAMIEHNLDPCRYRCDEGBSCISJPHUAIAOLFZNWFJQFRMTYNONUJHZKRZTXQUGMHDDKBSPOKSVKYVALEZTANFVXVXOYBJDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.6403525486181124);
    msg.setSource(61567U);
    msg.setSourceEntity(100U);
    msg.setDestination(65459U);
    msg.setDestinationEntity(53U);
    msg.type = 7U;
    msg.htime = 0.7198830667309234;
    msg.context.assign("DRTBQTOAFACHXHSCGGDEHUGGWRYINSFPUHSJVZHSBKPOXLLOGDMBBXCYZIKJMKCWEVYBRFDRDCWDPGYUMOGZZMNIFTTSAEUHV");
    msg.text.assign("WLODMIVOPLWJMBCOBBZASLGYNZANHRZVDZUXVJQRLCRNAPXJZSFFCOGCYUUQGEVHAHYQQPVOLGARBAGKNUTGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.3715635039398525);
    msg.setSource(6225U);
    msg.setSourceEntity(156U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(45U);
    msg.command = 103U;
    msg.htime = 0.6644074984434104;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 183U;
    tmp_msg_0.htime = 0.972990846691073;
    tmp_msg_0.context.assign("WRFCTPXEJMBDCFCDPXKXJZIOTXSQYDKHCAMNFEOFHYAGVCEOIGRBJEYPWVFYTNVAYLQHZYQRFMKWIZXBLDDUWOUVFZKLGQPATXJYNDJISGLJUKQJNQROUDNURGHUEHTIBJSBHRPCVYUATGSMJLVSYFMIOIFMCEUPWKNXHBCZMLNLNTNBMWNGEAFIXAIMLZJSIQSPDUQPBKOSVVGXEYZSRAAUQECPXWKZHVAEMSVDWLRTOBROGDOLBRTCH");
    tmp_msg_0.text.assign("ZYFIFVIKOMOZOEZDPGRESHUWM");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.5935446083634766);
    msg.setSource(53465U);
    msg.setSourceEntity(108U);
    msg.setDestination(28898U);
    msg.setDestinationEntity(157U);
    msg.command = 102U;
    msg.htime = 0.4806008039487454;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 41U;
    tmp_msg_0.htime = 0.3950895451172133;
    tmp_msg_0.context.assign("FDQTTDGTTLZXJSZEZYMIJKXYNOEHNGWPNMDXBHKJDJECXUFBAPOKYMHNINVZOQWVIEYCKPLFIULKQQSXVESCXWMFFLWRGWIOPZYHXKQBSVURNSWSLBBNEFHVZD");
    tmp_msg_0.text.assign("VNCJDVTURFKCWPFENLUALAOVUXTMOFZULYXKRVVXQPKFPDEWWBOIEWTOZRSLXKRQPNWQCNCHFQYXLSLMITONJUKBFZQBKFPSMOCTNQYASQADWYJBURIGKSIBGHLNJDSDPHNPHDVXHCECJWMWTREXLROCEMGGZIGTFLVCZIQDYKNBDOKSAIIAGHWOAUMIEKZJXDSYOQJGP");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.14535099382588879);
    msg.setSource(32007U);
    msg.setSourceEntity(147U);
    msg.setDestination(1557U);
    msg.setDestinationEntity(60U);
    msg.command = 154U;
    msg.htime = 0.687808771918819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.08937517532206996);
    msg.setSource(48427U);
    msg.setSourceEntity(244U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(171U);
    msg.op = 158U;
    msg.file.assign("BKNBPJFBLYXWCTSVZFTYXYHKLZRERIDQXGQSKGYGPRIUGOTUMFHGRZSOGKCWOBFCNOFDWOUKACMJPDITFHDJIZKUDVBWMGWBXDINJEIXXAPOXICETCXMNLOJPPHFSJSACZUFWKSRHJUQAUNYIPQGRSBYVESZRXMNADBZGPQAMVJNWTCKCPYQVVTTLAWVLVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.3226920405506297);
    msg.setSource(62602U);
    msg.setSourceEntity(167U);
    msg.setDestination(8762U);
    msg.setDestinationEntity(114U);
    msg.op = 125U;
    msg.file.assign("SRLEDRGYWZAPYWKCJKOTRHYEQYCBIPVOZDQGYNWSXNACEYDXSILMFPMBPVBLJHCQBGXTHVBRIOCUKOHJLZRGVCRIENMAKFMJWFBUWCUEDNRAJZZSPWOMSDSJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.10173805576150852);
    msg.setSource(11015U);
    msg.setSourceEntity(111U);
    msg.setDestination(64763U);
    msg.setDestinationEntity(209U);
    msg.op = 7U;
    msg.file.assign("YTFKTXOEZSLPMJQGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.9542585925702077);
    msg.setSource(5757U);
    msg.setSourceEntity(160U);
    msg.setDestination(23045U);
    msg.setDestinationEntity(106U);
    msg.op = 186U;
    msg.clock = 0.7777829628819337;
    msg.tz = 4;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.30208061794337826);
    msg.setSource(41128U);
    msg.setSourceEntity(184U);
    msg.setDestination(55308U);
    msg.setDestinationEntity(128U);
    msg.op = 0U;
    msg.clock = 0.8647361641301021;
    msg.tz = -7;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.3251789417183196);
    msg.setSource(35054U);
    msg.setSourceEntity(171U);
    msg.setDestination(61583U);
    msg.setDestinationEntity(244U);
    msg.op = 135U;
    msg.clock = 0.023067613611669757;
    msg.tz = 13;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.12426106008759918);
    msg.setSource(4664U);
    msg.setSourceEntity(196U);
    msg.setDestination(36422U);
    msg.setDestinationEntity(200U);
    msg.conductivity = 0.06975544594236405;
    msg.temperature = 0.8899188166067227;
    msg.depth = 0.4142726579306568;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.05607626479816852);
    msg.setSource(18287U);
    msg.setSourceEntity(103U);
    msg.setDestination(58532U);
    msg.setDestinationEntity(55U);
    msg.conductivity = 0.5154977920122005;
    msg.temperature = 0.6636586002643425;
    msg.depth = 0.12937425486599918;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.31818745375649693);
    msg.setSource(15946U);
    msg.setSourceEntity(161U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(159U);
    msg.conductivity = 0.9502607833495171;
    msg.temperature = 0.307082386959471;
    msg.depth = 0.27220859355412463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.847786564821737);
    msg.setSource(34628U);
    msg.setSourceEntity(19U);
    msg.setDestination(61778U);
    msg.setDestinationEntity(162U);
    msg.altitude = 0.30163902942039433;
    msg.roll = 54744U;
    msg.pitch = 9489U;
    msg.yaw = 42071U;
    msg.speed = -18771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.7039047881319148);
    msg.setSource(62889U);
    msg.setSourceEntity(235U);
    msg.setDestination(14877U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.22455250296798523;
    msg.roll = 22679U;
    msg.pitch = 41696U;
    msg.yaw = 22043U;
    msg.speed = 25520;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.9563517035170774);
    msg.setSource(42616U);
    msg.setSourceEntity(122U);
    msg.setDestination(28098U);
    msg.setDestinationEntity(91U);
    msg.altitude = 0.7121466562464716;
    msg.roll = 42595U;
    msg.pitch = 9382U;
    msg.yaw = 37135U;
    msg.speed = -21583;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.45810145069006825);
    msg.setSource(43079U);
    msg.setSourceEntity(80U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(119U);
    msg.altitude = 0.17666923197649698;
    msg.width = 0.682862593512109;
    msg.length = 0.3662999092808982;
    msg.bearing = 0.8861811089743744;
    msg.pxl = 17596;
    msg.encoding = 53U;
    const char tmp_msg_0[] = {41, -14, -81, 81, 101, -107, 41, 60, -104, 76, -127, -33, -111, -5, -1, 112, 8, -66, -30, 63, 114, -85, -84, 105, 0, 117, -93, 72, 1, -36, 83, 57, -75, 82, 55, -18, -21, -66, -109, 102, 114, 75, 106, -74, 88, -29, 37, 35, -12, 73, -81, -93, -59, 122, 48, -105, -108, -35, 21, -32, -5, 23, 93, 22, 32, -62, -87, 37, -14, 47, -48, 23, -22, -51, -2, 1, -5, -118, -126, 51, 8, 80, -31, -78, 101, -75, 125, -112, 35, -2, -55, -40, 58, -101, 25, -7, -12, 47, 28, -96, -45, -58, 49, -82, -19, 55, -111, 4, -31, 46, 22, -1, 96, -21, -108, 50, 59, -51, 107, 33, 89, -64, 90, -6, -102, 25, -89, -100, -126, 47, 15, -90, 21, 11, -47, -35, -122, -51, 62, 13, 97, 114, -18, 9, 81, 33, 51, 22, -29, -127, 87, -6, 111, -94, 92, -43, -92, -17, -21, -114, -44, -50, -109, -71, -39, -115, -29, 2, 88, -16, 44, 104, -65, 98, 18, 82, 66, -123, 39, -72, 101, -120, 101, -31, -96, 6, -101, 113, -81, -66, 126, -69, -108, 80, 73, 44, -34, -84, 105, 9, 114, -112, 31, 120, 37, -28, 50, 109, 23, 49, -92, 125, 40, -81, 26, -46, -83, -12, 59, 7, -12, 10, -94, -67, -61, 65, 89, -14, -68, 86, 54, -3, 96, -51, 97, -96, -84, -19, 107, -123, 125, -81, -84, -42, -111, 58, 36, 31, 9, -34};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.18920272011776829);
    msg.setSource(19235U);
    msg.setSourceEntity(107U);
    msg.setDestination(489U);
    msg.setDestinationEntity(96U);
    msg.altitude = 0.23609100127546034;
    msg.width = 0.07392185188610856;
    msg.length = 0.6062902814151695;
    msg.bearing = 0.5838682882704331;
    msg.pxl = 10053;
    msg.encoding = 147U;
    const char tmp_msg_0[] = {70, 94, -117, -38, -51, -43, 120, 49, 99, -62, 22, -109, -4, 86, -83, 52, 94, 58, -121, -7};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.846835692291358);
    msg.setSource(40945U);
    msg.setSourceEntity(123U);
    msg.setDestination(50338U);
    msg.setDestinationEntity(162U);
    msg.altitude = 0.8545426180816468;
    msg.width = 0.08631881762549076;
    msg.length = 0.5838589079923279;
    msg.bearing = 0.8839595223369311;
    msg.pxl = 20496;
    msg.encoding = 83U;
    const char tmp_msg_0[] = {-56, -33, -52, 56, 113, 26, 19, 9, -11, 42, -76, -97, -52, 118, 41, -126, -66, -47, 71, -23, -53, -59, -90, 38, -10, -40, 93, -41, 2, -32, -88, -2, 27, 71, -19, -80, 75, 118, 38, 90, 126, 55, 89, 26, 126, -98, -25, -79, -89, 52, -59, 114, -62, -75, 44, -62, 60, 14, 31, -43, -90, -34, -106, -12, 48, -26, 47, 51, 34, -17, 93, 103, -24, -19, -68, 61, 72, 54, -94, -114, -15, -112, 97, 83, 124, 115, 1, 43, 123, -108, -59, 7, 119, 19, -11, 40, -98, -57, 124, -16, 23, 22, 15, 83, -80, -66, -3, 31, 73, -47, 65, 7, -10, 34, -125, 80, -17, 55, 92, -74, 5, 59, -54, 110, -32, -53, 28, 40, 47, -30, 36, -52, 126, 7, -49, 68, 57, 45, 43, 53, 11, -82, -5, -40, -106, -86, 21, 125, 76, -7, -66, -44, -93, -13, -108, -76, 3, 71, 76, -95, -55, 60, -70, -84, 30, -43, 70, 118, 40, 18, -102, -51, -127, 38, -26, -54, 49, -79, 33, -42, -10, -83};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.5157173670388712);
    msg.setSource(36383U);
    msg.setSourceEntity(98U);
    msg.setDestination(827U);
    msg.setDestinationEntity(60U);
    msg.text.assign("PTIEGILACUSJIRIEWDHTFCWQSRPTPLHVUENXDMDXGBYVIYVQIFBKKOODKTHBYGCZMRREEKYMRGWYFZWSIWCSDFQHLOZTXQJGLCIBFAMBKNJXOKEDRGJJGNXZNUDMNAKCKCHSTLSTGQPOAFMTNANKOEPAYPMQRRFZTNOJMSUHHDWBEOXVHCSJ");
    msg.type = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.5045521781638143);
    msg.setSource(64934U);
    msg.setSourceEntity(127U);
    msg.setDestination(54075U);
    msg.setDestinationEntity(49U);
    msg.text.assign("OJYUCLACGWFYWFRIJVBDGXHWVNXBQOGBHUGOWNMBRNKZPHEFQEYKOZUXREDWZYXSMLPSAQCTZFVUMLHUJWDKTHPYWQQSDDFGXBAJBMBZESCPAEFTSQGBNRHJ");
    msg.type = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.4034546431045545);
    msg.setSource(63976U);
    msg.setSourceEntity(112U);
    msg.setDestination(33232U);
    msg.setDestinationEntity(125U);
    msg.text.assign("OPFDYYGLZDCUTXPVWCAUKHKXYEDMTVVBKIIWNIFGZCQFGZAPZXDQAWYXEEJTZCGNLRVPJRJWVBSXJYLBBNVRPSMZULTGTIVMSHQQAWARAWOUZXYUCSHSPMEHOFSFFJMLUMJFGNEVKQKXBKOTCCHTSNGNT");
    msg.type = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.14442720563769806);
    msg.setSource(47366U);
    msg.setSourceEntity(168U);
    msg.setDestination(54708U);
    msg.setDestinationEntity(135U);
    msg.parameter = 201U;
    msg.numsamples = 251U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 10874U;
    tmp_msg_0.avg = 0.4186424563592469;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6415415202575452;
    msg.lon = 0.8777940780426168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.19355109256887626);
    msg.setSource(63003U);
    msg.setSourceEntity(62U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(7U);
    msg.parameter = 137U;
    msg.numsamples = 45U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23986U;
    tmp_msg_0.avg = 0.7500217906131859;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8238490875196279;
    msg.lon = 0.20507879370293824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.8160533002351473);
    msg.setSource(11019U);
    msg.setSourceEntity(15U);
    msg.setDestination(26819U);
    msg.setDestinationEntity(235U);
    msg.parameter = 133U;
    msg.numsamples = 19U;
    msg.lat = 0.37971411954432455;
    msg.lon = 0.8395723762689067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.4012211329068148);
    msg.setSource(14952U);
    msg.setSourceEntity(131U);
    msg.setDestination(29700U);
    msg.setDestinationEntity(9U);
    msg.depth = 54176U;
    msg.avg = 0.32212533837171564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.5917483772305772);
    msg.setSource(42894U);
    msg.setSourceEntity(207U);
    msg.setDestination(49300U);
    msg.setDestinationEntity(230U);
    msg.depth = 26608U;
    msg.avg = 0.3921643401875502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.3043731363855664);
    msg.setSource(23910U);
    msg.setSourceEntity(101U);
    msg.setDestination(12213U);
    msg.setDestinationEntity(77U);
    msg.depth = 41793U;
    msg.avg = 0.30323659557460825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.5577558445262758);
    msg.setSource(15601U);
    msg.setSourceEntity(93U);
    msg.setDestination(56722U);
    msg.setDestinationEntity(32U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.19357687014880942);
    msg.setSource(51046U);
    msg.setSourceEntity(187U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(99U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.28156744762812913);
    msg.setSource(4494U);
    msg.setSourceEntity(167U);
    msg.setDestination(7039U);
    msg.setDestinationEntity(223U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.6805055124802291);
    msg.setSource(60792U);
    msg.setSourceEntity(89U);
    msg.setDestination(16131U);
    msg.setDestinationEntity(197U);
    msg.sys_name.assign("WFXLSDVUGFJUDHV");
    msg.sys_type = 100U;
    msg.owner = 18860U;
    msg.lat = 0.2812812543155301;
    msg.lon = 0.41368753633215105;
    msg.height = 0.5236890111941618;
    msg.services.assign("CPNIGEQFAVKEOPDJABHSBKYLGHQEUSVNUOTJLPFACYHTUSAPDJWCTIBFCLSVSLNYKQGUDQNGIYZALXDLUMMIZXWZBNMKZIBMNOCVFUIANMXEPDTXRZXBFCYUEVTPOSCQWYDSTRNXYMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.202152837743232);
    msg.setSource(32017U);
    msg.setSourceEntity(34U);
    msg.setDestination(29850U);
    msg.setDestinationEntity(222U);
    msg.sys_name.assign("IPGMCINZLWOCRSIIQFQMOOMYVSMGAASHWFBVDUCGWJLEPAHVASVEGPQMDWSQKRNVHSECYHCOXJYTYYTGOWTDAMBX");
    msg.sys_type = 144U;
    msg.owner = 48291U;
    msg.lat = 0.30850947025771847;
    msg.lon = 0.04301491604736707;
    msg.height = 0.8237607266976502;
    msg.services.assign("POHDHPPJWZPBMEXXUFOJCZNWACQSGDCJPDNYJRASVOOFBDTKHWVVGQTYJCZEFHQIMQSDLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.06908214431353277);
    msg.setSource(8073U);
    msg.setSourceEntity(22U);
    msg.setDestination(42542U);
    msg.setDestinationEntity(0U);
    msg.sys_name.assign("GUUXAZVYUARUDJXCDFMJRLEUKZJTKWWFMGZFYX");
    msg.sys_type = 51U;
    msg.owner = 43328U;
    msg.lat = 0.9278023569749305;
    msg.lon = 0.5270199898456261;
    msg.height = 0.41445657913624034;
    msg.services.assign("CFWMOTRFQDINXSAGSMXYXKDMDEYKOJFMQLJYWZIQTYAYSKENWXNCERCBWSBGSKLEJVDKVCZAFBKXTRLPAFVLQYOIPHSKWISHUZJZVPNWZNRWRBVQUCMTPCDZBIMUFTTEKCQPEXBFIA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.952373805494982);
    msg.setSource(35039U);
    msg.setSourceEntity(87U);
    msg.setDestination(50085U);
    msg.setDestinationEntity(47U);
    msg.service.assign("AHHVYVKKLCHBWQMLYYHIMCKMDZCEEGRNTNXBYSOQVHRJTUVMEZSBSPJQGMBLEKMGB");
    msg.service_type = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.9130987451128166);
    msg.setSource(41854U);
    msg.setSourceEntity(117U);
    msg.setDestination(41400U);
    msg.setDestinationEntity(166U);
    msg.service.assign("YRATGKQFOPRHUTEKXKMOMVJYMFEQCYDVMBGVFCEOUZPRSNZBTNWKRQODXRNTWIDWZISMBAXUDWXQUOHZWULSCARJBKVWDFDPMQSVPOENSKWBUEZPZURNBLRKINMVCATGTCFWXZYHDABDILVSIJEJQGLUCSGOEACFIXCDFMLUXHNLBKWYKGLXVSORMHALJCRYIZYBAPFJPINLVGYB");
    msg.service_type = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.19195601074963398);
    msg.setSource(43603U);
    msg.setSourceEntity(52U);
    msg.setDestination(54915U);
    msg.setDestinationEntity(94U);
    msg.service.assign("KBOPAVIJMNCGHWZLFDLERXZAIIDGZBQYRMCUPCKXYTTSPCDHJOANHTXCHEMBFFOUNOIIEVXPBFLVRRZMRLTMTDIOMZKZVNBZRASFWUMAOHDUABXVVTAIREDHQLKKBISGLUYLKPXEJQDYGBUDNPSQMXHQREIXQ");
    msg.service_type = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.022871155853285252);
    msg.setSource(24377U);
    msg.setSourceEntity(149U);
    msg.setDestination(15121U);
    msg.setDestinationEntity(93U);
    msg.value = 0.10436953227482804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.6328238566124911);
    msg.setSource(22780U);
    msg.setSourceEntity(137U);
    msg.setDestination(50630U);
    msg.setDestinationEntity(202U);
    msg.value = 0.09423667082937592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.9928768293174325);
    msg.setSource(56611U);
    msg.setSourceEntity(102U);
    msg.setDestination(10929U);
    msg.setDestinationEntity(57U);
    msg.value = 0.925835715695877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.3125721226760385);
    msg.setSource(39746U);
    msg.setSourceEntity(11U);
    msg.setDestination(28546U);
    msg.setDestinationEntity(108U);
    msg.value = 0.2545663800875573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.7423722778932668);
    msg.setSource(24520U);
    msg.setSourceEntity(69U);
    msg.setDestination(65326U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6379908663068247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.5581318250869559);
    msg.setSource(63256U);
    msg.setSourceEntity(156U);
    msg.setDestination(6212U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8642133150077853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.3662814050054807);
    msg.setSource(6287U);
    msg.setSourceEntity(231U);
    msg.setDestination(61267U);
    msg.setDestinationEntity(250U);
    msg.value = 0.21092263001628442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.7129439384178832);
    msg.setSource(47451U);
    msg.setSourceEntity(122U);
    msg.setDestination(32628U);
    msg.setDestinationEntity(173U);
    msg.value = 0.13574166686156575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.465647194632);
    msg.setSource(8204U);
    msg.setSourceEntity(25U);
    msg.setDestination(35951U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6076973819755503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.7753866392722796);
    msg.setSource(43231U);
    msg.setSourceEntity(166U);
    msg.setDestination(44517U);
    msg.setDestinationEntity(4U);
    msg.number.assign("APHQOUNTROOGSMAQAEVAXZZNFDYPOZI");
    msg.timeout = 39855U;
    msg.contents.assign("LWAYWUNYLFVRSLRNJAXFXMMUYPZHKHTCPBNVLTXLFWZZPCDMBJHZTYQRVHQHZTOBRQFDNFKPVAZUSCUIPWAEJATHFJFROOSGDQNSIDYCVTOGUTYDJEOQWNSUFRGBEKTGKVIUGHTIIEKIOKXXGZRCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.31429158121613165);
    msg.setSource(54489U);
    msg.setSourceEntity(31U);
    msg.setDestination(53634U);
    msg.setDestinationEntity(102U);
    msg.number.assign("CVAEJXZOSARDWLTGDTLQKDXWMCMMFSFAVTWFESPZKXRWUBCIHNWBXXSIBMUYCSDPTPONGMPHDQYPPHWVNK");
    msg.timeout = 58417U;
    msg.contents.assign("LFINSSQXVFBOFVTGNYDTQJQIEUWMKAEWVIYROUDTUZHDMWUNTQIFRQBCRVCSLCRBFMUDHZWFBFWKGBQEMTSCZWOXIIZJHKIDLUJFJKGKPNQHBUUKREQPYGONUKCYHLDPGPYXYOOAXNVERYKDEBZXZENGSBAQYTLZVCRHYHJXLFGGJVFXPSTRCMWSLPAAOAXPDSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.9332712053151951);
    msg.setSource(37699U);
    msg.setSourceEntity(246U);
    msg.setDestination(48451U);
    msg.setDestinationEntity(215U);
    msg.number.assign("VAMZVAAPHXPYKHYURQQNFSHMQPSDHIYTNWEDRWRLDLJBQJWXZJKZYOREEFFVMRXFJUAOYCDNDKNTCVRYUKSGCWBDITCQMOLWZWECCAUDVUIXIPQRLEKPBXIFMVXVLENSASWTURXGMMONLZZELBTDGVYPWEJOIKFXCSUPTKALNBRABFQHTJGUZHMXSPDIMJNBAMLJHKZZSOCGJBIWKGF");
    msg.timeout = 49867U;
    msg.contents.assign("FLVNBBQSDHXHKEFZYIPQDVMGKDFIIPKRZNQYFEVXPMGQGXVUGIKDEQHWUYTTDZSKFQDYMNOUOGENEDHVTMGBNW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.013107282725799863);
    msg.setSource(44958U);
    msg.setSourceEntity(12U);
    msg.setDestination(35604U);
    msg.setDestinationEntity(18U);
    msg.seq = 1003122288U;
    msg.destination.assign("SYBXYFVVICNURZNUATNZNCLYEPUIZTOAGNBOQYEXJSRGOSCGOXABVRUYSLCPOCTWNGAWHKLMKMMULINOZEOMDQEDCFQZRBJSCPRWXKFXLIITHDYACHGBFWNKRMLIYQDYUUWHDPJXEHGNFVPOVMCRUKDADZJFPSGTAQTBHBKMAZIIXFHRXPQNBPZVEWKMIDFVSHZSGVLJGCLQEUXMVVQKUWJBHWLJRHSBWIZWE");
    msg.timeout = 16199U;
    const char tmp_msg_0[] = {-48, -33, -62, -98, 65, -81, -34, 83, -75, -32, -47, -76, -43, 1, 55, -71, -34, -37, 5, 5, -125, -48, 43, 46, -24, -127, 39, 49, -34, -75, -87, 80, -77, 13, -92, 16, 11, 95, 7, -96, -108, -94, 4, 105, -6, 69, -57, 47, 71, -89, 113, -64, 114, 1, -121, 93, -97, -40, 35, -77, 2, -78, -116, -123, 85, -37, -10, 4, 33, -40, 80, -71, 54, -119, 110, -52, -25, -23, -121, 4, 104, -102, 100, -82, -55, 68, -48, 42, -120, 1, 41, 116, 94, -120, 35, -73, 120, 47, -89, -79, 54, 64, -76, -81, -11, 91, -18, 79, 31, -44, 48, 69, -48, -24, 60, 5, 4, 75, -30, 81, 117, 35, 22, 30, 16, 13, 16, -80, -124, 45, -29, 90, -5, -74, -122, -30, 51, 36, 53, 12, 39, -53, -46, -51, -30, -31, 59, -31, 28, 51, 25, -41, -76, 90, 29, -61, -6, 126, -84, -63, -20, -93, -30, 40, 42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.09143394892261514);
    msg.setSource(49879U);
    msg.setSourceEntity(172U);
    msg.setDestination(35705U);
    msg.setDestinationEntity(43U);
    msg.seq = 1223760502U;
    msg.destination.assign("INGRUNJRATLFXAZBFHVEFCVEHFIOZHPLVNWCYXMPXVGPEFT");
    msg.timeout = 24007U;
    const char tmp_msg_0[] = {-83, -95, 71, 88, -99, 102, 39, 116, 31, 97, -36, 117, 68, 34, 41, -100, -43, -44, -31, -117, -119, -8, 7, -21, 19, 114, -15, 101, 71, 126, 117, -68, -113, 109, 24, -70, 86, 11, -65, -59, -18, 76, 21, -49, -75, 63, 86, -100, -125, 69, 27, 13, -88, -61, 33, -15, 17, 27, -39, -40, -65, -51, -74, -3, -18, 1, 111, 37, -5, 80, 25, -56, -43, -97, 27, -117, 98, -86, 19, -122, 24, 124, 99, 122, 106, -13, 29, -11, 48, 57, 26, -13, -102, -107, -4, -112, 60, 110, -23, 12, -36, 8, 92, -79, -28, 15, 10, -102, -92, 44, -70, 8, -40, -20, 86, 44, -94, -13, 34, 98, -123, 10, -92, -114, 87, -29, 123, 2, -75, 29, 66, -44, 17, -68, 75, 84, 38, 87, 41, 20, 121, 48, -126, 29, 43, -30, 0, 5, 20, 96, 105, -50, -38, -56, 66, -22, 19, -67, 24, -112, 16, 52, 90, -97, 22, 25, 44, 64, 66, 112, 49, -9, -37, -50, 49, 29, 103, -69, -27, -25, -26, 69, 42, 59, -103, 35, 1, 77, 79, -32, -17, 29, -95, -100, -103, 83, 83, -108, -80, 24, 80, 126, 115, -76, 107, 101, -102, -107, -76, 71, 121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.5387414127958198);
    msg.setSource(56153U);
    msg.setSourceEntity(119U);
    msg.setDestination(11166U);
    msg.setDestinationEntity(116U);
    msg.seq = 1412549789U;
    msg.destination.assign("BTHMXOFSFXLGJKXCVAKYXELXECYDKUKDUNSUOTDYBCBBKPRTLGOZZBYLTIMEUISNISYQLZGSBAGDCAQVLMICXQXZTCCGFIHLZHDZQAXETPWJVENGGCIJRSMWRDVUJPUVYNQWOPKNMMHLZNEWEAFFQPRRQVCYTBWTMDGAOFINDVNRCTUBMEFEGDXJKZWYSTGUFZLPUBIIAXWYFQHJRSNHOKJHRWWPVLDUAPMHJOQEKPSZHKBOFHAWOVJR");
    msg.timeout = 7261U;
    const char tmp_msg_0[] = {57, 36, 64, -3, 70, 40, -58, -101, -1, 36, 36, -116, 122, -92, -124, 118, -43, -17, 112, -22, 45, -80, 82, 73, 77, -56, 105, 91, -73, -35, -35, -77, -90, -7, 102, -5, -63, -19, 115, 34, 75, -97, 45, -18, -13, 4, 90, 106, 9, -72, 36, 85, -8, 24, 22, -125, -118, 94, -115, -41, -95, 107, 65, -72, -18, -120, -110, 10, 62, 57, 75, 89, 28, -106, 108, -127, 35, 88, 121, 73, -94, 54, -90, 116, 47, -84, 4, -48, -127, -33, -17, -85, 36, -127, -80, 51, -97, 57, -79, -34, 28, -125, 125, 82, 15, 24, 27, 64, -76, 36, -2, 87, -29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.12339549790563009);
    msg.setSource(22329U);
    msg.setSourceEntity(101U);
    msg.setDestination(33252U);
    msg.setDestinationEntity(91U);
    msg.source.assign("WEMXNCXGYQSBXOQTKHZUNCZGINFZEKRWVRAGYICYVLRYPGVSKHLJUZEXUYRQMQEDHEFQFZNTD");
    const char tmp_msg_0[] = {103, -119, -44, -111, -63, 75, -16, 25, 69, 36, -127, -33, 32, -98, -49, 1, -35, 50, 94, -53, -23, 31, -34, 53, 45, 64, -93, -55, -10, 65, 17, -40, 125, -37, 8, -5, 82, -93, 116, -115, 59, 54, 12, 16, 88, 64, -58, 55, -60, 33, -82, -29, -16, 108, -59, -96, -55, -61, 34, 90, -1, -56, -125, 110, 63, 72, -4, 100, -19, -120, -95, 8, -125, -89, -19, -75, 6, -73, -121, 92, -122, 37, -58, 75, 9, 12, 120, 26, -23, 122, -72, -18, 75, 77, -50, -62, 25, 100, -20, 8, 20, 117, -118, -94, -16, -91, -97, 38, 4, 58, -101, -104, 119, 14, -8, 91, -95, -95, 21, 69, 80, 64, 40, 103, 62, 15, 61, -40, 17, 116, -48, 7, 113, -47, -57, -105, -115, 60, 42, 17, -56, -20, 54, 25, -1, 41, -34, 82, 92, 13, 84, -15, -45, -117, 116, -35, 24, -60, 111, 55, 25, 45, 52, -90, -68, -95, -39, -74, 107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.31472697054253107);
    msg.setSource(212U);
    msg.setSourceEntity(78U);
    msg.setDestination(6108U);
    msg.setDestinationEntity(21U);
    msg.source.assign("OJSWBHOVZDYSQWNQVZDKHIXWJDVFYLGVTNHXXCKNIAIGEQJXULHVUVYKIRHYNROMAGLAFZDTGBZPDPONVXXUDHMPTSS");
    const char tmp_msg_0[] = {33, -36, -116, 59, -83, 58, -116, -118, -53, -66, -29, 29, 16, 26, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.2706559544272087);
    msg.setSource(49585U);
    msg.setSourceEntity(88U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(117U);
    msg.source.assign("EHJBTSDRKGPFAYEDPAPNAEDJWNVFXCCGQJSXUWMDCSKYDJQCHYTLTHMBIXMNAGIBIGQNAXJRZYRZROJLZVZVHAIVYFGBFAGWJNRERUZWIIXMOOSNVNQKRBFZTLUWPDXKSDSTKHNUOOUBIYONJCUQGAVDTOWOWQVLWHVMSREARJUXIMNFTCMXLILLGBZPDEKDLHKVGCUBIQKYXOPWFHMEQCPFSTTFSTY");
    const char tmp_msg_0[] = {31, -53, -42, -103, -99, -54, 92, 116, -86, -55, 94, 125, -22, -29, -100, 25, -95, -35, 58, 32, 56, -75, 123, -79, -38, -12, 126, 39, -96, -7, -49, -47, 114, 107, -32, -2, 4, 112, -3, 32, -109, -45, -88, 19, 28, -38, 110, -79, -13, -121, 50, 18, 40, -119, -67, -1, 28, 110, 16, -22, -47, -48, 55, -119, 84, 106, 99, -98, -76, -53, -17, 98, 83, 45, 37, -73, 38, 60, 59, -9, -56, -109, -15, -72, -117, -112, -92, 96, 29, 88, 78, 40, 17, 44, -69, -98, 3, 84, -18, 84, 41, 94, 16, 39, 88, 59, -77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.5528949599023196);
    msg.setSource(56155U);
    msg.setSourceEntity(199U);
    msg.setDestination(58227U);
    msg.setDestinationEntity(20U);
    msg.seq = 2100894194U;
    msg.state = 47U;
    msg.error.assign("JTRTOFDGDVHJEICLDDMCXXAWDXLHKMARBZVXECZZGNSDSZMPNNGDGUBYMQDLJMBLQERBMPRWOBYCQZOAZHOVSCNNZEYNMKNELUVYAIFKLTOBSFNJWYYRHIISAWPALODRAMWTUGTXVOGMBYJPUAEWCJEHKOVFSAHQTBUJVWFDFAKUMKBPQZHXSSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.5960950278511642);
    msg.setSource(6036U);
    msg.setSourceEntity(242U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(78U);
    msg.seq = 1613337161U;
    msg.state = 149U;
    msg.error.assign("OJFWXZCMEURCTLKKGOBMQGOQBCAASXYIUKMWCBWCHKIQUPTVRYSURQPLCLMEULRJDXLWDERYQKWISRSSNZHBSITWVHDJQOUGPGAHIUCZPJURXLVFDOFORTMJDBDZHTNKXTGLFNHWEQGHMOYPPJMZQVZZKTXVJMNYGODSFPWPZPJNYGAUOAUBEDBJAXCKEDYZFQFFOIYTNLRRYPXHKBBNQTMIWVMBFIXIYHDFINEVZSGNSLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.9989983118634501);
    msg.setSource(1483U);
    msg.setSourceEntity(154U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(175U);
    msg.seq = 3783517905U;
    msg.state = 126U;
    msg.error.assign("BZMUYQCFTKUCVDITRQBIGQNPRTZVZEKQOXIXJKJUVBBXSHBSJWWKFRKOPYQWBHYOOPGEDHIUEUBYMJDNMLUYVHGWOAGRFEDTVKXMXWCSANBYTFKNNCADGOUZPHRWPGIMZFCYPQJETIDFAUAFARJKLXWYTXNCMGGIZVLEYVDPJJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.34965679808576033);
    msg.setSource(62169U);
    msg.setSourceEntity(8U);
    msg.setDestination(8325U);
    msg.setDestinationEntity(183U);
    msg.origin.assign("OHYOWJSCOLFNPCSQZUGDVVFXDNKTSNGXITABJH");
    msg.text.assign("UITYHIQOZERTQJURFAVKTOGNPNFVTBEXJGDNWBMDBAQNJZWTTEBHOJCWUXRNJUDTMAAIXMHUKBHFEXHHSWZKEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.3481798539018084);
    msg.setSource(59711U);
    msg.setSourceEntity(184U);
    msg.setDestination(9740U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("OOQLXGFPSYTWKPCHVMRRKPEWKFVDUZBWVEBUCBNSDCRFFKBZJEKJYOPHMLRQJLDVBMHMYFLGAQQQGYVDINPLPYGGHKYXVUTELBMFLOIYUDLQKSAZVCJNSHFZNIRUVZNNDHMFXVEQOGOWUIYUHIXMTWKNDEAISOXNTAKPTXHSTHZTRNWIQWJAQDETEBMROXZPCWCFALWOSUGJDOCWVAYRMDP");
    msg.text.assign("PCSMSGVWPDIOCQMAVZNZIKEZSXKEJHNNSIVHMUPDADKNNEDEGXCKRDCEBHHQPXAMRKBDKQJGYSTLTCFCKTWZTDGPMZFQEJFIUONHMSDTXTSUDHAJHRACWOYZPSJGZNGRMRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.22678277524240076);
    msg.setSource(59935U);
    msg.setSourceEntity(116U);
    msg.setDestination(29934U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("QTEHWSMGUVUMQTDZYGCYGNTFILOIEPDKWXLFHOWGHEXBLCIHRMHXVXICVMYJCJGATSNAPKJBZUOHSMOJEHLYRAKDBZRUMOZIPUEXCDYCLEQPFVLJKPNZCTGTDADYVQVWHNZSTQITWYPLCWOESWRROLMIYBXBNVOFZPNXFTR");
    msg.text.assign("IFADNBDJKOXLMDKCHDECOEUWQEHYBZHXRSPUZJMNNILKCQRMBPPCPJRKFTBQSSXAQASHLPTAZFMSWECXLIXJZGXAXYYSFVWTVWRZKDUYLJGFRHOCARWLCBOWGOBUDQUBXGVMIVGCLZRJYCDGTWPNVIKJOITILFYXDIMSZJOVIQVNKKAGFUYKYANQWJVNAPMDJTZTMGOSEPENDUMREMVABBYNHKSEZUWELTUHWGCFOVNEPPLITTRHHHYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.3522258297924157);
    msg.setSource(27221U);
    msg.setSourceEntity(217U);
    msg.setDestination(51815U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("VBZRPVVLAKPHDWAHSQFWYJHVMQFUPTOPDEZSNRAKQLTAVMRFDTUBUMCECJXLKKTSVFNEYJCIIUPYUOTSHDLYVJGXJCKNPFOZTYGYBUFVKLEGZBWPRNZFSODGC");
    msg.htime = 0.949228425007932;
    msg.lat = 0.8694349978647721;
    msg.lon = 0.17764335197313919;
    const char tmp_msg_0[] = {78, 112, -100, -45, -62, 91, 28, -78, -98, 8, -27, -56, -18, -13, 64, 110, -89, 62, -29, 60, 106, 103, 43, -47, 104, -65, -89, 119, 97, -104, 92, -75, 102, 69, 54, -36, -48, -103, 81, -3, 68, -63, -37, 110, 83, -122, -122, -60, 109, -124, 68, 103, 17, 99, 112, -120, -124, -42, -79, 8, 64, -127, -60, 51, -74, 79, -127, -82, -41, -40, -87, -42, -127, -24, 52, -91, 60, 25, 95, 30, 79, -121, -111, 56, -80, 42, 78, 66, -39, -117, 42, 4, 91, 64, 9, 98, -72, -106, -82, 121, 87, 122, -45, 60, 69, -29, -63, 1, 101, -12, -16, 59, 79, -33, -2, 18, -68, 66, -99, -29, 118, 90, -74, -128, -114, 107, 43, -64, 8, 70, 27, 39, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.9096693989364284);
    msg.setSource(29655U);
    msg.setSourceEntity(61U);
    msg.setDestination(53909U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("MXYZQTDFSOSCKEWKA");
    msg.htime = 0.7715072441751314;
    msg.lat = 0.39218678175180377;
    msg.lon = 0.3334813554053986;
    const char tmp_msg_0[] = {-76, 90, -18, -110, -63, -63, 48, -3, 103, 79, 69, -100, 85, -42, -30, -114, 51, 126, -22, -60, -30, -107, -85, -56, 48, 44, 2, -64, 97, 5, 42, 21, 64, -126, -20, 118, 94, -31, -119, -99, -93, -10, -22, 54, 85, 30, -122, 95, 18, -18, -40, -83, 10, 94, 17, -99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.29419897737792644);
    msg.setSource(34974U);
    msg.setSourceEntity(37U);
    msg.setDestination(42033U);
    msg.setDestinationEntity(84U);
    msg.origin.assign("BXLCPMRFLTKQJIFVTWZCDSQEIBVNJWHZDVJRJLTKEAENQFBQTOKMCDCRMQNQUCLEMBEFOMZVOMBFWJENZSCAZXKIFUIFOLTRIAWTVQOGYHBXLBWZKFESSGRIHBKYPHTQNCUPVXJABGFYWDGPXHPPSNOILDREOXWSLORV");
    msg.htime = 0.17985781676890833;
    msg.lat = 0.7206319809829952;
    msg.lon = 0.338271398483721;
    const char tmp_msg_0[] = {-114, -22, -9, -37, 49, -17, -15, -58, -76, 98, -35, -90, -53, 113, -4, -48, -114, 24, 39, -17, 85, 124, 95, 105, 57, 9, 62, 84, -35, -53, 95, -115, 50, 86, 105, 38, -104, 76, 125, 115, -117, 25, 89, -5, 76, 65, -66, 80, 0, 14, -97, 17, -101, -22, -108, -91, 55, 2, -30, -98, 125, -28, 97, -107, -125, 61, 48, -102, 72, 56, -86, -12, 87, -64, 2, -96, 9, -67, 73, 86, 10, -115, 104, -80, -123, 99, -118, -115, 6, -72, -21, 68, 44, 37, 73, -86, 12, 4, -38, -53, 76, 19, -85, -91, -88, 90, 26, -30, -72, 22, -59, 15, -57, 4, 39, -29, -29, 97, 113, 46, 0, 17, 68, 14, -65, 74, 80, -100, -41, -16, -81, -26, -125, -53, -102, 66, 106, 118, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.7598940440138697);
    msg.setSource(57708U);
    msg.setSourceEntity(43U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(122U);
    msg.req_id = 27792U;
    msg.ttl = 37251U;
    msg.destination.assign("ZJTBIJBHTYMGSWGRLLNCLNMKODBXZUCNEQCUMRE");
    const char tmp_msg_0[] = {-117, -87, -1, 45, 9, 19, -61, 41, -70, -59, -18, 42, -98, -70, 108, -81, 25, -27, 52, 36, 8, 2, -1, 112, 98, 88, 45, 77, -96, -54, -106, 99, -80, 108, 77, 116, -23, -93, 16, 73, -38, -5, -114, 9, -4, -56, -25, 126, -51, -84, -94, -97, 71, 81, 38, 29, 6, -110, -45, 100, -61, 6, 21, -47, -80, -115, -96, 17, 108, -38, 12, 52, -52, 114, 87, -55, -30, -69, -39, -33, -20, -73, -122, -1, 17, -79, -36, 63, -24, 40, 123, -75, -83, 66, -34, 107, 88, -73, -34, -92, 17, 48, 27, -117, 48, -122, -23, -118, 115, 65, 24, 12, -127, 100, 119, 4, -109, 32, -81, 90, -27, -25, 11, -23, -104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.7584676315313428);
    msg.setSource(2409U);
    msg.setSourceEntity(249U);
    msg.setDestination(10686U);
    msg.setDestinationEntity(86U);
    msg.req_id = 30186U;
    msg.ttl = 30308U;
    msg.destination.assign("FBPJECTGTFVJVMVZJKSNIUDOXVQFAHLIHEVPQFYXHRKSJTBMGFUAUPSCYAXQCHOMGBUWEAMSMROPFTTWGGTGMORDRRFGQHYWLLSOJBZHZANRPBRUIMP");
    const char tmp_msg_0[] = {-86, 24, 5, -48, -11, -44, -47, 8, -127, 102, 50, 13, 125, -91, -88, 41, -125, -36, -54, -27, -18, -123, 53, -123, -6, -128, -32, 53, -22, -125, 31, 47, -17, 74, 69, -82, 13, -37, -86, 44, 111, 84, 72, -108, -47, 28, 8, -120, 51, 69, -24, 22, -114, 111, -42, -39, -8, 125, -103, 63, 67, 87, 58, 27, -51, -26, -9, -66, 53, -79, -99, 76, -15, 5, -63, 12, 32, -12, -74, -98, -39, 87, 39, -110, 21, 53, -81, 50, 112, 120, 84, 11, 86, 24, -82, 118, -104, 16, -99, 40, 28, 63, 27, -32, -47, 78, 85, 43, 126, 109, -77, -13, 31, 50, 56, 78, 2, 70, -46, 2, -18, 62, 12, 36, 95, -66, -22, 39, -94, -31, 48, 24, 51, -93, 124, 112, -74, -40, 34, -69, 122, -20, -92, -109, -34, 3, -23, 119, 96, -99, 22, -8, 44, -39, -102, -33, -80, -13, 54, 84, -83, 27, 104, -9, -55, -77, 54, 27, -14, -112, -95, 71, -76, 121, -54, 104, -72, 1, -4, 73, -101, 68, -62, 47, 20, 43, 19, -86, -72, 90, -126, -12, 101, 107, 67, 11, 121, -46, 19, -81, 88, -111, 19, 33, -109, 95};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.6038775446128376);
    msg.setSource(529U);
    msg.setSourceEntity(231U);
    msg.setDestination(31025U);
    msg.setDestinationEntity(253U);
    msg.req_id = 27552U;
    msg.ttl = 29729U;
    msg.destination.assign("XYHWBEVOJAUPXJATOECLCNRSSZPZCAAVLHXMQMSIGUFFRYMIHEIEUYRZLVGNXSQQAUPFTDIBVCSLDQJRKRSOZZYJYKRCFBKQHZONHGWMIVWQXKMAUKDGJJDJVBVGLDRMIKZUNKRGXSXPYEHKLGPAFAVSFKVBASTTGNPKYUHTONDWTQOQHEMETXY");
    const char tmp_msg_0[] = {55, 57, -84, -89, 98, 1, -105, -16, 98, 21, 29, 88, -27, -27, -113, -46, -121, 124, -25, -112, 62, -86, -115, 116, 24, -2, -46, 46, -119, -113, -49, 57, 24, 89, 63, 124, -94, -89, -24, 0, -2, 63, -78, -90, 100, -111, 38, 106, -40, 68, -8, 109, 105, -97, 38, 59, 43, -78, -53, 92, -92, 62, 79, 80, -29, 98, -37, 73, -15, 14, -81, 85, 21, 105, 102, -125, 36, -7, -26, 3, 117, 59, 28, 14, 83, -31, -111, 63, -104, 94, -91, 79, 42, 24, 107, 53, -71, 16, 68, 18, 83, -100, 21, 1, -5, -20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.28438203817406504);
    msg.setSource(5325U);
    msg.setSourceEntity(42U);
    msg.setDestination(450U);
    msg.setDestinationEntity(43U);
    msg.req_id = 58713U;
    msg.status = 109U;
    msg.text.assign("USENMJFAPQHGLOXXFOGAEZVGKRTKQZNHSYSNZIMKOFAJGPQFYSPSKTSBVCWGBNJEJJYVBZVGVQMTXWGAFIZDCZQWRDXBWMYSYRMUQKBAJJUAIWCAYFTRPIDXQVFOPDUMUWCREJZNMRLXIQBKKWCTCIYTBUTIFYUFEEHHLXZHKQTBDSSHCKPHMEDONLZLGNEUWDPRVIOBLVJEOOAZGHJRVLLQCYXHPUUTOEIWAOPNFDVNBAMSWCXDXLYNPLRCIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.8084272479902188);
    msg.setSource(63299U);
    msg.setSourceEntity(68U);
    msg.setDestination(42129U);
    msg.setDestinationEntity(31U);
    msg.req_id = 27608U;
    msg.status = 247U;
    msg.text.assign("CMGRSCATKFTMMCUMHBKDKJZLFUQLZVYVDYTDHTDOYZFFZASGNJLPHYCWWBUIOTJRUHYVOTVCROUSSBXMIYEBZUYFRQUJNUNZAGADDEYPYWQVZEVNHEEOMBOKEPHSCWEPKMFKXAGKQJDGTBKXJCXDRQVENRANPLIYFCIFSFPALDZSHNKWXPHGWIVNPOFWBGIIKXWEMNAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.09636074015342555);
    msg.setSource(22050U);
    msg.setSourceEntity(222U);
    msg.setDestination(5796U);
    msg.setDestinationEntity(152U);
    msg.req_id = 20352U;
    msg.status = 134U;
    msg.text.assign("DRRUHHVRSTYNXIWFULCPDNGFVJRDXETACEPTXJOACJRGCZHIIDXEFVZWWUNBRZRIPIGBSOJJKHQTNTEWTCVTQDWUYKAMXHSUCMNGOHBBJGRJEDPLYZSFPCYYOGQUTMGLNYWQOFQIFKEBPHVSKQQXAZUDVPOXKWSALNCMYZESFKMQIAKIQJZOLEDYNPBKAKIBWMGMCPUZMFYLUZMYASUOVFISNALKHWHLVDXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.34272612728785545);
    msg.setSource(45268U);
    msg.setSourceEntity(57U);
    msg.setDestination(5234U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("FAYCMSYKHJHKJEVUTBZMRRLHZZICDSXRVLVUBJWYSBTUENWDEEVXBDRPAESNCYD");
    msg.links = 3330556546U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.15577587582586927);
    msg.setSource(60947U);
    msg.setSourceEntity(86U);
    msg.setDestination(6214U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("FSELDTCFMXFICGJWHHVYSLQJSNFHAYTONOJRWMUOASDXJOYADTCJGKESPIDAAIRJBVZSLHQWJIZTZIKS");
    msg.links = 2406593194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.6481943371426359);
    msg.setSource(3685U);
    msg.setSourceEntity(243U);
    msg.setDestination(30726U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("LQTAOXWFSKWOHVSBUIGBYCJUFBWAXQTGCEIDODUITMLJNZ");
    msg.links = 600121049U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.5472097568796888);
    msg.setSource(25537U);
    msg.setSourceEntity(29U);
    msg.setDestination(36312U);
    msg.setDestinationEntity(176U);
    msg.groupname.assign("LWXLTJFZYCHHCLRQNKEQDNHMIUMZNYEOAZVNYCXLBQRNZXICPVFGSORSDGALKTUKUXXOJUPIUUVASACBJZYQINHRPKZHJMOHXFBWD");
    msg.action = 32U;
    msg.grouplist.assign("UJTOKUBQGRDAFCWSWLTAQXVFANEXARLMCVLVZNOZOIJAVPBMGZSDLHPTJSSBKZWWXYSZDZYLPEUBYUHDOOYXLWHPFHVNNIDUKTRWNOCIHGQGIYSRVVPFHVNDJCJIJJXMTGKUOBYUMBJUGXXPHWDDPADGNMCPCHYYYBYZETIFQLRFBREJOWZDSEGGSANRMOQLQHFVETKWMQMFKECRQLAXBRIEUKPAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.29917762432915174);
    msg.setSource(55822U);
    msg.setSourceEntity(110U);
    msg.setDestination(61294U);
    msg.setDestinationEntity(162U);
    msg.groupname.assign("AFUNETTMDVOFEKDXVYHINDIOXSBRQVTKCQBQWXERRFNGXAMWQMQOSJCMLDBGCWMGLZIFYRRRYHUCGL");
    msg.action = 37U;
    msg.grouplist.assign("IEHTRTDCSEYQUXNVLQZJSHRHMDNIHGHLAMDMYMVQCBWWIQRQKFMAEENLRZWJNFXRYDLZOOSHUMGGAFXWPPHKYIQPGZVLRTMIXCDUJDPAFXDRYGBYZVJXVEKQSLJRVFRKGHTEPNWZOBNBMQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.49110645063904523);
    msg.setSource(61731U);
    msg.setSourceEntity(119U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("RXCXJRKTPABYFJATLUJKFNIZZNYAXGRGJCNQEUHEDUYRAFQVVWGZKFQRDLPSGEMYOCMOIHXSFUYIUJAHCIK");
    msg.action = 203U;
    msg.grouplist.assign("DQANGHVUMMFZYWCRASWUCTKKSYVAEFWOCEMXEWLXKFYIRFQOOZIEDYAKLMYMWJPBJHZGFZUHSAACRBPRBGWAHINRJKGTPHLQJUZZVDMUNSSQSGNSPVFILTHOUARYOOEBGFFITDVGVCXSXOJMLPKXGWDWNNPLFRNSQGJVNMDQHWTTCKDQWVJIZJYQEIDZBITPJMZLRHOUJYTIXCXEOBTDXXSPKEVUCCKXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.9324928854078579);
    msg.setSource(26469U);
    msg.setSourceEntity(239U);
    msg.setDestination(22136U);
    msg.setDestinationEntity(81U);
    msg.value = 0.573644834935251;
    msg.sys_src = 41711U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.9485118096805274);
    msg.setSource(56248U);
    msg.setSourceEntity(118U);
    msg.setDestination(16161U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5736276462730452;
    msg.sys_src = 43203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.38872009190219237);
    msg.setSource(848U);
    msg.setSourceEntity(243U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(240U);
    msg.value = 0.41943718417324805;
    msg.sys_src = 39446U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.5950611887718059);
    msg.setSource(59529U);
    msg.setSourceEntity(20U);
    msg.setDestination(12811U);
    msg.setDestinationEntity(76U);
    msg.value = 0.8265334194459569;
    msg.units = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.2496373551365465);
    msg.setSource(31263U);
    msg.setSourceEntity(12U);
    msg.setDestination(58790U);
    msg.setDestinationEntity(5U);
    msg.value = 0.5138422031679978;
    msg.units = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.6079680530604352);
    msg.setSource(2916U);
    msg.setSourceEntity(160U);
    msg.setDestination(34641U);
    msg.setDestinationEntity(220U);
    msg.value = 0.8788557054120574;
    msg.units = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.22244385865082805);
    msg.setSource(63287U);
    msg.setSourceEntity(41U);
    msg.setDestination(49395U);
    msg.setDestinationEntity(193U);
    msg.base_lat = 0.06282956177598398;
    msg.base_lon = 0.9944701326046979;
    msg.base_time = 0.2267668948430086;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 24100U;
    tmp_msg_0.destination = 24027U;
    tmp_msg_0.timeout = 0.9007920842512795;
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 72U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.6705034345046225);
    msg.setSource(63455U);
    msg.setSourceEntity(164U);
    msg.setDestination(46217U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.010799654564245809;
    msg.base_lon = 0.27688285708572646;
    msg.base_time = 0.635094498228359;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 34288U;
    tmp_msg_0.priority = -7;
    tmp_msg_0.x = -6125;
    tmp_msg_0.y = -3747;
    tmp_msg_0.z = 17255;
    tmp_msg_0.t = 13959;
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 3676709558U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.5287511049895566);
    msg.setSource(1233U);
    msg.setSourceEntity(86U);
    msg.setDestination(7481U);
    msg.setDestinationEntity(246U);
    msg.base_lat = 0.5081835537130525;
    msg.base_lon = 0.34217651582080466;
    msg.base_time = 0.523569103532083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.5414821441343908);
    msg.setSource(43844U);
    msg.setSourceEntity(197U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(162U);
    msg.base_lat = 0.14546762185715978;
    msg.base_lon = 0.15176942453716913;
    msg.base_time = 0.8360060939339619;
    const char tmp_msg_0[] = {-119, 41, -35, -88, -11, -58, 71, -127, 108, 45, 28, -110, -8, 19, 105, 13, -55, -41, -114, 28, -46, 93, -44, -5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.533822385354906);
    msg.setSource(14884U);
    msg.setSourceEntity(94U);
    msg.setDestination(50103U);
    msg.setDestinationEntity(119U);
    msg.base_lat = 0.8848177022875424;
    msg.base_lon = 0.10540097274200433;
    msg.base_time = 0.38994030323263407;
    const char tmp_msg_0[] = {-8, -11, 95, 13, -15, -127, 126, -113, -113, 19, 68, 15, -91, -27, 12, -2, 78, -46, -107, -28, -87, 105, -18, 48, -14, -79, 30, 20, 82, -80, 46, 73, -38, 60, 124, -49, 100, 83, 34, -28, -8, 96, -34, -123, -17, -10, 91, 56, 18, -103, 51, -98, -84, -61, -99, 68, 108, 108, 110, -79, -63, 57, -29, 51, -48, 80, 63, 108, 29, -98, -85, -1, -88, -93, -44, -67, 101, 123, 18, -48, -18, -11, -14, -43, -118, -122, -52, 113, 20, 43, 25, -29, -110, -47, -44, -43, 64, 92, 114, 41, -45, -20, 27, 94, -42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.0856173197193687);
    msg.setSource(51888U);
    msg.setSourceEntity(211U);
    msg.setDestination(42738U);
    msg.setDestinationEntity(154U);
    msg.base_lat = 0.39186716659846155;
    msg.base_lon = 0.9724510858273985;
    msg.base_time = 0.6393535683260632;
    const char tmp_msg_0[] = {10, 25, -19, -93, -18, -4, -56, -101, -58, -84, 15, 11, -91, 79, 120, 23, 34, 110, -40, -85, 113, -127, 34, 119, 24, 87, 40, -12, -110, 89, 107, -11, -19, 17, -46, 104, -123, -59, 61, 67, -3, -16, 110, -15, 42, -30, 77, 84, -89, 73, 6, -36, 15, 52, -95, -95, 42, 112, 55, -95, -59, 126, -126, 59, -74, -89, 121, -103, -128, -66, -62, -103, -54, -84, -7, -68, 37, 13, -66, 30, 59, -17, -113, -107, -72, 106, -20, 36, 28, -128, 3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.7651788173333429);
    msg.setSource(8542U);
    msg.setSourceEntity(28U);
    msg.setDestination(28640U);
    msg.setDestinationEntity(139U);
    msg.sys_id = 64018U;
    msg.priority = -63;
    msg.x = 19762;
    msg.y = 1086;
    msg.z = 8898;
    msg.t = -4509;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.5035839273039646;
    tmp_msg_0.aoa = 0.5815421873634838;
    tmp_msg_0.ssa = 0.13838486016224794;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.2730242501781307);
    msg.setSource(61230U);
    msg.setSourceEntity(199U);
    msg.setDestination(16527U);
    msg.setDestinationEntity(248U);
    msg.sys_id = 17080U;
    msg.priority = -73;
    msg.x = 16587;
    msg.y = 10613;
    msg.z = -31562;
    msg.t = 29733;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 73U;
    tmp_msg_0.entities.assign("DPETNHNEUVQIBFHIFXNJWQLODOFKLWMIZYVAYQJIJJGWXFUZAVECOFAMBHYSKKCIKCHGPEPTAADSQLVZVRWNQHWVZHBTSMBODRUWCOBCQCTKBMQFTPBSLWLEZJMNWTOPAPPURCLMKLXGRAYXCEVDDVXTJUYKMHBOTCLYFZPEIHRMTGMSXLGTSQHDURYJEYREZNZHECSXDNGAJ");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.47567678122727286);
    msg.setSource(62914U);
    msg.setSourceEntity(78U);
    msg.setDestination(54095U);
    msg.setDestinationEntity(11U);
    msg.sys_id = 48541U;
    msg.priority = -99;
    msg.x = 3268;
    msg.y = 4248;
    msg.z = -2613;
    msg.t = -10240;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9860446664961732;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.8555458838215924);
    msg.setSource(56051U);
    msg.setSourceEntity(0U);
    msg.setDestination(40613U);
    msg.setDestinationEntity(86U);
    msg.req_id = 13797U;
    msg.type = 39U;
    msg.max_size = 5145U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.35537811503932837;
    tmp_msg_0.base_lon = 0.5248442580429191;
    tmp_msg_0.base_time = 0.5222643485203352;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.31054056460662716);
    msg.setSource(36531U);
    msg.setSourceEntity(202U);
    msg.setDestination(38101U);
    msg.setDestinationEntity(64U);
    msg.req_id = 4630U;
    msg.type = 152U;
    msg.max_size = 35311U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.44680020190948677;
    tmp_msg_0.base_lon = 0.9531111714264567;
    tmp_msg_0.base_time = 0.201130779937446;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.1133316420177587);
    msg.setSource(50534U);
    msg.setSourceEntity(229U);
    msg.setDestination(59424U);
    msg.setDestinationEntity(163U);
    msg.req_id = 35474U;
    msg.type = 55U;
    msg.max_size = 11109U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.68538642075358;
    tmp_msg_0.base_lon = 0.5423442638804554;
    tmp_msg_0.base_time = 0.8094697762063388;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 7020U;
    tmp_tmp_msg_0_0.destination = 3314U;
    tmp_tmp_msg_0_0.timeout = 0.1986441736941853;
    IMC::UsblPosition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target = 34547U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.7888420730471642;
    tmp_tmp_tmp_msg_0_0_0.y = 0.2492570278566295;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6021898230452611;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.4095531319145377);
    msg.setSource(4954U);
    msg.setSourceEntity(162U);
    msg.setDestination(34524U);
    msg.setDestinationEntity(143U);
    msg.original_source = 33492U;
    msg.destination = 59858U;
    msg.timeout = 0.09841526239717246;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.5701066683520383;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.41731911028870594);
    msg.setSource(26475U);
    msg.setSourceEntity(107U);
    msg.setDestination(30880U);
    msg.setDestinationEntity(221U);
    msg.original_source = 16227U;
    msg.destination = 24815U;
    msg.timeout = 0.6657152958491396;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("GHETYAAORADQXSUWZBFSGRNRQNYIFNZHMCJLDZPAHEKGQQGKUWDKESMAFBBIXVLCXQCLSUMCCJAMCAZUOYNWKVEJXDCBQHNTWNRSZILUAZIRJDODDSDJUNHGGUWKRERNWQISEWPHPRWPBNKAEVKQVEYYTFPRXMKUGELSDVBLBBJYBKTIZUOYMITNPHFFWOPOPGFZZIOOKSTJMOXBYGJXIFLQ");
    tmp_msg_0.action = 59U;
    tmp_msg_0.grouplist.assign("FNQAZMOLNGWZLMMKRHASODNHLSKKQVIGBWRYALAIHJSZVCKIBSSGQEGDXKBOZSAQHTFRNAIWYWYIXQRUPDJFKNXQGUTFRABELHIEPATFJZNZHOMPFROIAXFKNCYKCEDJUDFTFGGOBKXDUBHQWVOUDWOZRDYBGYLMPOIVQPXQIUNFUYVVLJNLXCMCSWRMHLCVCELVWBNJTBHTJSXRQRUDPJBEHMUCCGXTMUPWYVGODKETZSPYEMZJ");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.6664518528647658);
    msg.setSource(17758U);
    msg.setSourceEntity(250U);
    msg.setDestination(20510U);
    msg.setDestinationEntity(225U);
    msg.original_source = 50436U;
    msg.destination = 19800U;
    msg.timeout = 0.34521373685370016;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 80U;
    tmp_msg_0.mnames.assign("MRMTXZMKPRVLPOUXPEDWMZZSSQCEJ");
    tmp_msg_0.ecount = 186U;
    tmp_msg_0.enames.assign("HQPAZBKXSRVAWLDDXVIZUSFOTJKKSJODJEKNNDMQUGIXSYPQIUOYJOFSRVYNNQRMMYQCBMTWHACWKVMELIAZPCKNMVYXCAGGZJVGOZOEXCZIFEFUFYXLWBAAWHNSOCTTCEHBSFTPFGEWQABGEUPE");
    tmp_msg_0.ccount = 228U;
    tmp_msg_0.cnames.assign("NCIRICCGZHCUKRKUSKYKQFVWDPBGUTTCDKFSRQEPNBUAVRKWQIVDNXDIVJHSJYLBSYLFNTHWPSGXHRTMHOECITIQULMLVQVCFAWUOXHWQUGMOHMZJMDTX");
    tmp_msg_0.last_error.assign("JQWUBHOITYVDDRXSLHRUPURZAAPZYQSGSPBPPLUVTZEZJABIDLSJMLEDQXRGMQVWCBNHFFZYOJIQHYMDMWENNXVCXSGNOWUVXP");
    tmp_msg_0.last_error_time = 0.24678915076219243;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.1929657009527207);
    msg.setSource(845U);
    msg.setSourceEntity(241U);
    msg.setDestination(53357U);
    msg.setDestinationEntity(66U);
    msg.id = 189U;
    msg.range = 0.6933980830563602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.7435013442139073);
    msg.setSource(54647U);
    msg.setSourceEntity(139U);
    msg.setDestination(49481U);
    msg.setDestinationEntity(39U);
    msg.id = 225U;
    msg.range = 0.6707165802550671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.35447915651488826);
    msg.setSource(14556U);
    msg.setSourceEntity(48U);
    msg.setDestination(2101U);
    msg.setDestinationEntity(184U);
    msg.id = 253U;
    msg.range = 0.6037646259723214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.5825146884049821);
    msg.setSource(7386U);
    msg.setSourceEntity(14U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(240U);
    msg.beacon.assign("KJCKRAOJNHSRUFGXFDINZKILHMIYDKJSUPUMHZQAOHFSRENSEDFZBRCXCWVVBFFPKIBASCOSOWDDBEGSIZQXFQDYDALKEVYRMTWJGWXEAQZHYXPHNDWLJUGFBQMEVIOQVTTAWHPUEKBTSSTTPLG");
    msg.lat = 0.056966000952188844;
    msg.lon = 0.4106851560115279;
    msg.depth = 0.5309022134559326;
    msg.query_channel = 7U;
    msg.reply_channel = 116U;
    msg.transponder_delay = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.1969598531232183);
    msg.setSource(61358U);
    msg.setSourceEntity(157U);
    msg.setDestination(13598U);
    msg.setDestinationEntity(28U);
    msg.beacon.assign("GAGKNRNTCTBMEPSMESTMZUHAQASPOMIWTGIULXPRQGBMWIQLJLTQJALOWBAMWHHTJAFFLYPFQMUXBXYJNRUBDJCTDWXJFSQHGHYHZONYOGEFZOBIUGIPIFVHSZNVEZXJZCXXRAAYUULMLPBNECVRVOBQIVIFDUGGFSGKADMB");
    msg.lat = 0.3163210650593674;
    msg.lon = 0.17478055687832827;
    msg.depth = 0.8111799471114969;
    msg.query_channel = 216U;
    msg.reply_channel = 237U;
    msg.transponder_delay = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.6064721883613887);
    msg.setSource(34007U);
    msg.setSourceEntity(114U);
    msg.setDestination(27978U);
    msg.setDestinationEntity(58U);
    msg.beacon.assign("SSUYCAYZFSCWJYHGPORWSXQLZQVDJREFVMEXHOCJOSLGQHJWHKTWLXBIRIMAKPWPFBLUBMGVWRZOJCZFVLSNBQDETVLKNWQCFYRCTABMPUKTIXWIKYCEDIVMNEMERNNOXNUJKZGMZTQHLRONAPHW");
    msg.lat = 0.647162950767872;
    msg.lon = 0.4389205006367476;
    msg.depth = 0.7093889146497642;
    msg.query_channel = 44U;
    msg.reply_channel = 72U;
    msg.transponder_delay = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.4723396832965745);
    msg.setSource(31771U);
    msg.setSourceEntity(131U);
    msg.setDestination(63656U);
    msg.setDestinationEntity(115U);
    msg.op = 200U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YOSGWQVQPPPJUOMHYARFNRVKLZASSIWJOFVRLYPQXBSBHKAIUOFZJTCY");
    tmp_msg_0.lat = 0.7767945993884016;
    tmp_msg_0.lon = 0.7147345359121643;
    tmp_msg_0.depth = 0.6843086334699895;
    tmp_msg_0.query_channel = 181U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 32U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.9202130984504215);
    msg.setSource(58203U);
    msg.setSourceEntity(14U);
    msg.setDestination(29719U);
    msg.setDestinationEntity(202U);
    msg.op = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.3024125430987351);
    msg.setSource(38012U);
    msg.setSourceEntity(234U);
    msg.setDestination(57056U);
    msg.setDestinationEntity(203U);
    msg.op = 242U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EDUHYWFBUAFCFERCAHHNNXIDBPQHTUMMEZEZTWIZNTPXZHKVLLGYXTWAWBTKHLIPFZQHTYPNPXZLMWJJDCEHYLEUFSNWKPIJDTKTEMYGQCDJCKXMMRSQMQXIUYRURFGOJPAKVCKCOHZUKAVTOSGLVNAFDBAMWFIZJGMWDRDJVLTRAVXIMSODUAXIPNOBZGSXVCLBQRRWISE");
    tmp_msg_0.lat = 0.15292845549338652;
    tmp_msg_0.lon = 0.3135818754975388;
    tmp_msg_0.depth = 0.057690974016368135;
    tmp_msg_0.query_channel = 135U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 15U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.5729990973856676);
    msg.setSource(56859U);
    msg.setSourceEntity(32U);
    msg.setDestination(60732U);
    msg.setDestinationEntity(252U);
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.4007374142724802;
    tmp_msg_0.converg = 0.4389600019010331;
    tmp_msg_0.turbulence = 0.25878914876863957;
    tmp_msg_0.possimmon = 6U;
    tmp_msg_0.commmon = 75U;
    tmp_msg_0.convergmon = 59U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.9863518072463348);
    msg.setSource(21406U);
    msg.setSourceEntity(131U);
    msg.setDestination(36217U);
    msg.setDestinationEntity(24U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.0020855189927628803;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.3956156123283495);
    msg.setSource(42037U);
    msg.setSourceEntity(170U);
    msg.setDestination(22792U);
    msg.setDestinationEntity(12U);
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.49358550930580203;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.17375513331956027);
    msg.setSource(19924U);
    msg.setSourceEntity(41U);
    msg.setDestination(5834U);
    msg.setDestinationEntity(219U);
    msg.op = 152U;
    msg.system.assign("HMCDQWBFFXRCAHOSNKPXIGINCIEBEWDAPQZMFRGYESBRSQNSVLCVVZKYLZAACGXYVTBTHJXLMEZMKKMJMBOEJNNJHEQODFLCPVOGDUPLQHZRROFRNGYFMGRXYEJE");
    msg.range = 0.236231429572052;
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.9614246723412173);
    msg.setSource(15302U);
    msg.setSourceEntity(207U);
    msg.setDestination(31493U);
    msg.setDestinationEntity(57U);
    msg.op = 247U;
    msg.system.assign("NJPBVXQBNBNKCZVLWARKBWTFOVJAMDXWVGWSHTAMWSSUEOFNXQJDBFTHGMUPDBZRFHIYIYXUUSPJKKKMULJXRZPUIEYFKQYLDXDSMLTOJMGAIPANPGNISMQCJERDQQZVOGBGFOCWOWBTYHAIKALYGPBSALVJYITHPUVJIFQDNZFNUXCHYNOMCRKIVOEDUXTWR");
    msg.range = 0.7498118613416546;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("EPUPJWKZHXHODRHFRTANYCCHVGLCRJQKJCSPNSYSJKXWUEXZWITFABZZWXBXYXVMDLHSZVUUKOIZUEGERPBWJNPTJKNYQSDMVSYETCRGQIBYSHWGKEJYEOADSPCAZFRLHYBATIH");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.7020257399808464);
    msg.setSource(46700U);
    msg.setSourceEntity(187U);
    msg.setDestination(31289U);
    msg.setDestinationEntity(108U);
    msg.op = 179U;
    msg.system.assign("KWPVYKGYSZZPWBCBRLWIMMQKLKVKJLHGTBRRXPAFYIVVMWNIOEUSGBEATRGJNXDRZEVGCXKOOWGNUCMAHBAOMRDLIFSZDQGAFHBDXHXTMNJKDODMJAJIECKBDSYFIIPIVFX");
    msg.range = 0.9120183367546149;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 55550U;
    tmp_msg_0.control_ent = 58U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 51U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.67082542286519;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 68U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.6072560363399635;
    tmp_tmp_tmp_msg_0_0_1.z_units = 183U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.5332161341209969;
    tmp_tmp_msg_0_0.lon = 0.033944573509904874;
    tmp_tmp_msg_0_0.radius = 0.15024304128562838;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 41U;
    tmp_msg_0.proximity = 78U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.0939512545447283);
    msg.setSource(49962U);
    msg.setSourceEntity(203U);
    msg.setDestination(62581U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.740353561164797);
    msg.setSource(37150U);
    msg.setSourceEntity(4U);
    msg.setDestination(31824U);
    msg.setDestinationEntity(147U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.4633505076953154);
    msg.setSource(62465U);
    msg.setSourceEntity(56U);
    msg.setDestination(18822U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.5659467034780857);
    msg.setSource(54381U);
    msg.setSourceEntity(39U);
    msg.setDestination(10086U);
    msg.setDestinationEntity(2U);
    msg.list.assign("ZNLZTCPICVDSSQRUFCPCRAZOKMLUQYZHPZOJAIWSKGHKIYBIAOCSFUTECZJFHTXMCZXZRUPETLTJEKKMUOLDXBAGLFGYJFMEMYQRWYUMABSJQEQVSHXV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.5468918494303466);
    msg.setSource(43669U);
    msg.setSourceEntity(94U);
    msg.setDestination(10750U);
    msg.setDestinationEntity(194U);
    msg.list.assign("ARZHMNLKOORH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.35515323330033943);
    msg.setSource(1525U);
    msg.setSourceEntity(238U);
    msg.setDestination(8995U);
    msg.setDestinationEntity(11U);
    msg.list.assign("WYLSLXAODSQYPOHWGWTCUDRUENYFIZOACJSKQGPFMXPVQDKVPUBWMXAWJIVQMGAEIKVUFMRFBEEAECBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8840748614010817);
    msg.setSource(27503U);
    msg.setSourceEntity(245U);
    msg.setDestination(23796U);
    msg.setDestinationEntity(78U);
    msg.peer.assign("HBXEQFAZOUIAYZVLWTDVJWEJICBDNVSWNEHSSDSWGNCOIKXHCHHQKGZDKIJHFGLXXUCGTRFAMFETENWNEBGQVRQBWAYSJLRGHAELYHJO");
    msg.rssi = 0.2295421577845792;
    msg.integrity = 51249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.019031959025301526);
    msg.setSource(44126U);
    msg.setSourceEntity(190U);
    msg.setDestination(13795U);
    msg.setDestinationEntity(75U);
    msg.peer.assign("TSIVBKXGSGOZYUJHHOCZIYDUUMWSAAJOKOCELQBREOITZQBISPXSAILPVCYJINWFYLWUHFAFHROJAPSWFIT");
    msg.rssi = 0.4745965120487735;
    msg.integrity = 21509U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8610305096749579);
    msg.setSource(2371U);
    msg.setSourceEntity(113U);
    msg.setDestination(37212U);
    msg.setDestinationEntity(239U);
    msg.peer.assign("IYLJBZJSXZRXPLLCLVOSHOAKFJEVLRROFFOWVVBZLTCTDFGWPNLOCGDXWRUQOTFMQSOCETHBEUDDAGYQKNIQSXEICFKZSRPEYITCDJI");
    msg.rssi = 0.7412647562054665;
    msg.integrity = 53218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.8118070406012796);
    msg.setSource(57126U);
    msg.setSourceEntity(137U);
    msg.setDestination(5130U);
    msg.setDestinationEntity(145U);
    msg.value = 26684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.5485871298038317);
    msg.setSource(28809U);
    msg.setSourceEntity(190U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(150U);
    msg.value = 23353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.5310997007849027);
    msg.setSource(49752U);
    msg.setSourceEntity(188U);
    msg.setDestination(12128U);
    msg.setDestinationEntity(200U);
    msg.value = -6277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.6840491038280498);
    msg.setSource(20457U);
    msg.setSourceEntity(186U);
    msg.setDestination(63697U);
    msg.setDestinationEntity(238U);
    msg.value = 0.44063531835460135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.7610555452587257);
    msg.setSource(24225U);
    msg.setSourceEntity(144U);
    msg.setDestination(49872U);
    msg.setDestinationEntity(238U);
    msg.value = 0.6069547666184768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.5064500570031323);
    msg.setSource(6793U);
    msg.setSourceEntity(214U);
    msg.setDestination(44896U);
    msg.setDestinationEntity(9U);
    msg.value = 0.2870520507136246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.9388014964381274);
    msg.setSource(59438U);
    msg.setSourceEntity(72U);
    msg.setDestination(774U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6123677868166932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.006585833322408585);
    msg.setSource(530U);
    msg.setSourceEntity(250U);
    msg.setDestination(48897U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0559836394495119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.9638200468958577);
    msg.setSource(5608U);
    msg.setSourceEntity(191U);
    msg.setDestination(8633U);
    msg.setDestinationEntity(26U);
    msg.value = 0.6051306287054266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.3111368756796682);
    msg.setSource(55519U);
    msg.setSourceEntity(234U);
    msg.setDestination(324U);
    msg.setDestinationEntity(49U);
    msg.validity = 9267U;
    msg.type = 77U;
    msg.utc_year = 22998U;
    msg.utc_month = 29U;
    msg.utc_day = 100U;
    msg.utc_time = 0.2233298617774092;
    msg.lat = 0.10049367595894854;
    msg.lon = 0.7484612127548493;
    msg.height = 0.48085236450845736;
    msg.satellites = 29U;
    msg.cog = 0.873104740632263;
    msg.sog = 0.3621231533389224;
    msg.hdop = 0.5886467680331048;
    msg.vdop = 0.2872914167945635;
    msg.hacc = 0.17995708008717215;
    msg.vacc = 0.18915195611377533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.8612980895033056);
    msg.setSource(42989U);
    msg.setSourceEntity(161U);
    msg.setDestination(15261U);
    msg.setDestinationEntity(235U);
    msg.validity = 346U;
    msg.type = 199U;
    msg.utc_year = 59464U;
    msg.utc_month = 80U;
    msg.utc_day = 23U;
    msg.utc_time = 0.5971306694068769;
    msg.lat = 0.15203805009291893;
    msg.lon = 0.7051547004387384;
    msg.height = 0.023438707736626596;
    msg.satellites = 142U;
    msg.cog = 0.5593946584004765;
    msg.sog = 0.8468998516156552;
    msg.hdop = 0.16156448481826058;
    msg.vdop = 0.3911088480127648;
    msg.hacc = 0.12252732618750395;
    msg.vacc = 0.9637155776785051;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.2009661284026374);
    msg.setSource(15146U);
    msg.setSourceEntity(8U);
    msg.setDestination(55623U);
    msg.setDestinationEntity(231U);
    msg.validity = 10774U;
    msg.type = 21U;
    msg.utc_year = 16855U;
    msg.utc_month = 0U;
    msg.utc_day = 145U;
    msg.utc_time = 0.7177720894706078;
    msg.lat = 0.3160211660746438;
    msg.lon = 0.45499739176439713;
    msg.height = 0.7724792299366683;
    msg.satellites = 207U;
    msg.cog = 0.9357771984373705;
    msg.sog = 0.5958085720208112;
    msg.hdop = 0.6484273337414086;
    msg.vdop = 0.06311200274426831;
    msg.hacc = 0.7428970580379642;
    msg.vacc = 0.8911913615284076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.10532768300859674);
    msg.setSource(62020U);
    msg.setSourceEntity(224U);
    msg.setDestination(55582U);
    msg.setDestinationEntity(171U);
    msg.time = 0.7815777290395673;
    msg.phi = 0.06848260421133934;
    msg.theta = 0.7497929735149877;
    msg.psi = 0.909231301049785;
    msg.psi_magnetic = 0.10637077967509778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.15994379529172498);
    msg.setSource(34475U);
    msg.setSourceEntity(163U);
    msg.setDestination(20633U);
    msg.setDestinationEntity(8U);
    msg.time = 0.32085549576174355;
    msg.phi = 0.3870285403000502;
    msg.theta = 0.10053039634281158;
    msg.psi = 0.09290029836797309;
    msg.psi_magnetic = 0.9722108893169739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.010196508821417316);
    msg.setSource(26895U);
    msg.setSourceEntity(8U);
    msg.setDestination(47926U);
    msg.setDestinationEntity(12U);
    msg.time = 0.12497811185398411;
    msg.phi = 0.5005677183954352;
    msg.theta = 0.46691782221837475;
    msg.psi = 0.965936246079465;
    msg.psi_magnetic = 0.5870163765062572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.39183398639345457);
    msg.setSource(21478U);
    msg.setSourceEntity(218U);
    msg.setDestination(5817U);
    msg.setDestinationEntity(90U);
    msg.time = 0.6237081374064719;
    msg.x = 0.1110230829078771;
    msg.y = 0.9575676832564848;
    msg.z = 0.4173802874837339;
    msg.timestep = 0.20940721371342708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.2561121786338477);
    msg.setSource(499U);
    msg.setSourceEntity(188U);
    msg.setDestination(569U);
    msg.setDestinationEntity(224U);
    msg.time = 0.09254469315715075;
    msg.x = 0.8852052650757932;
    msg.y = 0.5251584991529599;
    msg.z = 0.3397930751746211;
    msg.timestep = 0.6907844912356871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.017988708429616973);
    msg.setSource(59721U);
    msg.setSourceEntity(248U);
    msg.setDestination(56139U);
    msg.setDestinationEntity(188U);
    msg.time = 0.23805125345985523;
    msg.x = 0.5640520111329359;
    msg.y = 0.23049566930470977;
    msg.z = 0.8471988576377416;
    msg.timestep = 0.05875611977380013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.7413664401210999);
    msg.setSource(770U);
    msg.setSourceEntity(198U);
    msg.setDestination(321U);
    msg.setDestinationEntity(132U);
    msg.time = 0.800931414378022;
    msg.x = 0.7618378125337399;
    msg.y = 0.972170063657026;
    msg.z = 0.4056176134376561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.6954722005754519);
    msg.setSource(9503U);
    msg.setSourceEntity(213U);
    msg.setDestination(52784U);
    msg.setDestinationEntity(123U);
    msg.time = 0.6683434612572106;
    msg.x = 0.10460468339677631;
    msg.y = 0.4492320647879803;
    msg.z = 0.7419632665123214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.37157196052812247);
    msg.setSource(30387U);
    msg.setSourceEntity(93U);
    msg.setDestination(11762U);
    msg.setDestinationEntity(42U);
    msg.time = 0.5144876221222353;
    msg.x = 0.38492160525538477;
    msg.y = 0.32383606089292294;
    msg.z = 0.15580009937763573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.9640814780279335);
    msg.setSource(51527U);
    msg.setSourceEntity(72U);
    msg.setDestination(39109U);
    msg.setDestinationEntity(51U);
    msg.time = 0.2945365108898156;
    msg.x = 0.6620264989558965;
    msg.y = 0.22517418422509183;
    msg.z = 0.10321632204426123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.955813260296339);
    msg.setSource(63462U);
    msg.setSourceEntity(64U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(149U);
    msg.time = 0.0837967313749296;
    msg.x = 0.7053201673141664;
    msg.y = 0.8586489714148334;
    msg.z = 0.5142209085153044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5451355515726732);
    msg.setSource(30884U);
    msg.setSourceEntity(123U);
    msg.setDestination(11808U);
    msg.setDestinationEntity(162U);
    msg.time = 0.24002023377817128;
    msg.x = 0.5761145031539987;
    msg.y = 0.030798974539484436;
    msg.z = 0.6452134716649244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.7561319473774062);
    msg.setSource(37499U);
    msg.setSourceEntity(45U);
    msg.setDestination(23354U);
    msg.setDestinationEntity(64U);
    msg.time = 0.7131246801575666;
    msg.x = 0.45581336966521224;
    msg.y = 0.3832766797269601;
    msg.z = 0.3444297451864108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.08422827849780667);
    msg.setSource(10718U);
    msg.setSourceEntity(27U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(74U);
    msg.time = 0.3907119109000283;
    msg.x = 0.7417946759142495;
    msg.y = 0.7840737943892045;
    msg.z = 0.9941171944360898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.9731327341250187);
    msg.setSource(11965U);
    msg.setSourceEntity(15U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(145U);
    msg.time = 0.027302857745020614;
    msg.x = 0.15668935112868865;
    msg.y = 0.7028461464659;
    msg.z = 0.708818826826813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.5634420301433072);
    msg.setSource(21447U);
    msg.setSourceEntity(48U);
    msg.setDestination(58293U);
    msg.setDestinationEntity(138U);
    msg.validity = 235U;
    msg.x = 0.20827169884344732;
    msg.y = 0.33700258089138435;
    msg.z = 0.17400088777976064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.8869432460435633);
    msg.setSource(1283U);
    msg.setSourceEntity(220U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(106U);
    msg.validity = 141U;
    msg.x = 0.7300032129061248;
    msg.y = 0.8913543665654974;
    msg.z = 0.1503249125351881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.007327023757078388);
    msg.setSource(64275U);
    msg.setSourceEntity(42U);
    msg.setDestination(33576U);
    msg.setDestinationEntity(44U);
    msg.validity = 200U;
    msg.x = 0.3151137212722174;
    msg.y = 0.6376588266557356;
    msg.z = 0.3337359234040407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.25834580729415224);
    msg.setSource(14285U);
    msg.setSourceEntity(219U);
    msg.setDestination(20647U);
    msg.setDestinationEntity(62U);
    msg.validity = 238U;
    msg.x = 0.49305112945273244;
    msg.y = 0.04821973791781009;
    msg.z = 0.744369415724961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.8437832384795123);
    msg.setSource(22027U);
    msg.setSourceEntity(6U);
    msg.setDestination(26942U);
    msg.setDestinationEntity(32U);
    msg.validity = 121U;
    msg.x = 0.3924356434274694;
    msg.y = 0.5600856851135101;
    msg.z = 0.8998492912872663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.8582437534924156);
    msg.setSource(55115U);
    msg.setSourceEntity(4U);
    msg.setDestination(56685U);
    msg.setDestinationEntity(68U);
    msg.validity = 231U;
    msg.x = 0.9153353187337722;
    msg.y = 0.5793346588752115;
    msg.z = 0.11094921634217536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.9795869124332397);
    msg.setSource(51624U);
    msg.setSourceEntity(93U);
    msg.setDestination(44823U);
    msg.setDestinationEntity(148U);
    msg.time = 0.10921474293541866;
    msg.x = 0.1911587110078785;
    msg.y = 0.42963465679777;
    msg.z = 0.8330199332319916;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.3934982586771375);
    msg.setSource(42281U);
    msg.setSourceEntity(213U);
    msg.setDestination(39773U);
    msg.setDestinationEntity(162U);
    msg.time = 0.25623792650833277;
    msg.x = 0.10839983772758066;
    msg.y = 0.6330607600020771;
    msg.z = 0.5432604893187561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.6393238630240168);
    msg.setSource(30119U);
    msg.setSourceEntity(231U);
    msg.setDestination(44752U);
    msg.setDestinationEntity(22U);
    msg.time = 0.744366625977445;
    msg.x = 0.22751984395503577;
    msg.y = 0.7542064195860124;
    msg.z = 0.5390628914148011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.3043737270736433);
    msg.setSource(43412U);
    msg.setSourceEntity(216U);
    msg.setDestination(53896U);
    msg.setDestinationEntity(63U);
    msg.validity = 227U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.32243307725260195;
    tmp_msg_0.y = 0.15947259849494055;
    tmp_msg_0.z = 0.8892338552391001;
    tmp_msg_0.phi = 0.3662089573970616;
    tmp_msg_0.theta = 0.953891812079385;
    tmp_msg_0.psi = 0.33519700005913977;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9565295967913858;
    tmp_msg_1.beam_height = 0.5510984077789889;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5061823860436742;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.700727353736398);
    msg.setSource(58422U);
    msg.setSourceEntity(19U);
    msg.setDestination(49931U);
    msg.setDestinationEntity(237U);
    msg.validity = 40U;
    msg.value = 0.534052005052464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.7007518364364941);
    msg.setSource(524U);
    msg.setSourceEntity(104U);
    msg.setDestination(44927U);
    msg.setDestinationEntity(194U);
    msg.validity = 183U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5273674000744267;
    tmp_msg_0.y = 0.6263616873252436;
    tmp_msg_0.z = 0.8675429195418002;
    tmp_msg_0.phi = 0.7568189529967102;
    tmp_msg_0.theta = 0.400697903899349;
    tmp_msg_0.psi = 0.4744705812417752;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.704427861912255;
    tmp_msg_1.beam_height = 0.9978100396998084;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7186090207329492;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.3364793624025859);
    msg.setSource(16200U);
    msg.setSourceEntity(215U);
    msg.setDestination(25282U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5004808849221171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.4424317169941745);
    msg.setSource(37784U);
    msg.setSourceEntity(216U);
    msg.setDestination(32734U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5409452441260447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.5224090491209918);
    msg.setSource(4556U);
    msg.setSourceEntity(68U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(11U);
    msg.value = 0.28753937533649376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.6364317735563472);
    msg.setSource(32949U);
    msg.setSourceEntity(169U);
    msg.setDestination(51741U);
    msg.setDestinationEntity(121U);
    msg.value = 0.15273115500455148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.8786310583488078);
    msg.setSource(11244U);
    msg.setSourceEntity(188U);
    msg.setDestination(26803U);
    msg.setDestinationEntity(98U);
    msg.value = 0.949160265346513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.11462421983004578);
    msg.setSource(9983U);
    msg.setSourceEntity(247U);
    msg.setDestination(13200U);
    msg.setDestinationEntity(94U);
    msg.value = 0.36909994940064017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.9192039000164304);
    msg.setSource(28880U);
    msg.setSourceEntity(222U);
    msg.setDestination(20146U);
    msg.setDestinationEntity(176U);
    msg.value = 0.8211616521473529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.7033796256811895);
    msg.setSource(35061U);
    msg.setSourceEntity(133U);
    msg.setDestination(64246U);
    msg.setDestinationEntity(124U);
    msg.value = 0.2629551047466565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.6765478916648026);
    msg.setSource(51504U);
    msg.setSourceEntity(102U);
    msg.setDestination(19536U);
    msg.setDestinationEntity(18U);
    msg.value = 0.26796634899648564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.8291630740468755);
    msg.setSource(49291U);
    msg.setSourceEntity(142U);
    msg.setDestination(12763U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3123147516378233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.45425204909170813);
    msg.setSource(4691U);
    msg.setSourceEntity(157U);
    msg.setDestination(40488U);
    msg.setDestinationEntity(171U);
    msg.value = 0.10497693046379708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.8109808706989138);
    msg.setSource(43241U);
    msg.setSourceEntity(122U);
    msg.setDestination(3891U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8964963701135581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.2460707591947715);
    msg.setSource(3523U);
    msg.setSourceEntity(254U);
    msg.setDestination(60209U);
    msg.setDestinationEntity(143U);
    msg.value = 0.24537652461225667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.3521429021530812);
    msg.setSource(39843U);
    msg.setSourceEntity(160U);
    msg.setDestination(42022U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8174927102597562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.8257246998112513);
    msg.setSource(57039U);
    msg.setSourceEntity(103U);
    msg.setDestination(3682U);
    msg.setDestinationEntity(108U);
    msg.value = 0.31158250628681783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.4594373054204003);
    msg.setSource(31695U);
    msg.setSourceEntity(28U);
    msg.setDestination(56856U);
    msg.setDestinationEntity(234U);
    msg.value = 0.6346527457222124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.4020152916701236);
    msg.setSource(36647U);
    msg.setSourceEntity(5U);
    msg.setDestination(49277U);
    msg.setDestinationEntity(80U);
    msg.value = 0.4240473970726415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.6201559065052289);
    msg.setSource(10409U);
    msg.setSourceEntity(193U);
    msg.setDestination(60933U);
    msg.setDestinationEntity(78U);
    msg.value = 0.1477959531920341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.5973013467773981);
    msg.setSource(2814U);
    msg.setSourceEntity(27U);
    msg.setDestination(46736U);
    msg.setDestinationEntity(220U);
    msg.value = 0.4218803997401085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.8536736675091952);
    msg.setSource(18582U);
    msg.setSourceEntity(175U);
    msg.setDestination(18527U);
    msg.setDestinationEntity(222U);
    msg.value = 0.9642060849148075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.6735174020013748);
    msg.setSource(49935U);
    msg.setSourceEntity(55U);
    msg.setDestination(13468U);
    msg.setDestinationEntity(32U);
    msg.value = 0.04771074552015975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.792680574704693);
    msg.setSource(9887U);
    msg.setSourceEntity(88U);
    msg.setDestination(9248U);
    msg.setDestinationEntity(1U);
    msg.value = 0.08582499066577587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.39529906904400025);
    msg.setSource(22563U);
    msg.setSourceEntity(237U);
    msg.setDestination(22191U);
    msg.setDestinationEntity(195U);
    msg.value = 0.11868541182216696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.8026606980097526);
    msg.setSource(27569U);
    msg.setSourceEntity(23U);
    msg.setDestination(11399U);
    msg.setDestinationEntity(172U);
    msg.value = 0.03598566015311577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.9127699160833393);
    msg.setSource(12288U);
    msg.setSourceEntity(0U);
    msg.setDestination(28768U);
    msg.setDestinationEntity(71U);
    msg.direction = 0.09948271937039366;
    msg.speed = 0.1698572232208666;
    msg.turbulence = 0.26591644509720747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.1206292576259771);
    msg.setSource(46054U);
    msg.setSourceEntity(28U);
    msg.setDestination(25125U);
    msg.setDestinationEntity(151U);
    msg.direction = 0.6811664153400094;
    msg.speed = 0.6750208422945181;
    msg.turbulence = 0.2604264224742837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.2970100439207809);
    msg.setSource(19661U);
    msg.setSourceEntity(139U);
    msg.setDestination(33611U);
    msg.setDestinationEntity(212U);
    msg.direction = 0.7345871365256216;
    msg.speed = 0.6840066379605454;
    msg.turbulence = 0.6133643838028938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.786740878707495);
    msg.setSource(12429U);
    msg.setSourceEntity(18U);
    msg.setDestination(34821U);
    msg.setDestinationEntity(126U);
    msg.value = 0.41701414735656284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.39253878206648396);
    msg.setSource(54720U);
    msg.setSourceEntity(121U);
    msg.setDestination(24510U);
    msg.setDestinationEntity(37U);
    msg.value = 0.08459892139724456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.9528864888195473);
    msg.setSource(1333U);
    msg.setSourceEntity(125U);
    msg.setDestination(14227U);
    msg.setDestinationEntity(106U);
    msg.value = 0.888786779717048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.7310524429487487);
    msg.setSource(6888U);
    msg.setSourceEntity(29U);
    msg.setDestination(21837U);
    msg.setDestinationEntity(218U);
    msg.value.assign("YBLNYGZZRTJZITARYTFVYNOBDHTPGRMJJGSHZMSYXJVOSKLAWDMBFEJFKCBDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.8001078719447631);
    msg.setSource(39249U);
    msg.setSourceEntity(32U);
    msg.setDestination(4962U);
    msg.setDestinationEntity(204U);
    msg.value.assign("XIKVUHKGCVOALCUOGKKCHRULLBARHXFIRREDMMTACWQNEXGQITYXZFGBIWJXLYUCJWETNUGOMKNHQPBRXBIQIUAPZLEKKCYPQRROVGSJHKPCHSYNPPIFSPTWQWBXEIFOYEMZFWASTDAEWZJLUVEDZKEROTVAGASSDNMHLNOFWJOGOFTQSVTXRZLIJIMYDKEBUUYQDUBHNOJWRJDNPDAXQZFYPXQCMLVVSHNVJGGMMVNFJBFPHC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.8198034471084372);
    msg.setSource(11593U);
    msg.setSourceEntity(248U);
    msg.setDestination(29772U);
    msg.setDestinationEntity(143U);
    msg.value.assign("JOJUXZFTHXCESKDFNJCUGTORGAGMEWJECGFAIZSVVACKXYFNETDYTQQEREZZXURKNTWQWFQDDQBIUBPFZMYBBJUOLWQKAPSWULRURSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.14126231020739444);
    msg.setSource(48871U);
    msg.setSourceEntity(254U);
    msg.setDestination(2819U);
    msg.setDestinationEntity(112U);
    const char tmp_msg_0[] = {-67, -99, -119, -18, 67, -29, 0, 62, -4, -114, -73, 77, -73, 112, -14, 123, 0, 32, -65, 26, -7, -103, 27, -119, 75, -51, 107, -94, 54, 21, 113, 111, 88, -8, -86, -102, 12, 21, 59, 91, -45, 62, -9, -1, -55, -99, -64, -114, -35, -47, -23, -63, -104, -82, 12, 125, 15, 80, -110, 50, -78, -47, -19, -69, 22, -43, -92, 46, 30, -128, 9, -29, -100, 88, -74, -96, 61, 7, 12, -56, -102, 64, 89, 67, 27, 41, 45, 37, 26, 98, -5, -76, 21, -123, -45, -124, 59, -86, -107, 100, -46, 55, 86, -110, 23, 74, 47, 105, -60, 42, 24, 29, -89, 40, -75, 41, 49, 87, 108, -48, 42, 89, 120, -114, -27, -105, -110, -94, -113, -10, 18, 41, -61, -111, -35, -75, -29, 48, 51, -113, 13, -46, 23, -112, -36, 42, -97, -2, 87, 85, -126, 24, 71, -82, 6, 121, -4, 86, 47, -5, 51, 14, 70, 25, -109, -39, 100, -54, -99, 43, 64, -37, 5, -86, -60, -89, -45, 123, -63, 21, -32, -105, 75, 118, 63, 16, 6, -54};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.9643844607521751);
    msg.setSource(8679U);
    msg.setSourceEntity(56U);
    msg.setDestination(12273U);
    msg.setDestinationEntity(106U);
    const char tmp_msg_0[] = {-53, 39, -108, 62, 118, -18, -67, 61, -79, 117, -61, 83, 40, -26, -44};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.22508132548915227);
    msg.setSource(130U);
    msg.setSourceEntity(224U);
    msg.setDestination(3540U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {-5, -50, -38, -49, 74, -42, -97, 27, 1, 70, 61, -91, -75, -4, 49, -51, -126, -76, -43, -59, 34, -123, -59, 53, -121, -111, 6, -60, -89, 118, -71, 28, -119, -117, 20, 41, 90, -109, 124, 107, -3, -119, -9, 33, -108, 109, -11, -71, 92, -50, 0, 28, -99, -41, 35, 61, -112, -19, 34, -95, 20, -100, 83, 83, -106, -82, 44, -27, 104, 69, 85, 30, -57, 13, 75, -120, 25, 111, 20, -2, 8, -101, 62, 63, -18, -39, 45, -27, 96, 69, 87, 63, 90, -116, 118, 98, -24, -29, 27, -89, -41, 68, -21, -105, 73, 18, -40, -37, -75, 21, 8, 112, -78, -109, -39, 43, 92, 77, -50, -94, 36, -101, 10, -74, 28, -24, 41, 76, 0, 18, 73, -6, 103, 123, 0, 100, -115, -66, 86, 21, 7, -65, 4, -74, 99, 84, 102, 18, -90, -20, -54, 121, 12, 76, 6, -73, 52, -1, 57, 112, -117, -28, -70, -120, 107, -34, -111, -88, 13, -6, -37, 59, 11, -9, 102, 121, -92, 73, -80, -98, -59, -16, -94, -5, -73, 68, 76, 70, -121, 31, 53, 87};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.41550776781226806);
    msg.setSource(38723U);
    msg.setSourceEntity(147U);
    msg.setDestination(16910U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0912189598634412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.9481000588718983);
    msg.setSource(55879U);
    msg.setSourceEntity(136U);
    msg.setDestination(55853U);
    msg.setDestinationEntity(233U);
    msg.value = 0.3972068953032313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.5028544893090326);
    msg.setSource(20832U);
    msg.setSourceEntity(181U);
    msg.setDestination(24383U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7249218150199997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.2738957806940181);
    msg.setSource(27845U);
    msg.setSourceEntity(220U);
    msg.setDestination(45815U);
    msg.setDestinationEntity(157U);
    msg.type = 114U;
    msg.frequency = 1325440077U;
    msg.min_range = 63335U;
    msg.max_range = 62386U;
    msg.bits_per_point = 72U;
    msg.scale_factor = 0.19555662401305673;
    const char tmp_msg_0[] = {-52, -80, -1, 65, -80, 100, 91, 58, 80, -111, -119, 23, -123, -124, -78, -105, -16, -17, 112, -124, -123, -3, -67, 64, 6, 54, -29, 45, 95, -65, -115, -100, 97, 40, 12, 39, 47, -83, 16, 20, -98, 44, -62, 5, 86, -98, 115, 76, 100, 111, -121, -34, -30, -63, 126, -106, -9, -84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.14873441759086115);
    msg.setSource(15103U);
    msg.setSourceEntity(46U);
    msg.setDestination(19513U);
    msg.setDestinationEntity(123U);
    msg.type = 165U;
    msg.frequency = 955875289U;
    msg.min_range = 30841U;
    msg.max_range = 46830U;
    msg.bits_per_point = 172U;
    msg.scale_factor = 0.21878626992031902;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6954113351824706;
    tmp_msg_0.beam_height = 0.9085897332877992;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {100, 12, -119, -80, 94, -126, 78, 122, 123, 99, 15, 23, 22, 46, -111, 71, 34, 22, 118, 78, -38, -85, -7, 109};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.0496063768667695);
    msg.setSource(51946U);
    msg.setSourceEntity(120U);
    msg.setDestination(36986U);
    msg.setDestinationEntity(0U);
    msg.type = 221U;
    msg.frequency = 4007463338U;
    msg.min_range = 39303U;
    msg.max_range = 32148U;
    msg.bits_per_point = 149U;
    msg.scale_factor = 0.2657913900785338;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6732984976137575;
    tmp_msg_0.beam_height = 0.9215458618191658;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {72, -82, -84, -12, -86, 52, 126, 48, -117, -59, -8, 118, 52, -74, -18, 79, -43, 100, 117, -9, -120, -19, -1, -98, -69, -124, 52, 124, -65, -19, -35, 113, 116, 98, -82, -103, -45, -79, 111, 63, 98, -79, -5, 40, 49, 94, 16, -125, -69, 32, 76, -71, -75, 85, -42, -94, 41, 96, 66, -76, 47, 31, 2, -74, -119, -106, -70, -101, 2, -72, 25, -94, 75, -45, -78, 117, 113, -91, 9, 112, 81, 5, 108, -121, 78, 19, 93, -55, 55, 72, -32, 25, 126, -35, 109, -98, 34, -49, -71, -14, -82, 52, -16, 17, -42, -59, 38, -44, 27, -48, -32, -108, 105, -49, -103, -30, 125, 6, 43, 107, 112, -5, 1, 2, 45, -70, 84, -71, -98, -10, -13, -35, 57, 12, -27, -2, -111, 15, 27, 109, 119, 52};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.4481185949148193);
    msg.setSource(35641U);
    msg.setSourceEntity(219U);
    msg.setDestination(56914U);
    msg.setDestinationEntity(203U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.5568743063036946);
    msg.setSource(14032U);
    msg.setSourceEntity(227U);
    msg.setDestination(11512U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.2594572914739124);
    msg.setSource(23700U);
    msg.setSourceEntity(161U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.7880364978304052);
    msg.setSource(13776U);
    msg.setSourceEntity(73U);
    msg.setDestination(43955U);
    msg.setDestinationEntity(157U);
    msg.op = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.7346960371294118);
    msg.setSource(37158U);
    msg.setSourceEntity(89U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(178U);
    msg.op = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.9395561546236925);
    msg.setSource(54208U);
    msg.setSourceEntity(120U);
    msg.setDestination(4894U);
    msg.setDestinationEntity(234U);
    msg.op = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.4777049614604244);
    msg.setSource(10854U);
    msg.setSourceEntity(34U);
    msg.setDestination(17217U);
    msg.setDestinationEntity(0U);
    msg.value = 0.6450270885638318;
    msg.confidence = 0.4169369141589665;
    msg.opmodes.assign("XQPBFQFUNVOKUZEIBJYVCDSEIMHGYYPZIWTGARBUUWQEYVRGWNVAKMILREBSSAABTKDIMWYXKEQOPJJYLOSNAWLCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.21912353692109054);
    msg.setSource(25757U);
    msg.setSourceEntity(191U);
    msg.setDestination(2931U);
    msg.setDestinationEntity(55U);
    msg.value = 0.2060149210054344;
    msg.confidence = 0.8464332075222852;
    msg.opmodes.assign("YPMHVSMYVXISKDXLKYHHHRXQPALWJDNMXHCPGXBUEKIEDFYGWRWAMYXUBRZZZSQZFAWCXEGTOAIIKEIOGWMQGVMLFNOBXCRSPPTRLDBGNVDZWIFIZKTRSPQECARGUTLQUQLVRUKHQKGMCOLXHHPQZFXBITCDNAOHRBNDZSYQSYTLAJLWZTWFVNOKFMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.8517299735008454);
    msg.setSource(4725U);
    msg.setSourceEntity(103U);
    msg.setDestination(45017U);
    msg.setDestinationEntity(72U);
    msg.value = 0.153692459220794;
    msg.confidence = 0.7595323340477189;
    msg.opmodes.assign("EMBGEBZFTZISNCJZPRVPNBWRJOFARUARNIXBUUPDNVHULLJICVVKXELJKMRVPWYGEIQSPUZLNQYSNSIAVBZVYOJZHCRPGRGPGXACUBOHOPIJIYFCQQMMNJMXLEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.7436953996004174);
    msg.setSource(34479U);
    msg.setSourceEntity(144U);
    msg.setDestination(7551U);
    msg.setDestinationEntity(117U);
    msg.itow = 1909157462U;
    msg.lat = 0.06379747860316454;
    msg.lon = 0.23030672705419475;
    msg.height_ell = 0.7517504002064013;
    msg.height_sea = 0.8320047375319697;
    msg.hacc = 0.7478095634973275;
    msg.vacc = 0.14607068747466878;
    msg.vel_n = 0.6279870841541549;
    msg.vel_e = 0.3763761625793801;
    msg.vel_d = 0.03881188339777375;
    msg.speed = 0.5426900060740392;
    msg.gspeed = 0.21516151959904517;
    msg.heading = 0.06516064062362859;
    msg.sacc = 0.6826991022067236;
    msg.cacc = 0.5612671105976473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.5016686165677335);
    msg.setSource(7726U);
    msg.setSourceEntity(225U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(244U);
    msg.itow = 1155266154U;
    msg.lat = 0.5705402039434265;
    msg.lon = 0.6301323423713338;
    msg.height_ell = 0.4506443343952369;
    msg.height_sea = 0.7774020821928281;
    msg.hacc = 0.6128652085697371;
    msg.vacc = 0.6170045745153306;
    msg.vel_n = 0.4479670980231012;
    msg.vel_e = 0.8650194126108913;
    msg.vel_d = 0.5054113159754786;
    msg.speed = 0.4421396703179542;
    msg.gspeed = 0.04861541220722776;
    msg.heading = 0.399754384951175;
    msg.sacc = 0.8077986510380522;
    msg.cacc = 0.10787343196914179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.16683654233795675);
    msg.setSource(41049U);
    msg.setSourceEntity(237U);
    msg.setDestination(39646U);
    msg.setDestinationEntity(232U);
    msg.itow = 514221120U;
    msg.lat = 0.20360570959204738;
    msg.lon = 0.014477367235779304;
    msg.height_ell = 0.5847937013346274;
    msg.height_sea = 0.08408689657228219;
    msg.hacc = 0.12526531331555213;
    msg.vacc = 0.42632675547407783;
    msg.vel_n = 0.42830127983413535;
    msg.vel_e = 0.051899810137413294;
    msg.vel_d = 0.15035999053348115;
    msg.speed = 0.16107443906396934;
    msg.gspeed = 0.052232942861791476;
    msg.heading = 0.9242425556962547;
    msg.sacc = 0.68175096480463;
    msg.cacc = 0.02964843697695252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.12833088265415793);
    msg.setSource(39105U);
    msg.setSourceEntity(210U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(249U);
    msg.id = 60U;
    msg.value = 0.6761585768672954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.06656405378616315);
    msg.setSource(1307U);
    msg.setSourceEntity(93U);
    msg.setDestination(40442U);
    msg.setDestinationEntity(216U);
    msg.id = 164U;
    msg.value = 0.5467884182796429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.08927336721757817);
    msg.setSource(1603U);
    msg.setSourceEntity(53U);
    msg.setDestination(7707U);
    msg.setDestinationEntity(106U);
    msg.id = 6U;
    msg.value = 0.9352479829141043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.2950670195188225);
    msg.setSource(65206U);
    msg.setSourceEntity(246U);
    msg.setDestination(2309U);
    msg.setDestinationEntity(247U);
    msg.x = 0.8096434080374291;
    msg.y = 0.648032664439129;
    msg.z = 0.5151004867561831;
    msg.phi = 0.23060789903351742;
    msg.theta = 0.06001656925851295;
    msg.psi = 0.6416525317307634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.6412754436965638);
    msg.setSource(53583U);
    msg.setSourceEntity(1U);
    msg.setDestination(60265U);
    msg.setDestinationEntity(192U);
    msg.x = 0.3239389491259326;
    msg.y = 0.12703022576313971;
    msg.z = 0.8604522880479747;
    msg.phi = 0.007479140219119884;
    msg.theta = 0.7227154797571975;
    msg.psi = 0.1336700036831341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.1395265970978693);
    msg.setSource(2320U);
    msg.setSourceEntity(111U);
    msg.setDestination(20378U);
    msg.setDestinationEntity(184U);
    msg.x = 0.2791760144820129;
    msg.y = 0.6157743216160189;
    msg.z = 0.5867162736193557;
    msg.phi = 0.0007673218706085727;
    msg.theta = 0.05382052739825127;
    msg.psi = 0.13629607922477238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.9779549673017096);
    msg.setSource(22627U);
    msg.setSourceEntity(33U);
    msg.setDestination(43179U);
    msg.setDestinationEntity(213U);
    msg.beam_width = 0.2673660157621046;
    msg.beam_height = 0.6552559398263761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.40585324332718486);
    msg.setSource(505U);
    msg.setSourceEntity(195U);
    msg.setDestination(60247U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.11172802286855665;
    msg.beam_height = 0.8784127390768762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.5563260697950911);
    msg.setSource(21542U);
    msg.setSourceEntity(224U);
    msg.setDestination(42541U);
    msg.setDestinationEntity(214U);
    msg.beam_width = 0.990710732356233;
    msg.beam_height = 0.44429205553726314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.23333357299855273);
    msg.setSource(65104U);
    msg.setSourceEntity(194U);
    msg.setDestination(38688U);
    msg.setDestinationEntity(32U);
    msg.sane = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.5646616994440371);
    msg.setSource(42702U);
    msg.setSourceEntity(159U);
    msg.setDestination(57442U);
    msg.setDestinationEntity(150U);
    msg.sane = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.20903623608819777);
    msg.setSource(60641U);
    msg.setSourceEntity(43U);
    msg.setDestination(955U);
    msg.setDestinationEntity(46U);
    msg.sane = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.6787422232629);
    msg.setSource(25850U);
    msg.setSourceEntity(181U);
    msg.setDestination(61423U);
    msg.setDestinationEntity(126U);
    msg.value = 0.884148278662872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.8750046576003335);
    msg.setSource(7507U);
    msg.setSourceEntity(169U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6081626197962162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.02780051544265183);
    msg.setSource(17502U);
    msg.setSourceEntity(138U);
    msg.setDestination(12572U);
    msg.setDestinationEntity(6U);
    msg.value = 0.7676008193547321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.1131570870273696);
    msg.setSource(28637U);
    msg.setSourceEntity(182U);
    msg.setDestination(2308U);
    msg.setDestinationEntity(27U);
    msg.value = 0.3258672323598091;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.7322506994881384);
    msg.setSource(47137U);
    msg.setSourceEntity(96U);
    msg.setDestination(55639U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9437794583069389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.7984726798531396);
    msg.setSource(38817U);
    msg.setSourceEntity(82U);
    msg.setDestination(63230U);
    msg.setDestinationEntity(231U);
    msg.value = 0.11995769132103828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.5581509170893569);
    msg.setSource(56522U);
    msg.setSourceEntity(124U);
    msg.setDestination(19819U);
    msg.setDestinationEntity(168U);
    msg.value = 0.2753724886679708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.34973713943602713);
    msg.setSource(24898U);
    msg.setSourceEntity(3U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(75U);
    msg.value = 0.17980599189815338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.6616193946676839);
    msg.setSource(4675U);
    msg.setSourceEntity(97U);
    msg.setDestination(1448U);
    msg.setDestinationEntity(127U);
    msg.value = 0.23050780132651694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.4123283359831832);
    msg.setSource(15496U);
    msg.setSourceEntity(73U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(197U);
    msg.value = 0.027012452279455923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.5922378141980223);
    msg.setSource(60155U);
    msg.setSourceEntity(83U);
    msg.setDestination(29777U);
    msg.setDestinationEntity(176U);
    msg.value = 0.05461179724926968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.41765688997872086);
    msg.setSource(31069U);
    msg.setSourceEntity(181U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(234U);
    msg.value = 0.5533893185316423;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.4542249481871521);
    msg.setSource(53061U);
    msg.setSourceEntity(23U);
    msg.setDestination(26361U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8818691629484777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.5543786981580638);
    msg.setSource(13488U);
    msg.setSourceEntity(100U);
    msg.setDestination(54179U);
    msg.setDestinationEntity(82U);
    msg.value = 0.8873441594492689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.5707135423950525);
    msg.setSource(57391U);
    msg.setSourceEntity(91U);
    msg.setDestination(43692U);
    msg.setDestinationEntity(123U);
    msg.value = 0.11396265431042751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.389510535580434);
    msg.setSource(29984U);
    msg.setSourceEntity(208U);
    msg.setDestination(45670U);
    msg.setDestinationEntity(210U);
    msg.value = 0.09011607237895236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.7779250551399867);
    msg.setSource(62290U);
    msg.setSourceEntity(229U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(195U);
    msg.value = 0.12328718159105834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.2440248227145061);
    msg.setSource(16564U);
    msg.setSourceEntity(63U);
    msg.setDestination(29315U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5585461405429987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.7396718033501585);
    msg.setSource(38656U);
    msg.setSourceEntity(203U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(137U);
    msg.value = 0.4730679334574198;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.475439656314842);
    msg.setSource(57365U);
    msg.setSourceEntity(223U);
    msg.setDestination(47822U);
    msg.setDestinationEntity(57U);
    msg.value = 0.11465470627440366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.5643196124183975);
    msg.setSource(2790U);
    msg.setSourceEntity(125U);
    msg.setDestination(48174U);
    msg.setDestinationEntity(69U);
    msg.value = 0.998191800522172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.6645117922409927);
    msg.setSource(37063U);
    msg.setSourceEntity(99U);
    msg.setDestination(17643U);
    msg.setDestinationEntity(160U);
    msg.value = 0.3864355219428144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.07161518307386705);
    msg.setSource(31500U);
    msg.setSourceEntity(96U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7053503613955494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.4375860172173457);
    msg.setSource(47032U);
    msg.setSourceEntity(68U);
    msg.setDestination(24115U);
    msg.setDestinationEntity(226U);
    msg.value = 0.38663515222759726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.36181753310122167);
    msg.setSource(47569U);
    msg.setSourceEntity(214U);
    msg.setDestination(51277U);
    msg.setDestinationEntity(71U);
    msg.validity = 27979U;
    msg.type = 59U;
    msg.tow = 2553544111U;
    msg.base_lat = 0.9178007166024955;
    msg.base_lon = 0.9399821127407413;
    msg.base_height = 0.5394258993821339;
    msg.n = 0.6579262994591426;
    msg.e = 0.4279404611535462;
    msg.d = 0.7867496991233314;
    msg.v_n = 0.05178878535318199;
    msg.v_e = 0.17146650141854525;
    msg.v_d = 0.5171545440233065;
    msg.satellites = 232U;
    msg.iar_hyp = 52519U;
    msg.iar_ratio = 0.20703458974707833;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.9194587867347576);
    msg.setSource(25986U);
    msg.setSourceEntity(100U);
    msg.setDestination(22505U);
    msg.setDestinationEntity(72U);
    msg.validity = 41334U;
    msg.type = 95U;
    msg.tow = 4209538697U;
    msg.base_lat = 0.35819773925983867;
    msg.base_lon = 0.0545024852544026;
    msg.base_height = 0.12893853880964856;
    msg.n = 0.7564106199525847;
    msg.e = 0.029564467805611283;
    msg.d = 0.46986580610338746;
    msg.v_n = 0.11498938745087994;
    msg.v_e = 0.007648064405464838;
    msg.v_d = 0.8849617084413688;
    msg.satellites = 101U;
    msg.iar_hyp = 51954U;
    msg.iar_ratio = 0.8554920284428533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.9496175105946515);
    msg.setSource(52592U);
    msg.setSourceEntity(234U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(196U);
    msg.validity = 2128U;
    msg.type = 33U;
    msg.tow = 1860923503U;
    msg.base_lat = 0.7958714824929555;
    msg.base_lon = 0.4581273753742595;
    msg.base_height = 0.7084950407441286;
    msg.n = 0.07758063058052544;
    msg.e = 0.2101643444300889;
    msg.d = 0.9344353160085385;
    msg.v_n = 0.9076079226637876;
    msg.v_e = 0.500672686170671;
    msg.v_d = 0.9941537319928344;
    msg.satellites = 6U;
    msg.iar_hyp = 24055U;
    msg.iar_ratio = 0.941289382183258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.6936327323508021);
    msg.setSource(31887U);
    msg.setSourceEntity(144U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(60U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.26218927419935834;
    tmp_msg_0.lon = 0.4150217412987459;
    tmp_msg_0.height = 0.032603539152690875;
    tmp_msg_0.x = 0.4951366497041172;
    tmp_msg_0.y = 0.973914754847727;
    tmp_msg_0.z = 0.9499463042469571;
    tmp_msg_0.phi = 0.914537968850482;
    tmp_msg_0.theta = 0.3699685287278556;
    tmp_msg_0.psi = 0.20967020634954547;
    tmp_msg_0.u = 0.7606218688078257;
    tmp_msg_0.v = 0.7541777998168093;
    tmp_msg_0.w = 0.8846091609442713;
    tmp_msg_0.vx = 0.02439421329066016;
    tmp_msg_0.vy = 0.19153700358106307;
    tmp_msg_0.vz = 0.3904143571241401;
    tmp_msg_0.p = 0.44667855987780836;
    tmp_msg_0.q = 0.03154759854035227;
    tmp_msg_0.r = 0.034788113270170395;
    tmp_msg_0.depth = 0.24285802277140955;
    tmp_msg_0.alt = 0.3625519674067632;
    msg.state.set(tmp_msg_0);
    msg.type = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.18361271704156434);
    msg.setSource(22948U);
    msg.setSourceEntity(115U);
    msg.setDestination(63322U);
    msg.setDestinationEntity(104U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9072079245681198;
    tmp_msg_0.lon = 0.8950666949485477;
    tmp_msg_0.height = 0.4157511992518791;
    tmp_msg_0.x = 0.8517595648807168;
    tmp_msg_0.y = 0.7957642468667527;
    tmp_msg_0.z = 0.4997505965499799;
    tmp_msg_0.phi = 0.5765276305418098;
    tmp_msg_0.theta = 0.6611459837950844;
    tmp_msg_0.psi = 0.33688451655160256;
    tmp_msg_0.u = 0.7433199044500016;
    tmp_msg_0.v = 0.49870598257497023;
    tmp_msg_0.w = 0.696241721919652;
    tmp_msg_0.vx = 0.9694209577841253;
    tmp_msg_0.vy = 0.4922471200757286;
    tmp_msg_0.vz = 0.7936513086730466;
    tmp_msg_0.p = 0.26419285475888366;
    tmp_msg_0.q = 0.42541539195174805;
    tmp_msg_0.r = 0.8688481230559163;
    tmp_msg_0.depth = 0.3103098359499187;
    tmp_msg_0.alt = 0.23920849457485827;
    msg.state.set(tmp_msg_0);
    msg.type = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.30321589755121714);
    msg.setSource(32718U);
    msg.setSourceEntity(1U);
    msg.setDestination(1693U);
    msg.setDestinationEntity(220U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8655458800244119;
    tmp_msg_0.lon = 0.24277594577505734;
    tmp_msg_0.height = 0.6232176541018603;
    tmp_msg_0.x = 0.5670832193742633;
    tmp_msg_0.y = 0.37478150779344666;
    tmp_msg_0.z = 0.7207305368293928;
    tmp_msg_0.phi = 0.33697145985542165;
    tmp_msg_0.theta = 0.07216030835752452;
    tmp_msg_0.psi = 0.08847873414796004;
    tmp_msg_0.u = 0.5623378400904656;
    tmp_msg_0.v = 0.13100833838660497;
    tmp_msg_0.w = 0.06698382023585292;
    tmp_msg_0.vx = 0.54394208740504;
    tmp_msg_0.vy = 0.8131245250943797;
    tmp_msg_0.vz = 0.45106088248098797;
    tmp_msg_0.p = 0.6931725955069581;
    tmp_msg_0.q = 0.10819228430935968;
    tmp_msg_0.r = 0.09200235647214605;
    tmp_msg_0.depth = 0.8118911342924262;
    tmp_msg_0.alt = 0.7434150876797576;
    msg.state.set(tmp_msg_0);
    msg.type = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.0227138208075095);
    msg.setSource(60050U);
    msg.setSourceEntity(103U);
    msg.setDestination(18431U);
    msg.setDestinationEntity(91U);
    msg.value = 0.7498422079670882;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.34930575645959017);
    msg.setSource(11661U);
    msg.setSourceEntity(148U);
    msg.setDestination(15795U);
    msg.setDestinationEntity(223U);
    msg.value = 0.7733192422933319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.6529739352272538);
    msg.setSource(37063U);
    msg.setSourceEntity(95U);
    msg.setDestination(22658U);
    msg.setDestinationEntity(134U);
    msg.value = 0.9464310623793464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.5250744788304886);
    msg.setSource(16213U);
    msg.setSourceEntity(241U);
    msg.setDestination(19090U);
    msg.setDestinationEntity(79U);
    msg.value = 0.9309893217967192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.3298955823955302);
    msg.setSource(63268U);
    msg.setSourceEntity(101U);
    msg.setDestination(46664U);
    msg.setDestinationEntity(156U);
    msg.value = 0.3360647221924663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.2628777780737377);
    msg.setSource(3064U);
    msg.setSourceEntity(7U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(41U);
    msg.value = 0.43557655059889044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.5390716229056627);
    msg.setSource(62260U);
    msg.setSourceEntity(119U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(36U);
    msg.value = 0.6212970674344147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.486043336646823);
    msg.setSource(32160U);
    msg.setSourceEntity(52U);
    msg.setDestination(33887U);
    msg.setDestinationEntity(131U);
    msg.value = 0.10046946467792306;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.019058052489666966);
    msg.setSource(22384U);
    msg.setSourceEntity(155U);
    msg.setDestination(42708U);
    msg.setDestinationEntity(100U);
    msg.value = 0.20421790007099205;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.15411906219972937);
    msg.setSource(2114U);
    msg.setSourceEntity(96U);
    msg.setDestination(3580U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7260340808251643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.29617343832457965);
    msg.setSource(1766U);
    msg.setSourceEntity(209U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(88U);
    msg.value = 0.45172343281177596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.3742121992686953);
    msg.setSource(13343U);
    msg.setSourceEntity(225U);
    msg.setDestination(947U);
    msg.setDestinationEntity(184U);
    msg.value = 0.46505290354710005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.5943605172222938);
    msg.setSource(34744U);
    msg.setSourceEntity(31U);
    msg.setDestination(64117U);
    msg.setDestinationEntity(123U);
    msg.value = 0.053322169419115606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.9000872331278655);
    msg.setSource(51526U);
    msg.setSourceEntity(123U);
    msg.setDestination(11605U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7827838960366937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.9852733798904552);
    msg.setSource(60260U);
    msg.setSourceEntity(39U);
    msg.setDestination(20437U);
    msg.setDestinationEntity(139U);
    msg.value = 0.4935656041320331;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.14586612927739362);
    msg.setSource(6281U);
    msg.setSourceEntity(110U);
    msg.setDestination(39091U);
    msg.setDestinationEntity(182U);
    msg.id = 125U;
    msg.zoom = 55U;
    msg.action = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.35877127288586286);
    msg.setSource(45245U);
    msg.setSourceEntity(226U);
    msg.setDestination(14676U);
    msg.setDestinationEntity(17U);
    msg.id = 187U;
    msg.zoom = 140U;
    msg.action = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.12827365910249822);
    msg.setSource(4419U);
    msg.setSourceEntity(189U);
    msg.setDestination(30325U);
    msg.setDestinationEntity(106U);
    msg.id = 14U;
    msg.zoom = 231U;
    msg.action = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.24880528911964805);
    msg.setSource(56289U);
    msg.setSourceEntity(28U);
    msg.setDestination(32996U);
    msg.setDestinationEntity(103U);
    msg.id = 88U;
    msg.value = 0.5284012210780827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.4684779929912599);
    msg.setSource(50217U);
    msg.setSourceEntity(129U);
    msg.setDestination(47546U);
    msg.setDestinationEntity(235U);
    msg.id = 189U;
    msg.value = 0.8950185223631196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.9311111411924321);
    msg.setSource(47027U);
    msg.setSourceEntity(113U);
    msg.setDestination(4173U);
    msg.setDestinationEntity(21U);
    msg.id = 59U;
    msg.value = 0.840543946237184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.25632318010196886);
    msg.setSource(18265U);
    msg.setSourceEntity(112U);
    msg.setDestination(37886U);
    msg.setDestinationEntity(53U);
    msg.id = 163U;
    msg.value = 0.6080996880858001;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.40898170772561804);
    msg.setSource(28008U);
    msg.setSourceEntity(88U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(43U);
    msg.id = 174U;
    msg.value = 0.6371925646653681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.2674012271691747);
    msg.setSource(61677U);
    msg.setSourceEntity(114U);
    msg.setDestination(6178U);
    msg.setDestinationEntity(162U);
    msg.id = 153U;
    msg.value = 0.7598975542818158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.6348535426994154);
    msg.setSource(34947U);
    msg.setSourceEntity(204U);
    msg.setDestination(33106U);
    msg.setDestinationEntity(11U);
    msg.id = 71U;
    msg.angle = 0.590076313477898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.994497814459684);
    msg.setSource(57578U);
    msg.setSourceEntity(30U);
    msg.setDestination(25658U);
    msg.setDestinationEntity(138U);
    msg.id = 190U;
    msg.angle = 0.8292391462008949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.34201909361472027);
    msg.setSource(52983U);
    msg.setSourceEntity(7U);
    msg.setDestination(31823U);
    msg.setDestinationEntity(236U);
    msg.id = 44U;
    msg.angle = 0.5647437155434561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.25743174908897704);
    msg.setSource(39351U);
    msg.setSourceEntity(93U);
    msg.setDestination(50509U);
    msg.setDestinationEntity(4U);
    msg.op = 98U;
    msg.actions.assign("WBIVPZWFMCFCBOWHDYLGPBQMLFRGAEOTTSSIQWNGMDBZVGCNUVRRTXOZNBVMZBDOCBFJUMODOHLTXQNZRUIJXWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.27206199708833567);
    msg.setSource(47511U);
    msg.setSourceEntity(69U);
    msg.setDestination(21872U);
    msg.setDestinationEntity(243U);
    msg.op = 2U;
    msg.actions.assign("KOQAMFIAQWPAVLMRTNRDXPWUWICONLHLRTMOHPMHKKBIEZVWLTJZQVOIELWVXDGSXJNOCZQSVJVAFEYSKIJKGNIIHEGRTSFRLQLPBYSCHYSPUSGHQEMDKPEHFZPJQWBMGJATYNDUXCMJZMIGRUJKEYUVCYQRWYNQEXKGXZQUSBMECUFJOPNCKODIYCOTMAPSTLAFFXLAXLRUBWHIAZDTFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.7073890028350093);
    msg.setSource(45567U);
    msg.setSourceEntity(98U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(57U);
    msg.op = 12U;
    msg.actions.assign("XQPEKDPNQBYTAZKVMLQHWVIQKWWCTVWDTDJKMVEHEUGHTUXHFRHCJUZUCOUQXTBPCTIFZUJQNHNDKOLZHCCULBLOKYOGTWLGDDROFLXSWSNXGYDQBPAXVGFNITJJYRGSFCDASJVSEBWMPYBRPMOAEXAOIONFPVRRRVCRYOMYWBPEQFSRWZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.859124064121373);
    msg.setSource(6709U);
    msg.setSourceEntity(158U);
    msg.setDestination(31613U);
    msg.setDestinationEntity(4U);
    msg.actions.assign("PSKRSMXUPGEXHHKMUJFDSWLZZISBJQHGKSURLZHUTECDBYWVKTYKXPTZFWPDEYMTOIFJZBWVEFARRXQPCPLNBSVIQZBQEYKMAJGUNVDMWOEYCKBSTSJVIJNMDDHADMCPFHBQVSKBDRVQGCXUZZXLROXEJJAYHFYMAQUYGJRQPZNN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.18175153615827577);
    msg.setSource(43499U);
    msg.setSourceEntity(27U);
    msg.setDestination(56129U);
    msg.setDestinationEntity(211U);
    msg.actions.assign("OEKCTDOJFZCTHYSIZDWGUMJAGYYMABTHEWEFTRWTIUATVOQNSNFQPDUUXPOYJKXXHQQBWDKKDPYPKAAINOKCIRLWTLENLVIEIADZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.24734155535069846);
    msg.setSource(35715U);
    msg.setSourceEntity(80U);
    msg.setDestination(50689U);
    msg.setDestinationEntity(224U);
    msg.actions.assign("WYDHWYSSCWIQSFXRZRGXKZHUYOMOASWVVIGHNMZPMRBDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.83604561010276);
    msg.setSource(11940U);
    msg.setSourceEntity(191U);
    msg.setDestination(62115U);
    msg.setDestinationEntity(40U);
    msg.button = 14U;
    msg.value = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.32389927635297433);
    msg.setSource(8634U);
    msg.setSourceEntity(244U);
    msg.setDestination(24140U);
    msg.setDestinationEntity(126U);
    msg.button = 217U;
    msg.value = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.9496307327658405);
    msg.setSource(21018U);
    msg.setSourceEntity(127U);
    msg.setDestination(24732U);
    msg.setDestinationEntity(219U);
    msg.button = 95U;
    msg.value = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.8020366727374869);
    msg.setSource(54212U);
    msg.setSourceEntity(154U);
    msg.setDestination(9904U);
    msg.setDestinationEntity(49U);
    msg.op = 29U;
    msg.text.assign("HPVKSYNMTMONZLQCJEINSEWGOWORQHQPEMVPW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.7940236975834494);
    msg.setSource(30255U);
    msg.setSourceEntity(154U);
    msg.setDestination(13747U);
    msg.setDestinationEntity(207U);
    msg.op = 136U;
    msg.text.assign("FWLBRHKZPYJVHSNSKXCHIYDOCHJTOJHPMYRDWWBCAYUCMLRMVBBVQIZGOXBPHQSNUIGYHTWVZVLEFDYHIDXYLVBSQGNJWKDGXOSTLIPNCCTZIDMXUMAGXVQAZPKFXKBFYUZBRXCDWAJOWNAZDFXGZNWDLEENJBVGIRSZGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.5003691563580331);
    msg.setSource(22732U);
    msg.setSourceEntity(55U);
    msg.setDestination(30274U);
    msg.setDestinationEntity(171U);
    msg.op = 7U;
    msg.text.assign("FJJHBEALBSHAZNLTYCHWQWVLQFGJMPCVXHFLQGCIEGRATVFBJKMAVDJOEFOTDVIOZMCNCKBWRLATPGUBOTHMKQSIYWLOPNXETACDPWWPZRYBJFJTHQVYUMKIIKKZYIDIXMUMIIERQETVXLMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.2792084837113552);
    msg.setSource(55075U);
    msg.setSourceEntity(89U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(95U);
    msg.op = 26U;
    msg.time_remain = 0.6436446365341044;
    msg.sched_time = 0.4480208363631508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.15144708511865612);
    msg.setSource(11016U);
    msg.setSourceEntity(112U);
    msg.setDestination(4542U);
    msg.setDestinationEntity(30U);
    msg.op = 35U;
    msg.time_remain = 0.25125413964206633;
    msg.sched_time = 0.5327819807728839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.9326174693928959);
    msg.setSource(40832U);
    msg.setSourceEntity(122U);
    msg.setDestination(29752U);
    msg.setDestinationEntity(132U);
    msg.op = 47U;
    msg.time_remain = 0.7187942989201508;
    msg.sched_time = 0.678684503041186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.6427798551704462);
    msg.setSource(30107U);
    msg.setSourceEntity(155U);
    msg.setDestination(7862U);
    msg.setDestinationEntity(138U);
    msg.name.assign("WGOUBLNWUWFZHAJGCWVLWWCQRXINBSXMZEEHCVHSUAMPBGKFXPVYTJYDBRSPTXVGMTQYQUIFFNVRLBTDWYHWMTZQCSESYALEKLYHOIAKXJZLKNPNJMIFXDDPIIMORTDLNRQWRUUZSRAGODTMDZUMPGIXYBHSGOKUARRSFGTCKKYEHFBVCPEJXOJCOIQHNTKQKTBPZVQVVCHBINKAJLISUELDJSEWRZEUALNQVJOCP");
    msg.op = 219U;
    msg.sched_time = 0.7433477177952846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.5288270789596561);
    msg.setSource(53258U);
    msg.setSourceEntity(60U);
    msg.setDestination(6899U);
    msg.setDestinationEntity(177U);
    msg.name.assign("TGIFEFRZYLBTWANYEUFSLRSERMIIPAKXORXOOGEQTJHDKCKEBFPOBQEPUHJMPGAVWOCXCXFPURXAFRWXBZMHTPPHMWAWKSXNKHAJVSVLXDETUCHDMJQIACTWINIIRVWSKDFRYUZLHGTJNGJHCSPGYDQXUIMSYFBDVAFSCOYEVVQYUCBOKDPHQRGVYZUIGVBZCM");
    msg.op = 25U;
    msg.sched_time = 0.017004781004953284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.14202943587454187);
    msg.setSource(8360U);
    msg.setSourceEntity(177U);
    msg.setDestination(40271U);
    msg.setDestinationEntity(78U);
    msg.name.assign("ZHPSGUGAOLYLEVAZKQFEXWQYUIYSUBKXCNBUDNOOMZIGDKZTHSNPPPKWHYMTZLKUHLZLIBTATBNRUVAFNRQOADLFIJWVGCBSQDWPRQMWDONJUCMAQEYUSQYGVEVCIFMJKGHNBCMPUXNBQEYAITIOGGADDHZXSTWYJFSBZQRXPICKFCVWOMERRTVWIFCWXXJTTDDKFGON");
    msg.op = 113U;
    msg.sched_time = 0.9250116270919305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.9688779235353613);
    msg.setSource(5992U);
    msg.setSourceEntity(226U);
    msg.setDestination(9510U);
    msg.setDestinationEntity(34U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.9676022580537642);
    msg.setSource(29926U);
    msg.setSourceEntity(43U);
    msg.setDestination(40508U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.47914243057857675);
    msg.setSource(17145U);
    msg.setSourceEntity(127U);
    msg.setDestination(6251U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.05798236080465646);
    msg.setSource(53660U);
    msg.setSourceEntity(133U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(34U);
    msg.name.assign("OOFIBJBNPKIJEYLQTYXPSEASQGWWTHOFQGPOCUKGCWJFWMRXXUJQAPSHA");
    msg.state = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.7893245690900738);
    msg.setSource(18726U);
    msg.setSourceEntity(62U);
    msg.setDestination(22747U);
    msg.setDestinationEntity(207U);
    msg.name.assign("VVZXAVWMZGFRXLICYBZHQLHDWMUFWWPVGQKOJCIOOKIZHWZRHSICIQ");
    msg.state = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.7432435880462961);
    msg.setSource(48692U);
    msg.setSourceEntity(167U);
    msg.setDestination(22776U);
    msg.setDestinationEntity(206U);
    msg.name.assign("LITJTLVUMJFKLHAWVGEKKMNKGTCXYUVCLULESTRBJEZPHPRWNBCPAHTASBOWKVDNXAYSWGCXJDIHKQZNYFGUHBRKAIXXUQBKJINNRFWVSDENFHADYVYGBPOECOMVSQGUWOAPLIMHOJTALGOMLNCYUFIXFSGUXIRBFQWDPSBQXYRSDMMMXWVJFJNRUZWYNRIKIVCHSPZRVOK");
    msg.state = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.1198122203985017);
    msg.setSource(59113U);
    msg.setSourceEntity(172U);
    msg.setDestination(37633U);
    msg.setDestinationEntity(127U);
    msg.name.assign("ONGXYRKPMGVXERRWMMZNAFMDUIUGSUKEVBATVVTFGFQFQEKONQXYBTSESWTCKVDNMEHHHRWDZFQGJNDTVPZMVLXGMQOVGOIIFMJIYYXPVCOBBAOKQHVPWCFCKUPLBECHJBDKKCOIX");
    msg.value = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.6717952605827084);
    msg.setSource(41067U);
    msg.setSourceEntity(194U);
    msg.setDestination(5924U);
    msg.setDestinationEntity(117U);
    msg.name.assign("ZHTIESADIRBEZHHGSVPPFTLLJQGDKJFPNWBLYYJOEVVSTZVXKYEZJFOBAUIBSEGWWIIHRJZEMFKWKUHEXJOXRY");
    msg.value = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.24483765345117536);
    msg.setSource(9282U);
    msg.setSourceEntity(66U);
    msg.setDestination(53247U);
    msg.setDestinationEntity(29U);
    msg.name.assign("HGFTWOHZGGWIGIEMYTYYHXLRKDIPVIONKYSFCDMKJUEZPDNOMALAVSSAXQHYPQJFFNXMWHPRPSFLYVUIAWZRNCJCADGACVNNYQCBHMRLQHJWZ");
    msg.value = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.23001064653922487);
    msg.setSource(44455U);
    msg.setSourceEntity(237U);
    msg.setDestination(39637U);
    msg.setDestinationEntity(126U);
    msg.name.assign("IGYWMAJQGUIAHPTNMNKXMAWUFBUSLHTDZSNDZNCHORGVXCXFKCXTCUFVVENJHFXRWLHYQYLVUZCOHCSVMRWZXFPSNJLYVTOFEVYHBYZPIHTOSSKUWDRQSFFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.6004694896429535);
    msg.setSource(65363U);
    msg.setSourceEntity(222U);
    msg.setDestination(5354U);
    msg.setDestinationEntity(203U);
    msg.name.assign("LFGDKREZXDRLNSPJMTPANBQFFLVQXFGCDSUHPTQZDPEPWKZXMFQNYOIYMZBJJHLLDKHQGCVKXOMITNLWPLDUDZXJKRBXBRQTJHJYDGNWKEARLYKOVNAQVSZIEAIFUGYKUJGVEWAYEHZPUOYROBSOCBUULSCVDJRQMMNUUQGYCVTCUASIBAVHYHNGOZECTEMRJAIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.020484931132277007);
    msg.setSource(52089U);
    msg.setSourceEntity(168U);
    msg.setDestination(65280U);
    msg.setDestinationEntity(30U);
    msg.name.assign("ELSUWVZTFANVMLCDQHIQEJGAECYRYUVNSJOXCIPUBVXMOBNDWUUJBLORKQWCDXEWSVKYACGWGTSXEZLODYDGFAPYYRRPNNXTJNHIPMGKTJTDPZTFOBKDPLQATNAIWEHFZFXEMJSKWUILDZFBVGKPOROMSNXLLG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.9451239295075764);
    msg.setSource(26525U);
    msg.setSourceEntity(21U);
    msg.setDestination(4089U);
    msg.setDestinationEntity(115U);
    msg.name.assign("VUGZAACNBQEEBALTMAWGCJWRQPFFSZJBNGCZFMOURONXAXEKLPEJMRQJOKMOOAFUHGPWZGQEZNDKCDGARVWYYDEYUCNTXQIIVMCUQXKZTS");
    msg.value = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.9020883506591785);
    msg.setSource(44828U);
    msg.setSourceEntity(0U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(52U);
    msg.name.assign("FRPOWGDWCIVFOTEMTTZZCEGYXPWJGYRQGPQDIBBJLVXWMRHUNPHNULXHVPOSOABSLTRJLTMSHAQRGIREXHLJHCMWFRQTPHOKVAHDEQBZSCMODKRFY");
    msg.value = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.9139109376885539);
    msg.setSource(49307U);
    msg.setSourceEntity(112U);
    msg.setDestination(20145U);
    msg.setDestinationEntity(240U);
    msg.name.assign("RTPUSKTXGKJAZNNUFLQKILHEDSFRDOPPSMRHEQZXJIBNAVMIYMJZTHCGNRNUFMJNWWGCPPYVCEZHBDZAPOH");
    msg.value = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.3300100408001789);
    msg.setSource(64840U);
    msg.setSourceEntity(25U);
    msg.setDestination(50862U);
    msg.setDestinationEntity(87U);
    msg.id = 215U;
    msg.period = 270284755U;
    msg.duty_cycle = 3132462533U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.7079512762134285);
    msg.setSource(38076U);
    msg.setSourceEntity(78U);
    msg.setDestination(13809U);
    msg.setDestinationEntity(102U);
    msg.id = 85U;
    msg.period = 56979606U;
    msg.duty_cycle = 3307429528U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.2246328877928675);
    msg.setSource(24123U);
    msg.setSourceEntity(68U);
    msg.setDestination(30442U);
    msg.setDestinationEntity(188U);
    msg.id = 72U;
    msg.period = 3501931525U;
    msg.duty_cycle = 4096177612U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.8722634819208014);
    msg.setSource(62197U);
    msg.setSourceEntity(238U);
    msg.setDestination(63936U);
    msg.setDestinationEntity(4U);
    msg.id = 173U;
    msg.period = 490341161U;
    msg.duty_cycle = 18956615U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.655066592835556);
    msg.setSource(55926U);
    msg.setSourceEntity(199U);
    msg.setDestination(13224U);
    msg.setDestinationEntity(150U);
    msg.id = 239U;
    msg.period = 2798362120U;
    msg.duty_cycle = 3535406038U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.6487718565406265);
    msg.setSource(58062U);
    msg.setSourceEntity(46U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(252U);
    msg.id = 199U;
    msg.period = 887462368U;
    msg.duty_cycle = 2599430005U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.8132848949495082);
    msg.setSource(21854U);
    msg.setSourceEntity(13U);
    msg.setDestination(43602U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.14274433504863537;
    msg.lon = 0.6705615352951422;
    msg.height = 0.04285161014057293;
    msg.x = 0.8617404549000156;
    msg.y = 0.24020056765902542;
    msg.z = 0.5660461055135702;
    msg.phi = 0.6887473433524524;
    msg.theta = 0.9281389717244516;
    msg.psi = 0.9629092267154441;
    msg.u = 0.9736251658847275;
    msg.v = 0.6666656250765319;
    msg.w = 0.6690893770852688;
    msg.vx = 0.9764293397171601;
    msg.vy = 0.7460015426476582;
    msg.vz = 0.0025515746276938422;
    msg.p = 0.08681494879482499;
    msg.q = 0.8602178214011805;
    msg.r = 0.17813365299747963;
    msg.depth = 0.35395165074547896;
    msg.alt = 0.24075147960737553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.8045257081966933);
    msg.setSource(27336U);
    msg.setSourceEntity(58U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.2978093804073694;
    msg.lon = 0.2556297578807747;
    msg.height = 0.7192231453592862;
    msg.x = 0.8494736272625819;
    msg.y = 0.09770913151912142;
    msg.z = 0.6870510225269267;
    msg.phi = 0.7244453302076628;
    msg.theta = 0.013547801361163736;
    msg.psi = 0.4155506048706613;
    msg.u = 0.6272616371199496;
    msg.v = 0.02503535792923184;
    msg.w = 0.6532655878419971;
    msg.vx = 0.9266226528073764;
    msg.vy = 0.12696450820475014;
    msg.vz = 0.4925035083389955;
    msg.p = 0.5441841008070002;
    msg.q = 0.39845795052673527;
    msg.r = 0.10819554668356968;
    msg.depth = 0.5427316193541739;
    msg.alt = 0.7455632124893413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.40498712608320653);
    msg.setSource(43725U);
    msg.setSourceEntity(237U);
    msg.setDestination(51884U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.8449718703388964;
    msg.lon = 0.6399011037861508;
    msg.height = 0.7664604003420701;
    msg.x = 0.6781356038120651;
    msg.y = 0.5689551515470805;
    msg.z = 0.37051521390415787;
    msg.phi = 0.25035259572360324;
    msg.theta = 0.019969063126108355;
    msg.psi = 0.9478801012084553;
    msg.u = 0.9310001315157796;
    msg.v = 0.994817521242475;
    msg.w = 0.556382507675506;
    msg.vx = 0.9061804838887856;
    msg.vy = 0.6624279356718803;
    msg.vz = 0.8216292391450704;
    msg.p = 0.7722248150690477;
    msg.q = 0.801737523924644;
    msg.r = 0.7612247786504186;
    msg.depth = 0.19974354405609507;
    msg.alt = 0.1421147357986965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.08747377301173054);
    msg.setSource(21582U);
    msg.setSourceEntity(3U);
    msg.setDestination(26501U);
    msg.setDestinationEntity(240U);
    msg.x = 0.7735625852680935;
    msg.y = 0.5928649277236592;
    msg.z = 0.4879224861180046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.34918382745438425);
    msg.setSource(58592U);
    msg.setSourceEntity(81U);
    msg.setDestination(28336U);
    msg.setDestinationEntity(253U);
    msg.x = 0.46680587764774906;
    msg.y = 0.9427503777803856;
    msg.z = 0.8656106127110864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.6292149040156824);
    msg.setSource(47949U);
    msg.setSourceEntity(168U);
    msg.setDestination(9540U);
    msg.setDestinationEntity(125U);
    msg.x = 0.24995782754362217;
    msg.y = 0.08244019971284533;
    msg.z = 0.7281666064668799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.12266593906135825);
    msg.setSource(14699U);
    msg.setSourceEntity(60U);
    msg.setDestination(38171U);
    msg.setDestinationEntity(164U);
    msg.value = 0.2757486127258172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.2753067074812632);
    msg.setSource(24535U);
    msg.setSourceEntity(115U);
    msg.setDestination(54268U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5127935312975096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.32318797886589345);
    msg.setSource(30553U);
    msg.setSourceEntity(227U);
    msg.setDestination(65087U);
    msg.setDestinationEntity(206U);
    msg.value = 0.7097706995384501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.9800696918938424);
    msg.setSource(25148U);
    msg.setSourceEntity(213U);
    msg.setDestination(36774U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9128545439861141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.6783102057277793);
    msg.setSource(60955U);
    msg.setSourceEntity(78U);
    msg.setDestination(39075U);
    msg.setDestinationEntity(240U);
    msg.value = 0.4406638237706869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.04922645685060678);
    msg.setSource(4198U);
    msg.setSourceEntity(187U);
    msg.setDestination(34632U);
    msg.setDestinationEntity(229U);
    msg.value = 0.39311632588412926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.9012542908060855);
    msg.setSource(62866U);
    msg.setSourceEntity(117U);
    msg.setDestination(18166U);
    msg.setDestinationEntity(123U);
    msg.x = 0.792210451460085;
    msg.y = 0.6855984563798733;
    msg.z = 0.9275749464830201;
    msg.phi = 0.5930266450196965;
    msg.theta = 0.1872521697246613;
    msg.psi = 0.4003729649255501;
    msg.p = 0.5224038369653756;
    msg.q = 0.8247856652067996;
    msg.r = 0.5996975290758525;
    msg.u = 0.746390456891749;
    msg.v = 0.7613562693183019;
    msg.w = 0.38179336767843775;
    msg.bias_psi = 0.4759799256858509;
    msg.bias_r = 0.014200537855084572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.5719593696354971);
    msg.setSource(51948U);
    msg.setSourceEntity(223U);
    msg.setDestination(20165U);
    msg.setDestinationEntity(89U);
    msg.x = 0.05799239367841047;
    msg.y = 0.652947902133737;
    msg.z = 0.5129826983765838;
    msg.phi = 0.7220365125442839;
    msg.theta = 0.8453670098846292;
    msg.psi = 0.8900766765111406;
    msg.p = 0.4948333195430433;
    msg.q = 0.8689565296657705;
    msg.r = 0.597134318647719;
    msg.u = 0.3232643937384626;
    msg.v = 0.47658494546930574;
    msg.w = 0.8678219526280098;
    msg.bias_psi = 0.9149523614497818;
    msg.bias_r = 0.813633257169366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.8565894685139146);
    msg.setSource(20335U);
    msg.setSourceEntity(112U);
    msg.setDestination(50459U);
    msg.setDestinationEntity(126U);
    msg.x = 0.740923594976897;
    msg.y = 0.8963575584557129;
    msg.z = 0.19887184104727673;
    msg.phi = 0.6294162149260187;
    msg.theta = 0.32787168018633617;
    msg.psi = 0.5040852672088633;
    msg.p = 0.7031790593299038;
    msg.q = 0.9753812138416629;
    msg.r = 0.925400503838924;
    msg.u = 0.02957718702524814;
    msg.v = 0.7239846951653988;
    msg.w = 0.8333079752127833;
    msg.bias_psi = 0.3510454453422204;
    msg.bias_r = 0.39240184405991385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.6167106938536888);
    msg.setSource(11013U);
    msg.setSourceEntity(218U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(166U);
    msg.bias_psi = 0.5927475690294728;
    msg.bias_r = 0.7866831885521365;
    msg.cog = 0.8455230734105473;
    msg.cyaw = 0.46392986925906876;
    msg.lbl_rej_level = 0.019205674176376086;
    msg.gps_rej_level = 0.990423586455339;
    msg.custom_x = 0.95530977206767;
    msg.custom_y = 0.4194006733875445;
    msg.custom_z = 0.47979817956182125;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.804793666066666);
    msg.setSource(32257U);
    msg.setSourceEntity(40U);
    msg.setDestination(9849U);
    msg.setDestinationEntity(119U);
    msg.bias_psi = 0.6945239109253398;
    msg.bias_r = 0.03637100622798051;
    msg.cog = 0.6081921620586656;
    msg.cyaw = 0.0814523059620984;
    msg.lbl_rej_level = 0.728888426461403;
    msg.gps_rej_level = 0.357223120766914;
    msg.custom_x = 0.3239919809408258;
    msg.custom_y = 0.44714266975139016;
    msg.custom_z = 0.5824886508116363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.0645161701955771);
    msg.setSource(14698U);
    msg.setSourceEntity(5U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(253U);
    msg.bias_psi = 0.7754570232756246;
    msg.bias_r = 0.5865378774728331;
    msg.cog = 0.3186419017062123;
    msg.cyaw = 0.9377700421110061;
    msg.lbl_rej_level = 0.025019863736175596;
    msg.gps_rej_level = 0.598692933056029;
    msg.custom_x = 0.16068444190500353;
    msg.custom_y = 0.9431890320828307;
    msg.custom_z = 0.24067853761186475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.501327124358878);
    msg.setSource(41129U);
    msg.setSourceEntity(59U);
    msg.setDestination(19581U);
    msg.setDestinationEntity(53U);
    msg.utc_time = 0.6659990399572089;
    msg.reason = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.12248027722195676);
    msg.setSource(25948U);
    msg.setSourceEntity(186U);
    msg.setDestination(47359U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.9978321246865721;
    msg.reason = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.5089530413702199);
    msg.setSource(38523U);
    msg.setSourceEntity(137U);
    msg.setDestination(50809U);
    msg.setDestinationEntity(0U);
    msg.utc_time = 0.60272225920416;
    msg.reason = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.23783025694461035);
    msg.setSource(8906U);
    msg.setSourceEntity(191U);
    msg.setDestination(32916U);
    msg.setDestinationEntity(119U);
    msg.id = 237U;
    msg.range = 0.612709721141811;
    msg.acceptance = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.6582242801281883);
    msg.setSource(27228U);
    msg.setSourceEntity(35U);
    msg.setDestination(55955U);
    msg.setDestinationEntity(42U);
    msg.id = 42U;
    msg.range = 0.15616213254717937;
    msg.acceptance = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.3993089813457482);
    msg.setSource(19035U);
    msg.setSourceEntity(84U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(231U);
    msg.id = 154U;
    msg.range = 0.005869765168018071;
    msg.acceptance = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.503410313293418);
    msg.setSource(22578U);
    msg.setSourceEntity(163U);
    msg.setDestination(3096U);
    msg.setDestinationEntity(102U);
    msg.type = 87U;
    msg.reason = 18U;
    msg.value = 0.049072250886010416;
    msg.timestep = 0.102372800634562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.5818366063256103);
    msg.setSource(28202U);
    msg.setSourceEntity(175U);
    msg.setDestination(9428U);
    msg.setDestinationEntity(170U);
    msg.type = 94U;
    msg.reason = 10U;
    msg.value = 0.03962248896571796;
    msg.timestep = 0.7514728740659715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.9132706852839653);
    msg.setSource(38889U);
    msg.setSourceEntity(49U);
    msg.setDestination(54351U);
    msg.setDestinationEntity(36U);
    msg.type = 216U;
    msg.reason = 238U;
    msg.value = 0.3083275412551377;
    msg.timestep = 0.3230734673257277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.33500497199728174);
    msg.setSource(40786U);
    msg.setSourceEntity(7U);
    msg.setDestination(21389U);
    msg.setDestinationEntity(251U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KTQMXEDREGGYZSVWAOCKRPCMFWOKXPLHBIMULYCDONOTNSNMPUWQDOTZXOWHHRFKEJCFXYVTUTGRHJCTSVNDJVGEZEGXPVRLUXTUEGZXVNZRJGUPJHIOJWTCIHVHYUFDZIYKNQULAYBPYZQWSJEVRAJBDGCLLWZISFAXAXQLZFBPQFMIDCWAFUQKYMAEHEPVSQMBS");
    tmp_msg_0.lat = 0.15895947938682875;
    tmp_msg_0.lon = 0.8109330633093598;
    tmp_msg_0.depth = 0.4013029040600179;
    tmp_msg_0.query_channel = 7U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 128U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7628169667430715;
    msg.y = 0.85625376301995;
    msg.var_x = 0.6523829332961051;
    msg.var_y = 0.6651689770240444;
    msg.distance = 0.7355492824480347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.125053013229125);
    msg.setSource(40495U);
    msg.setSourceEntity(21U);
    msg.setDestination(55310U);
    msg.setDestinationEntity(88U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FITCGRBKQUVPZCPIYMRANGOETVKKLTDKQJDUNIMWBNOVNCXIZ");
    tmp_msg_0.lat = 0.43537829420678464;
    tmp_msg_0.lon = 0.2248673362052659;
    tmp_msg_0.depth = 0.5044154100899534;
    tmp_msg_0.query_channel = 12U;
    tmp_msg_0.reply_channel = 137U;
    tmp_msg_0.transponder_delay = 160U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8194871085145733;
    msg.y = 0.25055555908413374;
    msg.var_x = 0.09218418369622505;
    msg.var_y = 0.7234868120195168;
    msg.distance = 0.9048060186423525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.7693233470602914);
    msg.setSource(20790U);
    msg.setSourceEntity(57U);
    msg.setDestination(59424U);
    msg.setDestinationEntity(241U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MAIWSLIBZAMNBOOHOJHGXOQFAXZIMJDJKXSLVWUCEMYPEDOOSAHTLTPBCVNNIAUGWRHKOUIPXJRWISFJYNYEUGXOGIQDIAZYUGLAQKOCNYGKKLGUCERVEHRGAPFVWPFJZWS");
    tmp_msg_0.lat = 0.16117733017324687;
    tmp_msg_0.lon = 0.8924707926717461;
    tmp_msg_0.depth = 0.4038447911612765;
    tmp_msg_0.query_channel = 174U;
    tmp_msg_0.reply_channel = 244U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6108006963899661;
    msg.y = 0.5400557186466275;
    msg.var_x = 0.30780191380599997;
    msg.var_y = 0.0021780149306231955;
    msg.distance = 0.5979610507226929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.6973402842959693);
    msg.setSource(44666U);
    msg.setSourceEntity(187U);
    msg.setDestination(38561U);
    msg.setDestinationEntity(164U);
    msg.state = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.4761375349362317);
    msg.setSource(20U);
    msg.setSourceEntity(90U);
    msg.setDestination(5891U);
    msg.setDestinationEntity(241U);
    msg.state = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.8490391635986155);
    msg.setSource(42635U);
    msg.setSourceEntity(127U);
    msg.setDestination(43897U);
    msg.setDestinationEntity(174U);
    msg.state = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.20717991801213653);
    msg.setSource(41697U);
    msg.setSourceEntity(200U);
    msg.setDestination(20645U);
    msg.setDestinationEntity(6U);
    msg.x = 0.3230736239294322;
    msg.y = 0.5232853920416585;
    msg.z = 0.31321780065749627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.2570689614458359);
    msg.setSource(27540U);
    msg.setSourceEntity(94U);
    msg.setDestination(2309U);
    msg.setDestinationEntity(83U);
    msg.x = 0.29254528762743504;
    msg.y = 0.7123241888431564;
    msg.z = 0.78142922187869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.7221483473440736);
    msg.setSource(21877U);
    msg.setSourceEntity(214U);
    msg.setDestination(41389U);
    msg.setDestinationEntity(232U);
    msg.x = 0.8536882418360702;
    msg.y = 0.9760355746997416;
    msg.z = 0.8689340164149505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.2775824504733104);
    msg.setSource(56684U);
    msg.setSourceEntity(71U);
    msg.setDestination(32213U);
    msg.setDestinationEntity(248U);
    msg.va = 0.7199045447547652;
    msg.aoa = 0.4090112253008039;
    msg.ssa = 0.11807309025051871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.9762238639221849);
    msg.setSource(59242U);
    msg.setSourceEntity(204U);
    msg.setDestination(40833U);
    msg.setDestinationEntity(226U);
    msg.va = 0.22148699925496163;
    msg.aoa = 0.9680334713568391;
    msg.ssa = 0.17085136512425914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.06209392745915365);
    msg.setSource(2203U);
    msg.setSourceEntity(74U);
    msg.setDestination(54555U);
    msg.setDestinationEntity(84U);
    msg.va = 0.4653800590909283;
    msg.aoa = 0.8026748120844048;
    msg.ssa = 0.28217783491867066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.2982408552963811);
    msg.setSource(4146U);
    msg.setSourceEntity(182U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(208U);
    msg.value = 0.03867536897641621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.507421681030833);
    msg.setSource(30214U);
    msg.setSourceEntity(249U);
    msg.setDestination(19359U);
    msg.setDestinationEntity(174U);
    msg.value = 0.15016594315954723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.9900398937279098);
    msg.setSource(19554U);
    msg.setSourceEntity(110U);
    msg.setDestination(17149U);
    msg.setDestinationEntity(103U);
    msg.value = 0.06287739060613484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.7047117114528377);
    msg.setSource(23990U);
    msg.setSourceEntity(199U);
    msg.setDestination(34009U);
    msg.setDestinationEntity(105U);
    msg.value = 0.5434109025804528;
    msg.z_units = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.1156120781747435);
    msg.setSource(3459U);
    msg.setSourceEntity(40U);
    msg.setDestination(39433U);
    msg.setDestinationEntity(20U);
    msg.value = 0.10319543771613071;
    msg.z_units = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.17309607646666658);
    msg.setSource(39883U);
    msg.setSourceEntity(168U);
    msg.setDestination(63556U);
    msg.setDestinationEntity(217U);
    msg.value = 0.19038273000008876;
    msg.z_units = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.2406655264943104);
    msg.setSource(50689U);
    msg.setSourceEntity(116U);
    msg.setDestination(20988U);
    msg.setDestinationEntity(207U);
    msg.value = 0.10517507231975387;
    msg.speed_units = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.36295925277216845);
    msg.setSource(14991U);
    msg.setSourceEntity(143U);
    msg.setDestination(16391U);
    msg.setDestinationEntity(126U);
    msg.value = 0.4734292299318139;
    msg.speed_units = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.3441055924267996);
    msg.setSource(14156U);
    msg.setSourceEntity(83U);
    msg.setDestination(27962U);
    msg.setDestinationEntity(198U);
    msg.value = 0.4506663282890606;
    msg.speed_units = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.3335799879214597);
    msg.setSource(5856U);
    msg.setSourceEntity(96U);
    msg.setDestination(10430U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7669837084903024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.4777099538915798);
    msg.setSource(6526U);
    msg.setSourceEntity(49U);
    msg.setDestination(39808U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0007897561019635235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.22046327055532045);
    msg.setSource(58537U);
    msg.setSourceEntity(156U);
    msg.setDestination(35712U);
    msg.setDestinationEntity(212U);
    msg.value = 0.03533727880251203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.500996534271939);
    msg.setSource(28192U);
    msg.setSourceEntity(92U);
    msg.setDestination(37802U);
    msg.setDestinationEntity(244U);
    msg.value = 0.9791201136370317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.23961074768501378);
    msg.setSource(57714U);
    msg.setSourceEntity(114U);
    msg.setDestination(32301U);
    msg.setDestinationEntity(139U);
    msg.value = 0.5672643222544274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.7809807412890049);
    msg.setSource(15890U);
    msg.setSourceEntity(71U);
    msg.setDestination(28364U);
    msg.setDestinationEntity(7U);
    msg.value = 0.20021986153453186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.3452998368477347);
    msg.setSource(61882U);
    msg.setSourceEntity(37U);
    msg.setDestination(29285U);
    msg.setDestinationEntity(207U);
    msg.value = 0.9211382735890196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.31334357182654293);
    msg.setSource(60423U);
    msg.setSourceEntity(110U);
    msg.setDestination(41930U);
    msg.setDestinationEntity(105U);
    msg.value = 0.07427609962702675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.4783216352994494);
    msg.setSource(53637U);
    msg.setSourceEntity(19U);
    msg.setDestination(48284U);
    msg.setDestinationEntity(106U);
    msg.value = 0.9534413236008077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.20270155618353602);
    msg.setSource(2189U);
    msg.setSourceEntity(144U);
    msg.setDestination(35526U);
    msg.setDestinationEntity(80U);
    msg.path_ref = 534088719U;
    msg.start_lat = 0.9665577242722774;
    msg.start_lon = 0.4569968590967962;
    msg.start_z = 0.48859197129064125;
    msg.start_z_units = 170U;
    msg.end_lat = 0.5676008113045823;
    msg.end_lon = 0.18853011805510433;
    msg.end_z = 0.6443492583674207;
    msg.end_z_units = 43U;
    msg.speed = 0.20514855207699778;
    msg.speed_units = 72U;
    msg.lradius = 0.5121821489470674;
    msg.flags = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.06964031863671039);
    msg.setSource(50372U);
    msg.setSourceEntity(165U);
    msg.setDestination(25438U);
    msg.setDestinationEntity(194U);
    msg.path_ref = 1839725818U;
    msg.start_lat = 0.031783552515932456;
    msg.start_lon = 0.9105572342564494;
    msg.start_z = 0.5591507162866395;
    msg.start_z_units = 123U;
    msg.end_lat = 0.4952301203186882;
    msg.end_lon = 0.6318561636112694;
    msg.end_z = 0.05873189837649995;
    msg.end_z_units = 52U;
    msg.speed = 0.6878334214542073;
    msg.speed_units = 234U;
    msg.lradius = 0.14957961696193223;
    msg.flags = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.6769269797011956);
    msg.setSource(11189U);
    msg.setSourceEntity(33U);
    msg.setDestination(16706U);
    msg.setDestinationEntity(179U);
    msg.path_ref = 1111911618U;
    msg.start_lat = 0.3664482123019148;
    msg.start_lon = 0.7637871558968583;
    msg.start_z = 0.10178737703703333;
    msg.start_z_units = 25U;
    msg.end_lat = 0.573556316016261;
    msg.end_lon = 0.6994615992106901;
    msg.end_z = 0.31650990669580836;
    msg.end_z_units = 4U;
    msg.speed = 0.1920901534662065;
    msg.speed_units = 109U;
    msg.lradius = 0.9870850100782119;
    msg.flags = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.25278358545676427);
    msg.setSource(6156U);
    msg.setSourceEntity(21U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(51U);
    msg.x = 0.877973520081801;
    msg.y = 0.9102215788053535;
    msg.z = 0.9860594470498314;
    msg.k = 0.9765465423769643;
    msg.m = 0.21123609426048628;
    msg.n = 0.3630263912605296;
    msg.flags = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.41067102657605736);
    msg.setSource(12571U);
    msg.setSourceEntity(73U);
    msg.setDestination(9653U);
    msg.setDestinationEntity(67U);
    msg.x = 0.1389402202846498;
    msg.y = 0.3292671940226116;
    msg.z = 0.18554459446569171;
    msg.k = 0.6850529669117584;
    msg.m = 0.9135697512321631;
    msg.n = 0.46251684649091684;
    msg.flags = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.3072104743971499);
    msg.setSource(24703U);
    msg.setSourceEntity(14U);
    msg.setDestination(17412U);
    msg.setDestinationEntity(138U);
    msg.x = 0.13875946476045609;
    msg.y = 0.38205912688579335;
    msg.z = 0.8512920478748858;
    msg.k = 0.6014370062607719;
    msg.m = 0.9450872975167417;
    msg.n = 0.6309621019472791;
    msg.flags = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.360033255427595);
    msg.setSource(4679U);
    msg.setSourceEntity(154U);
    msg.setDestination(58817U);
    msg.setDestinationEntity(7U);
    msg.value = 0.25686435690788967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.3481739279212712);
    msg.setSource(39508U);
    msg.setSourceEntity(145U);
    msg.setDestination(53741U);
    msg.setDestinationEntity(201U);
    msg.value = 0.4501186706786282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.024676398357195595);
    msg.setSource(51565U);
    msg.setSourceEntity(225U);
    msg.setDestination(25302U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8208279895199438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.7148163057567071);
    msg.setSource(15317U);
    msg.setSourceEntity(156U);
    msg.setDestination(57757U);
    msg.setDestinationEntity(208U);
    msg.u = 0.4672352647762681;
    msg.v = 0.08269687816642268;
    msg.w = 0.8883053907697637;
    msg.p = 0.591279822530697;
    msg.q = 0.6717383116983564;
    msg.r = 0.7503622731779224;
    msg.flags = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.1237158217517138);
    msg.setSource(60592U);
    msg.setSourceEntity(42U);
    msg.setDestination(60610U);
    msg.setDestinationEntity(132U);
    msg.u = 0.05475860249721942;
    msg.v = 0.30744849205966207;
    msg.w = 0.12016314873399958;
    msg.p = 0.1589332383189377;
    msg.q = 0.8662078241711716;
    msg.r = 0.15759639350774035;
    msg.flags = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.4662545916148978);
    msg.setSource(30678U);
    msg.setSourceEntity(112U);
    msg.setDestination(37990U);
    msg.setDestinationEntity(205U);
    msg.u = 0.21038649932944486;
    msg.v = 0.07834873390398145;
    msg.w = 0.8634431206069408;
    msg.p = 0.8920617503341534;
    msg.q = 0.08351292141153621;
    msg.r = 0.5587376792888499;
    msg.flags = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.3787002049885967);
    msg.setSource(10656U);
    msg.setSourceEntity(107U);
    msg.setDestination(23319U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 4262614431U;
    msg.start_lat = 0.3242687402308233;
    msg.start_lon = 0.6996785601629497;
    msg.start_z = 0.8254314125347949;
    msg.start_z_units = 141U;
    msg.end_lat = 0.9170197066673244;
    msg.end_lon = 0.06275091557734358;
    msg.end_z = 0.030867839402404118;
    msg.end_z_units = 24U;
    msg.lradius = 0.8105933866309581;
    msg.flags = 87U;
    msg.x = 0.7659423832072826;
    msg.y = 0.3842188063822538;
    msg.z = 0.60719146449662;
    msg.vx = 0.07416020526010791;
    msg.vy = 0.9561298708968988;
    msg.vz = 0.1888795386314397;
    msg.course_error = 0.14667613921069222;
    msg.eta = 2192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.8712117879360401);
    msg.setSource(39593U);
    msg.setSourceEntity(208U);
    msg.setDestination(3324U);
    msg.setDestinationEntity(245U);
    msg.path_ref = 2156124496U;
    msg.start_lat = 0.9649038662454607;
    msg.start_lon = 0.6189277364156098;
    msg.start_z = 0.708489594365843;
    msg.start_z_units = 199U;
    msg.end_lat = 0.9930399758019781;
    msg.end_lon = 0.947616047876138;
    msg.end_z = 0.14656708956598818;
    msg.end_z_units = 16U;
    msg.lradius = 0.21162941046084394;
    msg.flags = 76U;
    msg.x = 0.13604375935804414;
    msg.y = 0.3935199241386653;
    msg.z = 0.8902144440857183;
    msg.vx = 0.38162121384331316;
    msg.vy = 0.2879846928377958;
    msg.vz = 0.15908807335082542;
    msg.course_error = 0.5379439782419152;
    msg.eta = 37269U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.18627132440205207);
    msg.setSource(6555U);
    msg.setSourceEntity(164U);
    msg.setDestination(56244U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 2474169715U;
    msg.start_lat = 0.8021576314470747;
    msg.start_lon = 0.3897202688414396;
    msg.start_z = 0.7676400105136538;
    msg.start_z_units = 143U;
    msg.end_lat = 0.27198365757640863;
    msg.end_lon = 0.8409989155469606;
    msg.end_z = 0.25413866175050315;
    msg.end_z_units = 47U;
    msg.lradius = 0.8457511273507109;
    msg.flags = 242U;
    msg.x = 0.06222443938651645;
    msg.y = 0.16619767761794713;
    msg.z = 0.8203462995001136;
    msg.vx = 0.09072380175693695;
    msg.vy = 0.6627100983887998;
    msg.vz = 0.4323298725915472;
    msg.course_error = 0.24583492692522368;
    msg.eta = 56165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.7491648395343876);
    msg.setSource(26336U);
    msg.setSourceEntity(194U);
    msg.setDestination(23238U);
    msg.setDestinationEntity(102U);
    msg.k = 0.21962626149052822;
    msg.m = 0.8558272055790948;
    msg.n = 0.9129563488111291;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.6994760825948039);
    msg.setSource(37826U);
    msg.setSourceEntity(21U);
    msg.setDestination(55078U);
    msg.setDestinationEntity(236U);
    msg.k = 0.3195627819666753;
    msg.m = 0.14596187294491647;
    msg.n = 0.20468212083543402;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.8543734046659215);
    msg.setSource(32582U);
    msg.setSourceEntity(51U);
    msg.setDestination(14899U);
    msg.setDestinationEntity(147U);
    msg.k = 0.9016861691874359;
    msg.m = 0.6733148007890056;
    msg.n = 0.8989013806121382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.7254979783653877);
    msg.setSource(19392U);
    msg.setSourceEntity(133U);
    msg.setDestination(61358U);
    msg.setDestinationEntity(82U);
    msg.p = 0.48038157439286655;
    msg.i = 0.9991653183529384;
    msg.d = 0.2933110380336691;
    msg.a = 0.6324656480952093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.45252925609038774);
    msg.setSource(33590U);
    msg.setSourceEntity(138U);
    msg.setDestination(32184U);
    msg.setDestinationEntity(7U);
    msg.p = 0.5221994429396362;
    msg.i = 0.8132316537754006;
    msg.d = 0.44339555600232383;
    msg.a = 0.8408122494704118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.17870663270926568);
    msg.setSource(47048U);
    msg.setSourceEntity(246U);
    msg.setDestination(49822U);
    msg.setDestinationEntity(206U);
    msg.p = 0.1254319346042534;
    msg.i = 0.08632518448397786;
    msg.d = 0.8176561840158413;
    msg.a = 0.17536874661168012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.43728028601925373);
    msg.setSource(29497U);
    msg.setSourceEntity(210U);
    msg.setDestination(7067U);
    msg.setDestinationEntity(163U);
    msg.op = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.3131985395563205);
    msg.setSource(29806U);
    msg.setSourceEntity(135U);
    msg.setDestination(55696U);
    msg.setDestinationEntity(117U);
    msg.op = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.2906744898923733);
    msg.setSource(60195U);
    msg.setSourceEntity(30U);
    msg.setDestination(2107U);
    msg.setDestinationEntity(32U);
    msg.op = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.6239320670010559);
    msg.setSource(37064U);
    msg.setSourceEntity(112U);
    msg.setDestination(50676U);
    msg.setDestinationEntity(110U);
    msg.x = 0.7819106160348014;
    msg.y = 0.6352367698389927;
    msg.z = 0.29579607635090066;
    msg.vx = 0.6945318077724423;
    msg.vy = 0.6904548445391085;
    msg.vz = 0.721333634493189;
    msg.ax = 0.7333641890449673;
    msg.ay = 0.9346362583117889;
    msg.az = 0.6679664036981666;
    msg.flags = 22967U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.7269037361157634);
    msg.setSource(49995U);
    msg.setSourceEntity(190U);
    msg.setDestination(63227U);
    msg.setDestinationEntity(183U);
    msg.x = 0.6807769403386434;
    msg.y = 0.40878248533557127;
    msg.z = 0.49378518438095576;
    msg.vx = 0.08704881241549889;
    msg.vy = 0.7273781790136261;
    msg.vz = 0.6401888410443092;
    msg.ax = 0.5019967941304011;
    msg.ay = 0.40598829712501816;
    msg.az = 0.21215465853561177;
    msg.flags = 15279U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.5186344152131718);
    msg.setSource(6572U);
    msg.setSourceEntity(40U);
    msg.setDestination(8832U);
    msg.setDestinationEntity(56U);
    msg.x = 0.49957199810021913;
    msg.y = 0.09378747135303389;
    msg.z = 0.5914991712902496;
    msg.vx = 0.07694461145564446;
    msg.vy = 0.12611311290156868;
    msg.vz = 0.3716186731061012;
    msg.ax = 0.8785864815492125;
    msg.ay = 0.5214420706820025;
    msg.az = 0.7550053355901319;
    msg.flags = 59501U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.3660360532590051);
    msg.setSource(40160U);
    msg.setSourceEntity(136U);
    msg.setDestination(62737U);
    msg.setDestinationEntity(53U);
    msg.value = 0.10074807314405598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.2739237808192698);
    msg.setSource(49835U);
    msg.setSourceEntity(36U);
    msg.setDestination(45335U);
    msg.setDestinationEntity(121U);
    msg.value = 0.8213400187300821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.6658045846746796);
    msg.setSource(1990U);
    msg.setSourceEntity(19U);
    msg.setDestination(48664U);
    msg.setDestinationEntity(48U);
    msg.value = 0.043411481862845824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6038594298826119);
    msg.setSource(9117U);
    msg.setSourceEntity(209U);
    msg.setDestination(2067U);
    msg.setDestinationEntity(235U);
    msg.timeout = 45958U;
    msg.lat = 0.3118295549953969;
    msg.lon = 0.547332719741864;
    msg.z = 0.3543595929637785;
    msg.z_units = 33U;
    msg.speed = 0.18311221180607984;
    msg.speed_units = 47U;
    msg.roll = 0.9812443882904042;
    msg.pitch = 0.45116499413840827;
    msg.yaw = 0.4382360213941181;
    msg.custom.assign("FDBPVPSFZLNLZMSCBKITOYDFKRNTRBFMAQUBCFMONXBGHGYHZFWGATTBAOVANNFSXUCEIQSJAPRDXYWHVPYKCWUTVCYZRUTHEXTIQVKIYOWMXAMUBPZXPXHWSLIJPIUQMEDGWTJRAVEEGHMLBYJXKQVVREJKLZGSAODQYAVBTCXDSEQROHNKJIPGYEKOMLKSSUIHLEOPWMIJVZZLEAUDQZPYMJODFUSLXRCCLHRDWNOKZNTFQUQNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.23211127373463836);
    msg.setSource(1021U);
    msg.setSourceEntity(71U);
    msg.setDestination(6777U);
    msg.setDestinationEntity(11U);
    msg.timeout = 432U;
    msg.lat = 0.629510243067084;
    msg.lon = 0.026542560128085202;
    msg.z = 0.8158767600599229;
    msg.z_units = 233U;
    msg.speed = 0.11706520876277215;
    msg.speed_units = 177U;
    msg.roll = 0.17829558133864165;
    msg.pitch = 0.803764197363841;
    msg.yaw = 0.6534713921565433;
    msg.custom.assign("KRVULVHCVYRGLZGOWCZJAQTWGSZUWUCSSVXYHIDGFBJGASORUJJLQXWTLYQMUKKBJUNLCNGFZDRAYSRLEPXSOIUQWVNNLEZLFJSEXDOTMZVYQQWARGDNXHDLCBBPTDBCSFPKAEVBIZXDQTXKQPACBMVYBCFTADNIDQFQMDGOONMTMRFYEWOPKMZPPIRHKJRXMECHSRAWCXGTNHPJYJWEHHOIOKBYTMKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.15324866887436062);
    msg.setSource(30580U);
    msg.setSourceEntity(220U);
    msg.setDestination(14432U);
    msg.setDestinationEntity(17U);
    msg.timeout = 30274U;
    msg.lat = 0.9478802058149828;
    msg.lon = 0.2937390326637589;
    msg.z = 0.9697732286512951;
    msg.z_units = 197U;
    msg.speed = 0.6281384707358094;
    msg.speed_units = 105U;
    msg.roll = 0.3075465639777173;
    msg.pitch = 0.5227016306864023;
    msg.yaw = 0.5419123847847269;
    msg.custom.assign("JEDNHNPVWEXXVRCLJKKNPPUZKLGXUALQGYOSJSQJOGXKCLBZXAFNBMYJDHHDKFFAVQMVAADTGILCEUOLKMXWHFUICGVIRQGWSBCBUPIMIVUYLWRCONFVYNBMFTQUAZZZQPDJMWPKSBSYJTAEPTOZNSSYZQHMQGQJZIFBAWVDXEGOFTOHDTCBRRHPEYSSCTWNBIMDYMFHRIYNRWUKALELXDWSVRRKQHOGUVJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.6323684904685719);
    msg.setSource(35214U);
    msg.setSourceEntity(89U);
    msg.setDestination(47138U);
    msg.setDestinationEntity(157U);
    msg.timeout = 32617U;
    msg.lat = 0.044178300654395875;
    msg.lon = 0.504482697070316;
    msg.z = 0.4538499681528838;
    msg.z_units = 59U;
    msg.speed = 0.6418400566921795;
    msg.speed_units = 232U;
    msg.duration = 62891U;
    msg.radius = 0.2811180129513352;
    msg.flags = 141U;
    msg.custom.assign("PDAHFUCMMWKGBKJWUVVZVOSHKBVJOPCXGSZNXDPBEEJVSIPZKLDFZHMTGIGSRAAKJEPHQFRYLLTTNIGXMZFNGYAQYQDYBYEGGBUZKKUEHSPOZTGBNUXNBLVKYYFTIMMTMVNOLHPQXCCIAKLWSWUOZCJLHUXALREGZEDOIQJKEWCXHOEJFUICDDMXSDRJFRNDWPSAADWVVHIBARHYXRUJQZBYVTWCPRQFXRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.29977071792394616);
    msg.setSource(45378U);
    msg.setSourceEntity(234U);
    msg.setDestination(37212U);
    msg.setDestinationEntity(125U);
    msg.timeout = 28103U;
    msg.lat = 0.39314847577775325;
    msg.lon = 0.3197207171921105;
    msg.z = 0.4042487629845982;
    msg.z_units = 24U;
    msg.speed = 0.1290086825411334;
    msg.speed_units = 126U;
    msg.duration = 38345U;
    msg.radius = 0.9388396724316241;
    msg.flags = 92U;
    msg.custom.assign("TZIYBPFGMPECQHOIMGNXXWIKRAFZCEHNLMFKBEUEVBFJQLCEUMMYJODKERBXUYQRWPDADVVBCVSPFVVRCGTLGYKAURLWAPZQOWZGUPDXSDOBZHKTNKHZLNVDAMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.24223905453480676);
    msg.setSource(38330U);
    msg.setSourceEntity(157U);
    msg.setDestination(46723U);
    msg.setDestinationEntity(142U);
    msg.timeout = 14611U;
    msg.lat = 0.33852241509901626;
    msg.lon = 0.6228105973273563;
    msg.z = 0.33064267772938316;
    msg.z_units = 18U;
    msg.speed = 0.732910897163217;
    msg.speed_units = 217U;
    msg.duration = 52728U;
    msg.radius = 0.1453555689283773;
    msg.flags = 148U;
    msg.custom.assign("UHMCQZLLBIBMVYIMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.30418281960379745);
    msg.setSource(27453U);
    msg.setSourceEntity(116U);
    msg.setDestination(11228U);
    msg.setDestinationEntity(209U);
    msg.custom.assign("BXSJIZCKCFVMFYWJPBHTFJVDFXESWXZMISGSBMJQXLEYINXVJNTRFTZQKMAVIEJRTVAEYUIGOFTQPOCUDKTAGXIYYYULHDLLAJZBPCSPIND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.4512039810736601);
    msg.setSource(46856U);
    msg.setSourceEntity(38U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(168U);
    msg.custom.assign("RASGSJEWTAWYFPTIBRUGRMOYAAXMSQVCJFQNMWXTYVCHVMGQKNSHBTVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.5473750143275277);
    msg.setSource(15536U);
    msg.setSourceEntity(7U);
    msg.setDestination(54225U);
    msg.setDestinationEntity(88U);
    msg.custom.assign("EFBUMMFGYNUYPBUEVPFXMVENBRULTRADRQQDRPGFEDOOLUVIAKXKJZEHUPXGIWBFKWEHHLWMWXMCFFYHLWPAQSZQHMTTPMEIHNKISCROLJXIICRLPABYWJQJKTXCLBQTSODCOHJYPZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.8245351200866369);
    msg.setSource(54839U);
    msg.setSourceEntity(115U);
    msg.setDestination(5036U);
    msg.setDestinationEntity(153U);
    msg.timeout = 39190U;
    msg.lat = 0.23648999610643173;
    msg.lon = 0.01564467407692849;
    msg.z = 0.2681272625002552;
    msg.z_units = 1U;
    msg.duration = 19900U;
    msg.speed = 0.3551652306917177;
    msg.speed_units = 233U;
    msg.type = 222U;
    msg.radius = 0.198963578778815;
    msg.length = 0.02921325025983046;
    msg.bearing = 0.25576411155341916;
    msg.direction = 141U;
    msg.custom.assign("LROTSGICDQMUVVRFHWPNKAKDGSRAGVTQQOKDUGWJALTWCZBIBKTYNVCJYSSFIZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.7323278893575816);
    msg.setSource(15014U);
    msg.setSourceEntity(55U);
    msg.setDestination(24792U);
    msg.setDestinationEntity(46U);
    msg.timeout = 64891U;
    msg.lat = 0.6528257545918824;
    msg.lon = 0.8654757167185639;
    msg.z = 0.41115696796576373;
    msg.z_units = 179U;
    msg.duration = 52609U;
    msg.speed = 0.22836758895378761;
    msg.speed_units = 230U;
    msg.type = 85U;
    msg.radius = 0.513271574696253;
    msg.length = 0.28896640656550876;
    msg.bearing = 0.41466945061069427;
    msg.direction = 65U;
    msg.custom.assign("RLGZPHSJRWVHLQAXAFWJECYZTLUKLAINMLBBBDPXMJSRPDOXDUTCABHPVOLZPCGOCZZQKOZGDLHOMFWWQAKKRPHXAYIKDJDBYNHFXKOYDEENSNFCGJJFQIVGEMXUOURUGMRCQBEQXWSRDRBEGQTWHWBCYUMNULAIQZFABRXMGCDSVWOEZVYCTNPTHJTZJVZQIAPNUDJF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.004764009043831785);
    msg.setSource(8414U);
    msg.setSourceEntity(129U);
    msg.setDestination(16178U);
    msg.setDestinationEntity(123U);
    msg.timeout = 26746U;
    msg.lat = 0.9713499738400088;
    msg.lon = 0.29323133588803785;
    msg.z = 0.907933061708724;
    msg.z_units = 198U;
    msg.duration = 6343U;
    msg.speed = 0.11381831253167263;
    msg.speed_units = 166U;
    msg.type = 70U;
    msg.radius = 0.8118417111896459;
    msg.length = 0.5483494839438072;
    msg.bearing = 0.0934795241293177;
    msg.direction = 3U;
    msg.custom.assign("ZQLYEZIPTPVULWREQIVRDBXVXBEUHXDKTSBPCCVROXZWARPFGQHSQQEFBHSMESYUXBCJOJYSGEFYMHNWVMIHWJWUYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.7934379148326973);
    msg.setSource(44167U);
    msg.setSourceEntity(60U);
    msg.setDestination(33149U);
    msg.setDestinationEntity(29U);
    msg.duration = 29035U;
    msg.custom.assign("MMDPKZCQOTBBFDQHMHWNXGWFSLSZOPWJAEYRHRADSKKDBOZXKLIJXWNPCMVJGUCJEFWDRKMVCYNURWIFVREYVPDPZYXCBSGUIPZEALHYHOLAJUVRYQFAIOKTLLUSBRVPAIATCNYBIOJMDJUARVZBPGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.8501254898942919);
    msg.setSource(38467U);
    msg.setSourceEntity(77U);
    msg.setDestination(43893U);
    msg.setDestinationEntity(160U);
    msg.duration = 20624U;
    msg.custom.assign("EIBGZIWOPPQOQSHQLZOMRTVAIRMFPIVKOXADDZNCCVLUKVRPQNHEXUCHURYNDILASWYAHLEQPSXZOUMFJXBEPCBRSKTNXESTJUAWZFDWHWEGMIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.47023920678897946);
    msg.setSource(39888U);
    msg.setSourceEntity(160U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(32U);
    msg.duration = 12295U;
    msg.custom.assign("AOMDBKOGYFRMMZDTQWQBLTRZXDBPWMNDIUNGJHNWPKEPGAAOEUZYCPWXJCTICMKCEOHWVJLBEAZHVUTQOFOAVSGWSCVKRYCIIYPPYPNXXIFFWMFHJCDQYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.9888083134213687);
    msg.setSource(34269U);
    msg.setSourceEntity(49U);
    msg.setDestination(36515U);
    msg.setDestinationEntity(11U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.3998032439378455;
    msg.control.set(tmp_msg_0);
    msg.duration = 35578U;
    msg.custom.assign("HCJWCDAWAIJPSFWOHEQBOWFFOCMHGMLNGVJXTPSZLAPZSQWBMGMCZDMUBEZONVZOCOYGFWMSPPLQVHPYXJJYAKADFYXNKZIODEVBUXKCAVEGCUQBSLHRLQTBLGTFWVTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.8323684534126082);
    msg.setSource(2521U);
    msg.setSourceEntity(250U);
    msg.setDestination(16022U);
    msg.setDestinationEntity(187U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7927294307309192;
    tmp_msg_0.speed_units = 93U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44514U;
    msg.custom.assign("PEFWDUVDKNPEOJYWGQRLEKJDEAUUDGZYAAGGEDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.46765598165408195);
    msg.setSource(59663U);
    msg.setSourceEntity(45U);
    msg.setDestination(27155U);
    msg.setDestinationEntity(73U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.3643994501575941;
    msg.control.set(tmp_msg_0);
    msg.duration = 88U;
    msg.custom.assign("VMMXRWBCPNTUPXHGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.46695936047171205);
    msg.setSource(61212U);
    msg.setSourceEntity(66U);
    msg.setDestination(17363U);
    msg.setDestinationEntity(208U);
    msg.timeout = 63303U;
    msg.lat = 0.5504191811318023;
    msg.lon = 0.8936273236161368;
    msg.z = 0.9284091112481783;
    msg.z_units = 150U;
    msg.speed = 0.03207020397555238;
    msg.speed_units = 108U;
    msg.bearing = 0.8999894386370292;
    msg.cross_angle = 0.39152253442998175;
    msg.width = 0.6477683921535613;
    msg.length = 0.8272084643369024;
    msg.hstep = 0.8511022330812704;
    msg.coff = 141U;
    msg.alternation = 16U;
    msg.flags = 252U;
    msg.custom.assign("GFWMIQNYJNZTMSKOOINQPOUYRASETLXVZBDVBXTCKRVHRSRVOAOLCIPTVFPNMMSGUWQUJAIRLYZELZNAGHYYWNSFEDQZNNITHPBXFDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.5468221809422183);
    msg.setSource(63078U);
    msg.setSourceEntity(108U);
    msg.setDestination(56203U);
    msg.setDestinationEntity(112U);
    msg.timeout = 4425U;
    msg.lat = 0.2351165491303412;
    msg.lon = 0.6818859854045367;
    msg.z = 0.3732080827789659;
    msg.z_units = 39U;
    msg.speed = 0.8662307800663122;
    msg.speed_units = 120U;
    msg.bearing = 0.7808018263300909;
    msg.cross_angle = 0.8352551045792166;
    msg.width = 0.21121022535573142;
    msg.length = 0.05059328312533684;
    msg.hstep = 0.4271865466857996;
    msg.coff = 58U;
    msg.alternation = 245U;
    msg.flags = 3U;
    msg.custom.assign("JSSGJLGMEZKNFKWBYSNCWRDJIYWUDDOKWMIHRGZJDZQGVBUDLLFUOEJYWQSQLPWGRFARUGTOKQIJQNTMLIRUVHRZJBWTWVCNILAXUJXCTHDRBSTTBDXGFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.5576689757156311);
    msg.setSource(42596U);
    msg.setSourceEntity(111U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(58U);
    msg.timeout = 42908U;
    msg.lat = 0.40212328930048724;
    msg.lon = 0.39484731568976206;
    msg.z = 0.5514733279053294;
    msg.z_units = 88U;
    msg.speed = 0.961470419254284;
    msg.speed_units = 39U;
    msg.bearing = 0.5329471319738659;
    msg.cross_angle = 0.29752405377341207;
    msg.width = 0.5242332149596667;
    msg.length = 0.5688968442301313;
    msg.hstep = 0.04702862940335317;
    msg.coff = 46U;
    msg.alternation = 70U;
    msg.flags = 27U;
    msg.custom.assign("KIZWJNTKKSETOFZXMQZZWXVEUFEDRTHEZSBTPJRYJEEDKPSIJPNDOZFZHHIVWDLBWKONEMAURRQLOMFLTGDGSOVODUCYXOPULYRYULVKJVMHMVGGBPGUBARJPOGXTMIIJLIHHCCELMBAAMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.5900752353049612);
    msg.setSource(48505U);
    msg.setSourceEntity(96U);
    msg.setDestination(3334U);
    msg.setDestinationEntity(69U);
    msg.timeout = 29598U;
    msg.lat = 0.13478854411675445;
    msg.lon = 0.7619498411616273;
    msg.z = 0.967529075824018;
    msg.z_units = 88U;
    msg.speed = 0.3134069294890147;
    msg.speed_units = 175U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.44685636200633916;
    tmp_msg_0.y = 0.7505296106443019;
    tmp_msg_0.z = 0.32055576341114256;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TENXKLLQCLKGHFCXTJNVRYFRUYLGLBTMZKQOFXXNQIBELNQRMMLSVKPMGTOEWVIZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.34535571640690965);
    msg.setSource(64513U);
    msg.setSourceEntity(131U);
    msg.setDestination(58564U);
    msg.setDestinationEntity(101U);
    msg.timeout = 8405U;
    msg.lat = 0.8196821157538512;
    msg.lon = 0.6899512080233329;
    msg.z = 0.6747541410381624;
    msg.z_units = 190U;
    msg.speed = 0.15280570088853174;
    msg.speed_units = 82U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.27057614130553564;
    tmp_msg_0.y = 0.8715479218536485;
    tmp_msg_0.z = 0.054305944102367;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EPEJFDUJJNLBUYPFWWEROGODCCKNXSEURKDPWZGRATTJQEJIBTXIBCGIVUOSLFKQVALDMDYYRUZTTHSKMLZLFOVDXLKJGORTQRISQHXOGEIHPABWSVAKFREFPVZTTMHCHPNUCMHIFXGDMOVKFVWLWREOWXNHDVMDDHYMQHRESTIAUKBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.11145104327480737);
    msg.setSource(7120U);
    msg.setSourceEntity(64U);
    msg.setDestination(46639U);
    msg.setDestinationEntity(120U);
    msg.timeout = 48140U;
    msg.lat = 0.02807317066219872;
    msg.lon = 0.6699026810296457;
    msg.z = 0.30138144146127765;
    msg.z_units = 25U;
    msg.speed = 0.8272192920799007;
    msg.speed_units = 133U;
    msg.custom.assign("CSOTSHLGUDDHKWAMWUDUEWZRSMUXKOKZBXZBHGJETFWXMZAPCJVIJITQCRJXFQKMUXDJZJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.4827895730791142);
    msg.setSource(54406U);
    msg.setSourceEntity(150U);
    msg.setDestination(64126U);
    msg.setDestinationEntity(49U);
    msg.x = 0.4028230638572069;
    msg.y = 0.09513111358341764;
    msg.z = 0.3587406137472109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.36543196299453673);
    msg.setSource(23511U);
    msg.setSourceEntity(13U);
    msg.setDestination(59802U);
    msg.setDestinationEntity(111U);
    msg.x = 0.37736453497197386;
    msg.y = 0.647187457254649;
    msg.z = 0.08707641663368548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.8865346896354007);
    msg.setSource(35018U);
    msg.setSourceEntity(202U);
    msg.setDestination(44681U);
    msg.setDestinationEntity(69U);
    msg.x = 0.8382051985423211;
    msg.y = 0.7472214870690065;
    msg.z = 0.06211933543887971;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.8021144096611404);
    msg.setSource(14793U);
    msg.setSourceEntity(225U);
    msg.setDestination(33522U);
    msg.setDestinationEntity(183U);
    msg.timeout = 29837U;
    msg.lat = 0.21283115183366164;
    msg.lon = 0.5694286221398892;
    msg.z = 0.14339692436021179;
    msg.z_units = 247U;
    msg.amplitude = 0.7059312172344165;
    msg.pitch = 0.13452364555714813;
    msg.speed = 0.44468570250137307;
    msg.speed_units = 89U;
    msg.custom.assign("WSHYWENFOKMTLQVSHAIVNDNAOQFXJKPMVNFXKDIZKJVJXJYAVTOKRQCKRYSOZQIJVNLRUYWFIYEZEPATNRYAIPOHXGHNTQWRECBNKUVDGOWPCESCSRE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.7620668622604685);
    msg.setSource(24611U);
    msg.setSourceEntity(174U);
    msg.setDestination(53119U);
    msg.setDestinationEntity(178U);
    msg.timeout = 57286U;
    msg.lat = 0.2676550711060526;
    msg.lon = 0.3301232467666422;
    msg.z = 0.29715206273183015;
    msg.z_units = 182U;
    msg.amplitude = 0.13341483999424153;
    msg.pitch = 0.5343578946174116;
    msg.speed = 0.9681813062594449;
    msg.speed_units = 232U;
    msg.custom.assign("ASYWLECJAWOIJNTHUAQTHAPGFXFCYSQTTSORGDYYRGDWCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.18882660999203438);
    msg.setSource(45155U);
    msg.setSourceEntity(198U);
    msg.setDestination(28425U);
    msg.setDestinationEntity(183U);
    msg.timeout = 5547U;
    msg.lat = 0.9162071241797446;
    msg.lon = 0.17486086020201264;
    msg.z = 0.6028525510466258;
    msg.z_units = 59U;
    msg.amplitude = 0.4101367399076361;
    msg.pitch = 0.7831581859833241;
    msg.speed = 0.39510590714676874;
    msg.speed_units = 223U;
    msg.custom.assign("RIHILDTNVVEBNWOGTHPHGYWCYIJWVVXSDVLJUKSHHBLVSTZTQMLPTMMKSZWZALLQQFLSKMTWXUXHSZYTDFABEEGMVITXUYQRJNOBYRQKCMSJJRSRHUSKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.9055102705785791);
    msg.setSource(50836U);
    msg.setSourceEntity(107U);
    msg.setDestination(19441U);
    msg.setDestinationEntity(99U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.6420497530149684);
    msg.setSource(15183U);
    msg.setSourceEntity(194U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(101U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.15370894848112782);
    msg.setSource(46689U);
    msg.setSourceEntity(175U);
    msg.setDestination(18152U);
    msg.setDestinationEntity(85U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.35511082864171295);
    msg.setSource(63353U);
    msg.setSourceEntity(112U);
    msg.setDestination(42499U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.5173074261502743;
    msg.lon = 0.8968890726366164;
    msg.z = 0.38063749936916125;
    msg.z_units = 210U;
    msg.radius = 0.5578225836112914;
    msg.duration = 25473U;
    msg.speed = 0.8823204388553831;
    msg.speed_units = 231U;
    msg.popup_period = 57018U;
    msg.popup_duration = 23991U;
    msg.flags = 90U;
    msg.custom.assign("FTENJDOVBMQLRRKYGGUKDLUYCPVIEPUHCAGBMFZTLLFZCJUISHGSZISBGULTTJDDOJCZZTIPHRPOYMFFRKVVYMNCKVRWWHEXWNPIPRTOWZPOPNXIFDSKGWVKEKBCXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.414506349419122);
    msg.setSource(61745U);
    msg.setSourceEntity(13U);
    msg.setDestination(20419U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.2964010718939504;
    msg.lon = 0.14642651757397118;
    msg.z = 0.9356645629976006;
    msg.z_units = 169U;
    msg.radius = 0.06392132953556084;
    msg.duration = 17029U;
    msg.speed = 0.7844278057484175;
    msg.speed_units = 39U;
    msg.popup_period = 58830U;
    msg.popup_duration = 51985U;
    msg.flags = 135U;
    msg.custom.assign("WGKYYCGVFVFRBUTOYGXDYTDMDFOFLMSBTCUTQSLLSAXPWUWHOILUBAQWLGZCRJQSDBXZYFNXHIBAUWAQALSFNUHANYQGVDKMZPCOESIVUCBORCMNSJCZGPQRXZDOZOQKMYLVBHJNQHARRDIXNIECLPUYTFWLKVGMJAETXEGCVQOKNRIKEZJNMIPKJFPJMJMRBHAXYIPOZERWFVPREXNWPAJHSEJSFOIPLYUMTQGVGHBHWTHKKCUITZDTSEKBXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.4224992838266258);
    msg.setSource(42509U);
    msg.setSourceEntity(103U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.5052464304846902;
    msg.lon = 0.4455981791599056;
    msg.z = 0.7576450351638965;
    msg.z_units = 22U;
    msg.radius = 0.08216247383180286;
    msg.duration = 19276U;
    msg.speed = 0.19212430511728606;
    msg.speed_units = 69U;
    msg.popup_period = 54189U;
    msg.popup_duration = 30904U;
    msg.flags = 111U;
    msg.custom.assign("TOPULIQWFHPKZZMBFHNCRZNKEHJVJBARNGWEOHLTKILMRFWCEGLPQYJNVFORDNOIVPROGBZKRAQGJTJGAZEXSRDTSKUDLBQAHMTZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.8543251325435984);
    msg.setSource(52471U);
    msg.setSourceEntity(89U);
    msg.setDestination(62188U);
    msg.setDestinationEntity(254U);
    msg.timeout = 27532U;
    msg.flags = 65U;
    msg.lat = 0.4693697576881779;
    msg.lon = 0.4133946424306313;
    msg.start_z = 0.2642017257405347;
    msg.start_z_units = 248U;
    msg.end_z = 0.04841452035307381;
    msg.end_z_units = 127U;
    msg.radius = 0.8724388364696133;
    msg.speed = 0.624784500230958;
    msg.speed_units = 162U;
    msg.custom.assign("ZSAZBHGKELOVOVHQQLAZPRVQGWBOKCRFHIRMHSCBCBQSNLEOJUJLGEUAPWFJESLKHTTXVPTOMDDSIKEVPTNTIPNQMRXHQYWYWWMZFSYGVTFFRQJCZQXLDUHMYZODXHJWBRDYAGWKUKJCMYXEVDTWLHDDSABJUAPCIYUFGBRRTQIIKMUKEEXWNBMAZJINXFRUJLCJKZVTAHYDPCNLNBFNSRWNEZYUFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.5037946272881106);
    msg.setSource(46230U);
    msg.setSourceEntity(157U);
    msg.setDestination(15662U);
    msg.setDestinationEntity(197U);
    msg.timeout = 60829U;
    msg.flags = 141U;
    msg.lat = 0.9880252843470189;
    msg.lon = 0.52689663968869;
    msg.start_z = 0.9119730791763276;
    msg.start_z_units = 145U;
    msg.end_z = 0.2681775682443156;
    msg.end_z_units = 23U;
    msg.radius = 0.911486337996122;
    msg.speed = 0.025221580692035506;
    msg.speed_units = 251U;
    msg.custom.assign("QAOUJYVUXSCRIYOUERZHJOVUGVCYSGDCLPZNQNTVFSBHZICEQBKGTIKXZWNHMJYXXNVLGPMWPFXULZGIXFERIZKKTAQNBBQTAHHJPNYKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.9953899493735368);
    msg.setSource(26462U);
    msg.setSourceEntity(45U);
    msg.setDestination(50143U);
    msg.setDestinationEntity(145U);
    msg.timeout = 33225U;
    msg.flags = 54U;
    msg.lat = 0.6574966490016682;
    msg.lon = 0.5339296937685614;
    msg.start_z = 0.34624545215477887;
    msg.start_z_units = 239U;
    msg.end_z = 0.2083634842524027;
    msg.end_z_units = 130U;
    msg.radius = 0.5104395162695231;
    msg.speed = 0.03570511690296485;
    msg.speed_units = 1U;
    msg.custom.assign("EJPUUSWRDUYEJUJPLHIVDKYOOFRJWXODWOVIHLPKGKAMRHBKEGHRTRLPNGGTZRQBXKUXCKSQQPNNLZJMWPQOTATIBQTUKXAHZITAINQBVDMYVQESWSZVBFBVZJOTJWXFVACVSYGSYHSXLCGWMFMICFEMUJCUZGZKHNIYFDJJTSXRLHYAUCHTOPPBLLCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.09038662466337044);
    msg.setSource(57260U);
    msg.setSourceEntity(177U);
    msg.setDestination(24082U);
    msg.setDestinationEntity(71U);
    msg.timeout = 22918U;
    msg.lat = 0.2022950378935089;
    msg.lon = 0.12089044108406155;
    msg.z = 0.7869821901962181;
    msg.z_units = 202U;
    msg.speed = 0.4324195315344911;
    msg.speed_units = 102U;
    msg.custom.assign("UNSLBHOVRXBASDLRMPVZNVOIJXKZWFFBZRMTKQCTOZYPUSITRDEJPYKYUUWXMRQQYHCSIOPFAWJYDXGKMJOXDFLXWYCQLZAHMZFRWEAGFABNDKTONCLJEFNRSCVMQTLIAWGTQMXZDEYKVEUPIRGGLNNTYAQJHPIESOJOVOHQBPAUBKEFXCLABWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.6486146198468201);
    msg.setSource(29120U);
    msg.setSourceEntity(17U);
    msg.setDestination(17467U);
    msg.setDestinationEntity(164U);
    msg.timeout = 36656U;
    msg.lat = 0.5905829792729862;
    msg.lon = 0.2088732325235939;
    msg.z = 0.29699844912952944;
    msg.z_units = 3U;
    msg.speed = 0.27459996526511465;
    msg.speed_units = 39U;
    msg.custom.assign("AYOGBOVQJKVEQDXETYMZASLCWCGKZDQBUJMCXUPAUPZRHSIYXNRBATKFFQGSJZJJMQPAXIXERBYIQLDYBAWAWPKPOJYEXPVKJZFZUOLLEIKRCJGIPEXVDVDWMWZKQLOYUSTJZDVNMTNNRQMIXNTIGKPZHRYFHMBHWMHRILWNTGPGOGNPXUCNFNUTSEBISYTEBHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.789654357287396);
    msg.setSource(64004U);
    msg.setSourceEntity(16U);
    msg.setDestination(20712U);
    msg.setDestinationEntity(188U);
    msg.timeout = 1420U;
    msg.lat = 0.5876524067198482;
    msg.lon = 0.005706818537135505;
    msg.z = 0.26680819079382634;
    msg.z_units = 63U;
    msg.speed = 0.3475475566825196;
    msg.speed_units = 35U;
    msg.custom.assign("ZTRLXADHEQDWZSIRZMOBWBBCCKUFIUSOSSWEMNRRIYZEOJHUYJXJZEFQNXYIOSCMTVQYQCMGUKQYZAKNCRIMTNOKTPANUGRRVYJDPWKGTGNQYGTFHSJUFHKEPOPDEHHAVSURBJZGJPOXTMDMWUWPXBJJDBHSBSQEEXWSGHVNIMIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.47886168984683497);
    msg.setSource(47405U);
    msg.setSourceEntity(43U);
    msg.setDestination(58556U);
    msg.setDestinationEntity(197U);
    msg.x = 0.6762260972055139;
    msg.y = 0.25958935759655044;
    msg.z = 0.3077631695345514;
    msg.t = 0.9965209798754059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.26530141452382494);
    msg.setSource(23054U);
    msg.setSourceEntity(42U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(19U);
    msg.x = 0.5312065903027722;
    msg.y = 0.7028831208684319;
    msg.z = 0.9360789097146957;
    msg.t = 0.09194816918845616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.6003797530304238);
    msg.setSource(34603U);
    msg.setSourceEntity(175U);
    msg.setDestination(25058U);
    msg.setDestinationEntity(227U);
    msg.x = 0.45633685397220247;
    msg.y = 0.4026306949934675;
    msg.z = 0.5925570240235775;
    msg.t = 0.42730613510051463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.7021725036257742);
    msg.setSource(60996U);
    msg.setSourceEntity(216U);
    msg.setDestination(31667U);
    msg.setDestinationEntity(4U);
    msg.timeout = 35725U;
    msg.name.assign("MEWXBDPOAJPJBUTZNOKWWVAPIMYPJQHRQHYWXMTVANLKWCBLDFKTELUFWHNNCEQUEVSBSRYTRVZOCGJZXB");
    msg.custom.assign("IBRAHWOAQKPALJOIZHUDGKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.27840022732220304);
    msg.setSource(12904U);
    msg.setSourceEntity(66U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(172U);
    msg.timeout = 56692U;
    msg.name.assign("UTYARBCEZWPGPMOWABJCVJGZMVENVTJVPNGMVBRHAXHUHWPSJWCOKRDYXSYJYFCTSKBGFYNCZWUHCTFHDYYKKSNHBBDPQHDTWYFHIVERLDQIHPDUQELANSFKQJMJGZDWZIVPOWVXAEJHQUSJXGNMFXMLLKALMOLGRTGUSLANNZTTWFPIIVWCDLRBCDQ");
    msg.custom.assign("YZIQGPBBPFLQQWRJANHTCWGXFUNDLAQPOUVPASVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.049134323838557425);
    msg.setSource(43725U);
    msg.setSourceEntity(211U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(236U);
    msg.timeout = 41421U;
    msg.name.assign("BIZVSSSHSEWCGVDXHRONNNIUROQJDFLAJRDTJVZNODCQRUNKQJANAINMWKSDVEFXMRWHZJHBQYUCCYDJPIXKUZBAYFZGCFVVAMDYEPQWWEXTGAGYQELCUINVYTLCNOBMAALK");
    msg.custom.assign("NSMUCDTGGZOTCBCBHRBNICCAAUVEXXSOVFF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.22268059558031517);
    msg.setSource(13775U);
    msg.setSourceEntity(251U);
    msg.setDestination(19872U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.8583370684184352;
    msg.lon = 0.7307245161121888;
    msg.z = 0.5992875128594949;
    msg.z_units = 152U;
    msg.speed = 0.7058602148942219;
    msg.speed_units = 234U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.08467156666967668;
    tmp_msg_0.y = 0.7920384503396609;
    tmp_msg_0.z = 0.2433213143602545;
    tmp_msg_0.t = 0.6589652235109347;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 48856U;
    tmp_msg_1.off_x = 0.7028292267039112;
    tmp_msg_1.off_y = 0.9257330575033483;
    tmp_msg_1.off_z = 0.17156213293676037;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8755916982987386;
    msg.custom.assign("KNYHHYVYPVEAPZFDMTWESAUYCAUBBIMDFOASBRRFUEWCZQPPCJGMGZRCPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.2187936637688418);
    msg.setSource(54597U);
    msg.setSourceEntity(209U);
    msg.setDestination(26581U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.578456340956161;
    msg.lon = 0.12994464436937914;
    msg.z = 0.2116750038954417;
    msg.z_units = 15U;
    msg.speed = 0.017544935213409163;
    msg.speed_units = 156U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24860U;
    tmp_msg_0.off_x = 0.6877962568488267;
    tmp_msg_0.off_y = 0.2860342671217594;
    tmp_msg_0.off_z = 0.44250139600160676;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.03860659702426139;
    msg.custom.assign("KXCCQBTDYGPLESUQGOAGCPZQSXYXKNNVSLLBUPWDQDWPYWAZEUQCYFEEGTQLLQODGZCHNPGKGHERCOKMIBYHQBNUMYIOBNZMRXEJHMJZFZFRLMAEWZRGSEDMTDSSPSVTRHTJIUOIYPZKBDIFAWBVNNKUQECLVZWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.28945740233157036);
    msg.setSource(30379U);
    msg.setSourceEntity(119U);
    msg.setDestination(19075U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.22326487884305302;
    msg.lon = 0.0998712091213807;
    msg.z = 0.8272917614934279;
    msg.z_units = 162U;
    msg.speed = 0.14146774469270407;
    msg.speed_units = 185U;
    msg.start_time = 0.07441849396809364;
    msg.custom.assign("TFUUPEGMJNGGDYRWNLULHZQOXNWTBCUNKKEDIUOCUZXCPRYCZTRKDJLIWYEJIDEPTBOXRLAZYSZAGXUTFWFVBKZEGYYLBXEYIODCAPWDCNQVMTFKAAJUSGEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.8137443746268518);
    msg.setSource(34569U);
    msg.setSourceEntity(139U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(121U);
    msg.vid = 26628U;
    msg.off_x = 0.24459668632983766;
    msg.off_y = 0.9056140839419237;
    msg.off_z = 0.83992709907795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.0887589422724564);
    msg.setSource(44730U);
    msg.setSourceEntity(7U);
    msg.setDestination(1627U);
    msg.setDestinationEntity(58U);
    msg.vid = 48709U;
    msg.off_x = 0.17696742254387343;
    msg.off_y = 0.1527838825688279;
    msg.off_z = 0.7310608699839497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.32177477839346247);
    msg.setSource(48150U);
    msg.setSourceEntity(227U);
    msg.setDestination(24659U);
    msg.setDestinationEntity(232U);
    msg.vid = 33283U;
    msg.off_x = 0.107253896961236;
    msg.off_y = 0.5394221166007309;
    msg.off_z = 0.804898392170228;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.8061981458187689);
    msg.setSource(58430U);
    msg.setSourceEntity(94U);
    msg.setDestination(14510U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.805225479652936);
    msg.setSource(49756U);
    msg.setSourceEntity(192U);
    msg.setDestination(29455U);
    msg.setDestinationEntity(128U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.9042033720187256);
    msg.setSource(20256U);
    msg.setSourceEntity(220U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(117U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.40126617462513803);
    msg.setSource(26593U);
    msg.setSourceEntity(207U);
    msg.setDestination(31554U);
    msg.setDestinationEntity(10U);
    msg.mid = 53992U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.2157360352953337);
    msg.setSource(38911U);
    msg.setSourceEntity(148U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(246U);
    msg.mid = 45499U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.49300211531974447);
    msg.setSource(42377U);
    msg.setSourceEntity(43U);
    msg.setDestination(9934U);
    msg.setDestinationEntity(139U);
    msg.mid = 46497U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.22767110840235238);
    msg.setSource(28208U);
    msg.setSourceEntity(77U);
    msg.setDestination(32027U);
    msg.setDestinationEntity(80U);
    msg.state = 220U;
    msg.eta = 19449U;
    msg.info.assign("AXKORBYUJEAZGFVHEPHCOHKWZBQOGGJMFOUTEISCXVYZYDQNANIMFQRKWEPUMGFYXUNVCUXMTKHCWNMPAEOQBUVDIEWYKLSUPMRNSGRPIJXPDHKYOZRTNGTNOOLYLSLAHVBFVVTADVFUQUFLTIECBHTCRTRWJZIIFKCOWRDYNJCFSNYJELQVNZWGLKMCBLPIBQCDMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.6385429906448945);
    msg.setSource(12838U);
    msg.setSourceEntity(71U);
    msg.setDestination(47833U);
    msg.setDestinationEntity(220U);
    msg.state = 99U;
    msg.eta = 38048U;
    msg.info.assign("HPRCNYSFRZUHDQYYNYHBQZTHRYWWUCOMSIHXMJVFVUDHNCGTKBTAKHGPBGVBUPLJZYEBZKKBIGVXKITIUXLCJFMUAQXKSLORZQASVEWIOXPVJWJTHBCXVVNFXXIDGGSGAYEQFOKBJRGAMWMNHJIATMLFTMXMLOAQLNCROMZHYKRQWSDNNKZUQEOJYEEPQEUZPSLZOODALUDFBRBPYWCSPATCUCSTNGEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.8373570476027549);
    msg.setSource(47589U);
    msg.setSourceEntity(254U);
    msg.setDestination(57051U);
    msg.setDestinationEntity(198U);
    msg.state = 76U;
    msg.eta = 36782U;
    msg.info.assign("KEGPNXCGGXUDWDKCCITPPGFNOHIXKDHKNSOLTTWOFEVUBZFQVLQUBAEQNGMDNZOJAGPRSOLUMHPMMWCFRNLDVTRFAJYNUDWWZABBAQUDYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.02253070046792227);
    msg.setSource(10380U);
    msg.setSourceEntity(170U);
    msg.setDestination(16989U);
    msg.setDestinationEntity(17U);
    msg.system = 32129U;
    msg.duration = 38536U;
    msg.speed = 0.5358448972315898;
    msg.speed_units = 122U;
    msg.x = 0.21300601865745472;
    msg.y = 0.9559382836175351;
    msg.z = 0.40029548500634926;
    msg.z_units = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.03596603691781186);
    msg.setSource(7053U);
    msg.setSourceEntity(102U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(148U);
    msg.system = 7375U;
    msg.duration = 47888U;
    msg.speed = 0.7334897613279097;
    msg.speed_units = 56U;
    msg.x = 0.33644098242208786;
    msg.y = 0.7252419857807402;
    msg.z = 0.5465582901877544;
    msg.z_units = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.3407120261860541);
    msg.setSource(34506U);
    msg.setSourceEntity(129U);
    msg.setDestination(58076U);
    msg.setDestinationEntity(91U);
    msg.system = 15940U;
    msg.duration = 36422U;
    msg.speed = 0.5221761091040796;
    msg.speed_units = 21U;
    msg.x = 0.22484829194168465;
    msg.y = 0.8793250036272132;
    msg.z = 0.4075260242106403;
    msg.z_units = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.43638531157483607);
    msg.setSource(1880U);
    msg.setSourceEntity(183U);
    msg.setDestination(4345U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.6160761610644189;
    msg.lon = 0.6466558841777306;
    msg.speed = 0.5585956026643193;
    msg.speed_units = 248U;
    msg.duration = 63227U;
    msg.sys_a = 12606U;
    msg.sys_b = 11905U;
    msg.move_threshold = 0.5961793525450723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.34533763183101274);
    msg.setSource(44141U);
    msg.setSourceEntity(29U);
    msg.setDestination(33156U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.5362435395648263;
    msg.lon = 0.19271011994508924;
    msg.speed = 0.5805191396326824;
    msg.speed_units = 56U;
    msg.duration = 8737U;
    msg.sys_a = 10492U;
    msg.sys_b = 53300U;
    msg.move_threshold = 0.42350448152491016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.9312311007546514);
    msg.setSource(25748U);
    msg.setSourceEntity(152U);
    msg.setDestination(44509U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.8947648762397029;
    msg.lon = 0.2701218068205026;
    msg.speed = 0.6323576124014941;
    msg.speed_units = 186U;
    msg.duration = 12671U;
    msg.sys_a = 43076U;
    msg.sys_b = 1002U;
    msg.move_threshold = 0.4428375705904932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.9079709309089643);
    msg.setSource(33967U);
    msg.setSourceEntity(131U);
    msg.setDestination(11373U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.3811085290554157;
    msg.lon = 0.07023950379062105;
    msg.z = 0.31667058093995815;
    msg.z_units = 131U;
    msg.speed = 0.2007092932465806;
    msg.speed_units = 59U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.28622148269799697;
    tmp_msg_0.lon = 0.5845825585002303;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YBEAYKMJBYEIWESAQZLCGGOISYSYZRQERFPHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.6998755347129347);
    msg.setSource(53628U);
    msg.setSourceEntity(39U);
    msg.setDestination(23403U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.7629069048379755;
    msg.lon = 0.1367128011329959;
    msg.z = 0.22552128919256942;
    msg.z_units = 162U;
    msg.speed = 0.37110188492790575;
    msg.speed_units = 243U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.962416815722734;
    tmp_msg_0.lon = 0.5254757775307897;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WGFXJSFSKYUVKXEBKYOSVNBERZYMQRPOHIGOLRWDECYBMXBQRVAHXALYYAJJPCPZPDWQTQMEVFOIIMXLKCKKFIOULQILACLTMEEPFQBLMTOFGMNGZDZKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.6236540428068166);
    msg.setSource(50155U);
    msg.setSourceEntity(39U);
    msg.setDestination(54238U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.018899344685795683;
    msg.lon = 0.8486508516322645;
    msg.z = 0.6661258950258732;
    msg.z_units = 153U;
    msg.speed = 0.5108368174393806;
    msg.speed_units = 77U;
    msg.custom.assign("MPTNUOAIUGRZRDKZYJNDRRJSPYRFDBHMLVYBVLTNUXFERGFQWGBSIYFLSBFEAWOCDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.3825687548038641);
    msg.setSource(27868U);
    msg.setSourceEntity(111U);
    msg.setDestination(26058U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.11361969727238241;
    msg.lon = 0.3581220674245641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.09681756909395012);
    msg.setSource(36199U);
    msg.setSourceEntity(34U);
    msg.setDestination(1962U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.1353314896591843;
    msg.lon = 0.07047575738035128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.5191816905951563);
    msg.setSource(56303U);
    msg.setSourceEntity(146U);
    msg.setDestination(52805U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.4596662315273541;
    msg.lon = 0.01703286950364946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.7826310554883078);
    msg.setSource(61880U);
    msg.setSourceEntity(69U);
    msg.setDestination(65299U);
    msg.setDestinationEntity(132U);
    msg.timeout = 29078U;
    msg.lat = 0.8870776976795651;
    msg.lon = 0.9621450820901501;
    msg.z = 0.7265546987632587;
    msg.z_units = 113U;
    msg.pitch = 0.5621721651530874;
    msg.amplitude = 0.6966364339317724;
    msg.duration = 7987U;
    msg.speed = 0.49241854524113626;
    msg.speed_units = 61U;
    msg.radius = 0.011541187080231441;
    msg.direction = 121U;
    msg.custom.assign("UXALZUAPCGAYEOTIMLBRHKZETZCFNHTKRHSOMNLBFNWVWI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.9060716389213694);
    msg.setSource(56384U);
    msg.setSourceEntity(59U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(42U);
    msg.timeout = 29210U;
    msg.lat = 0.4494046260941845;
    msg.lon = 0.7779987871810078;
    msg.z = 0.3679419902971993;
    msg.z_units = 199U;
    msg.pitch = 0.16134866537460124;
    msg.amplitude = 0.7578061842213095;
    msg.duration = 4284U;
    msg.speed = 0.3115835911052436;
    msg.speed_units = 85U;
    msg.radius = 0.35537787687352174;
    msg.direction = 128U;
    msg.custom.assign("OMLPWFLIKYGSAORESXHTRWWHWZRPCBXSXPVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.5175510883514071);
    msg.setSource(65213U);
    msg.setSourceEntity(138U);
    msg.setDestination(20284U);
    msg.setDestinationEntity(175U);
    msg.timeout = 51081U;
    msg.lat = 0.6762365639375711;
    msg.lon = 0.30901799667075514;
    msg.z = 0.31781074250829033;
    msg.z_units = 196U;
    msg.pitch = 0.06865222968454443;
    msg.amplitude = 0.010252722175829065;
    msg.duration = 7585U;
    msg.speed = 0.37810566497225995;
    msg.speed_units = 62U;
    msg.radius = 0.0646649044442189;
    msg.direction = 231U;
    msg.custom.assign("KQPBBYUZTPUGQCEGICXJDRHCUVNTOTFPUJAKUFNGEYKJDEWNFHJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.04968649041919393);
    msg.setSource(611U);
    msg.setSourceEntity(253U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(133U);
    msg.formation_name.assign("WMIPKJCAIUYTETLXGMMOGXQCEWFBGNKYQRTRAWUVTZSBSCPPVGLFWVUONUGSEURFOHXRUQIRPKNEKQMAMIORTLUEUIDOJAGGNUDBJHRKBCDSTPXZDOXQKXOGDXAEEQDVLXLOGQZVMJISCSVNHJWYVJZKHYQPARLTHSHFCOIJOEWTIH");
    msg.reference_frame = 35U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5670U;
    tmp_msg_0.off_x = 0.4730283343614349;
    tmp_msg_0.off_y = 0.7245787157432956;
    tmp_msg_0.off_z = 0.24156089406242875;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WIMUDHLDAKEWWSYOMUDENNOESRQGCRDMFXAOAPYYWTLNNFJIDQTLINW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.756428396930025);
    msg.setSource(28751U);
    msg.setSourceEntity(195U);
    msg.setDestination(58164U);
    msg.setDestinationEntity(12U);
    msg.formation_name.assign("XJURQTVPVBNHZZJBIDYRIIRRPTMTEHHUEETQYEHFXYAAOJUVJLWUXVKWBWRTQUGNOKAQCDQCGOLAFOUPNOMFKFPIJHIPDPCLUELPGRMMETCDLWQGYRTYVGCEPGTMGWXVZFCBEBXWCVXWFDQABNBTSYOGDJICJKATLMWMMONCVXXXNZNQVLYYDSVSBSSOURPUUNMZOSAKHSPKIKAMZJZHD");
    msg.reference_frame = 3U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31674U;
    tmp_msg_0.off_x = 0.5633814701219827;
    tmp_msg_0.off_y = 0.17517208252599936;
    tmp_msg_0.off_z = 0.9213516656634767;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JMJAHCCDKIFXOAGOMITICTYBAFQPKJGLOKRVCMILLSBHMSYJWQYWAAYCXUCYDTHTKHVSOFRFVVRFGBOMLNEQXBOMRIIAJNRKTUNPWIWCPXYQHZONLXAUGUYXDXUZPMJVRTDFPJQGHDLZJQBGQPECPLPPTWDBCNXFXKYHXEQDMDEILZGADEWUFYNQBSEQVSFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.36776456547419345);
    msg.setSource(19571U);
    msg.setSourceEntity(189U);
    msg.setDestination(36383U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("QHLFEHIRNONCPBPHEBTTVNPNZRSXUVMGBMZIIZHACQVDTRYWEAAFTVOHHKWCJWRXRHSZUMJWVICLYAZIORSWITJFQWGFOJMKQT");
    msg.reference_frame = 157U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41150U;
    tmp_msg_0.off_x = 0.6068315992687502;
    tmp_msg_0.off_y = 0.9444572162904403;
    tmp_msg_0.off_z = 0.6406971993645711;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CRHEJTJOTVTAPNTCRSXEIDRFKISQYHQHFVJRYZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.11973897084010621);
    msg.setSource(55145U);
    msg.setSourceEntity(246U);
    msg.setDestination(13403U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("TDUKLDDMJWWLRIFVRONGHVOVZWZYQMINVUOBFNBPJXOVUXAEWCRQQTSTPXLAJUSXTLGSZJTEHQIMQCNSQEGTNKSSMDBYMSCEYUUHYEPPWHFPZXRTE");
    msg.formation_name.assign("NBAEOVQJDAHIBHGQNBVSKTYLCTDINZJUAMWMVJYSFZVSEWAXFGHOZAZ");
    msg.plan_id.assign("AUOYFGZHPJSOKXPZTFZBEIGTAAEYBVRCBAWNWDCOIDDSHGJSSYGCNXUHIXGFINJLIEPXLDCBBSQOPEBCYOCGCETUDTTHFFZIEQYYVJXWFEZYYFWUDLQVVQCOODHRNRLGMRIWBMRXONLUVWNCFMJMLSWJKAWFXSJHGPKYZQJMTWFBDRBHLJEAZPMKSN");
    msg.description.assign("OGABTLOCMUEMQYBSUEZWOZDOGUYIZNFSRWLLWVYYIVARITSRAVVGKJBYQYGFYXUKYHWWQHZVMHFHXNQKRDAVFINBXQEKKLRUEBIKIJPENXDTHDZPXTPGAUXVMMMCIXLZIIBKPSDEJVFJQNOMJVENLNEBHJFRFCDPULASGOQFATJBQVCHTPWAJLDPHMCTCKZPEWORDZMDJERCPSRRDNOJAQGYTBZZWUXLWBOHQSSINMCNTCTGCFXGSOFWL");
    msg.leader_speed = 0.9025649761178884;
    msg.leader_bank_lim = 0.1605998413283447;
    msg.pos_sim_err_lim = 0.2954837052185654;
    msg.pos_sim_err_wrn = 0.1310324281619456;
    msg.pos_sim_err_timeout = 48185U;
    msg.converg_max = 0.7787987457684147;
    msg.converg_timeout = 33771U;
    msg.comms_timeout = 23436U;
    msg.turb_lim = 0.5738975457884938;
    msg.custom.assign("EZTFVOXYFMOJGCCJQAZOIKLRBQNOFSLEYQBQRZHGANQFHWBYFSYXVGPCCPHKTBNMNMOCODGBQUEHIVVRETSXKMUDOHKDVSRLQCLQDTLHDWJIATUTURJQVYDWLYLRNSMXJATDIPXFPRNXGKSFHKCDPWFIPMPZICROGIMLXPYGANEMRBESSHYGCKTXKPUAJYXAHAUEGFXWOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.0819464218611613);
    msg.setSource(31818U);
    msg.setSourceEntity(5U);
    msg.setDestination(31670U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("DXVQVGKMRIGUSWBYAZAXLNZCPMYHCKPAHPOIZVQNKJBKPCOCYDGLTWFDZPNQZFAIQOHOVBXRHEWFOCTIIYILJHCUTGSXZMDAJMEHLRCGUBJIBRGNCVADZVKQJWOVFSYMYSDSPKWJJULBUBATEUUPF");
    msg.formation_name.assign("WJGTZHSGISEALUVVYJCBNLEBGHOOXBRWCYOVIVSZFGAQTWNJGHETTXBOSWWYMEVKRKMJZYHRVOFDTUNCXGDJFWJFHQPIDEYNL");
    msg.plan_id.assign("ETLHFZMYRSRDUIOMOAJGIFIMWJCVJUVAZKWORKDXPVPCOPIADQPGTYA");
    msg.description.assign("XZFXMDBATLIGPCPOLJQARYDDTSUBKGDEHILTMRWKRUKOYWRSRUKRPKGWUAUKZRLCDIEWZ");
    msg.leader_speed = 0.5146421109534993;
    msg.leader_bank_lim = 0.0401592371442836;
    msg.pos_sim_err_lim = 0.5982628402122556;
    msg.pos_sim_err_wrn = 0.855771621924898;
    msg.pos_sim_err_timeout = 6473U;
    msg.converg_max = 0.8739617378289474;
    msg.converg_timeout = 62243U;
    msg.comms_timeout = 3662U;
    msg.turb_lim = 0.31906240532932395;
    msg.custom.assign("TVRLULXXMATHXPFHVSJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.7206217868147097);
    msg.setSource(30316U);
    msg.setSourceEntity(96U);
    msg.setDestination(11615U);
    msg.setDestinationEntity(15U);
    msg.group_name.assign("MNJCNDRNYTBCYGJLXSXLWHJLPXHALQFZXFYPQSYQRNBJWAOIATYGVHTNMHESXTKZHUFKJNKI");
    msg.formation_name.assign("LSBPWOOORQYGZBMJVJOFXVCBSXUWTRJGIPIETBLTPHQHQGANHDKXGKDPADIYFDNQIWFYQYQWWRBVXDVLXZYULEVQEHQINWCXSPJDKWPUCEAFEJAPBMRIUWFZMFSUYAMOYITJMRCENSZRMAHVLTLSAGZOAACTHMMKYQOJVJQLDUSPVNFLNCKGDHBBDTEYXONUYNXAWUKZHGNIZTHEMFBUCLZKT");
    msg.plan_id.assign("DMYSBXZVLEFHYIPRSLYIPFRPHQCXNNBFXLOFKIECUVLVNUPQWRJVZORTJODNJWVLXAKNZAMQLSNRGIBVKBTEKVEACUNBAOGIXYQCOIDTMSSHMWQOTJBWYKZYQFSGROHZDASOKJSGGGAIOHKEFBLUZPCHHXZENPTDWMITULMUAYUWEWCUDUNGLWXRBHCMFOFTS");
    msg.description.assign("VYRSUBVSGQQHOHRJYTOVSZUPQSDXFAPMFJIJKCIOMSXFOKHWBMZGAZVKLBDXWGBXPBHYAFJNLHSPTIAFHCXCEEHIDTEVIIEYPMLNNRTXDGIUFBARRWNLQULZIWDMISEIQFKWNYRNWFKKGBUZOECTVTPAORDVNEOLKBUCVKHGCTXWOQYLPJGBAVFRMEZRJGDTCGNDCKGJRUYPQUJEZCVMYEYXOTAUZSKPZTAPZUSDMDHMHXWJYWLQXOQQ");
    msg.leader_speed = 0.13872287197952016;
    msg.leader_bank_lim = 0.7979708811065083;
    msg.pos_sim_err_lim = 0.4152140080821003;
    msg.pos_sim_err_wrn = 0.17476286685171882;
    msg.pos_sim_err_timeout = 19184U;
    msg.converg_max = 0.34719656696570467;
    msg.converg_timeout = 41681U;
    msg.comms_timeout = 18493U;
    msg.turb_lim = 0.5621841347776173;
    msg.custom.assign("HIJEQMBRKNLISWUGMTRDDLSUYXCYLTRUWFAOFZRKUALKYCWJRQEGEJHVYLWQPFPBXHIECKNHCVBHVJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.7617727321564325);
    msg.setSource(47250U);
    msg.setSourceEntity(20U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(89U);
    msg.control_src = 37008U;
    msg.control_ent = 22U;
    msg.timeout = 0.9321002409265791;
    msg.loiter_radius = 0.49139959760683716;
    msg.altitude_interval = 0.010421404098256093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.7282632411213965);
    msg.setSource(64545U);
    msg.setSourceEntity(226U);
    msg.setDestination(44543U);
    msg.setDestinationEntity(66U);
    msg.control_src = 19792U;
    msg.control_ent = 150U;
    msg.timeout = 0.16824573558014644;
    msg.loiter_radius = 0.09185041447621156;
    msg.altitude_interval = 0.7912746910236909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.10822652542422329);
    msg.setSource(61U);
    msg.setSourceEntity(140U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(77U);
    msg.control_src = 62693U;
    msg.control_ent = 183U;
    msg.timeout = 0.44194837634482254;
    msg.loiter_radius = 0.7765850466324962;
    msg.altitude_interval = 0.5160806869489029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.23766839882015822);
    msg.setSource(47508U);
    msg.setSourceEntity(246U);
    msg.setDestination(49430U);
    msg.setDestinationEntity(175U);
    msg.flags = 99U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6057075724103055;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5178288719234673;
    tmp_msg_1.z_units = 172U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.05679903658684737;
    msg.lon = 0.07969101497952069;
    msg.radius = 0.6056260123458044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.746584905583444);
    msg.setSource(41354U);
    msg.setSourceEntity(184U);
    msg.setDestination(14616U);
    msg.setDestinationEntity(165U);
    msg.flags = 48U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8716340138224522;
    tmp_msg_0.speed_units = 179U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2578529437741043;
    tmp_msg_1.z_units = 249U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0634792705888545;
    msg.lon = 0.2511671169755152;
    msg.radius = 0.96510214405059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.009091808768776133);
    msg.setSource(39590U);
    msg.setSourceEntity(130U);
    msg.setDestination(1368U);
    msg.setDestinationEntity(252U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3079722670841515;
    tmp_msg_0.speed_units = 135U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8678105058703413;
    tmp_msg_1.z_units = 160U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.21054115388375882;
    msg.lon = 0.3977489708978459;
    msg.radius = 0.7476348730859854;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.7387717707037733);
    msg.setSource(64078U);
    msg.setSourceEntity(29U);
    msg.setDestination(54420U);
    msg.setDestinationEntity(169U);
    msg.control_src = 27972U;
    msg.control_ent = 32U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 203U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.16768536077525042;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8107522850403801;
    tmp_tmp_msg_0_1.z_units = 130U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8252918186092608;
    tmp_msg_0.lon = 0.08847172486844335;
    tmp_msg_0.radius = 0.35807984463495257;
    msg.reference.set(tmp_msg_0);
    msg.state = 89U;
    msg.proximity = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.8742677151789929);
    msg.setSource(46656U);
    msg.setSourceEntity(124U);
    msg.setDestination(16543U);
    msg.setDestinationEntity(189U);
    msg.control_src = 62941U;
    msg.control_ent = 135U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 5U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.917790627971698;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6507970122586947;
    tmp_tmp_msg_0_1.z_units = 228U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4596812505247647;
    tmp_msg_0.lon = 0.7719580408525081;
    tmp_msg_0.radius = 0.3669678757989614;
    msg.reference.set(tmp_msg_0);
    msg.state = 175U;
    msg.proximity = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.8413959896208432);
    msg.setSource(720U);
    msg.setSourceEntity(240U);
    msg.setDestination(9343U);
    msg.setDestinationEntity(57U);
    msg.control_src = 65285U;
    msg.control_ent = 19U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.40275893759111825;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.34217770204843034;
    tmp_tmp_msg_0_1.z_units = 226U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2017891002832547;
    tmp_msg_0.lon = 0.7869675096386164;
    tmp_msg_0.radius = 0.4146173650610463;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.3138853784230643);
    msg.setSource(32507U);
    msg.setSourceEntity(55U);
    msg.setDestination(37827U);
    msg.setDestinationEntity(144U);
    msg.ax_cmd = 0.32351945174153274;
    msg.ay_cmd = 0.29991550239926523;
    msg.az_cmd = 0.5848039237946658;
    msg.ax_des = 0.14680007483626312;
    msg.ay_des = 0.9072354587050625;
    msg.az_des = 0.4961741528507896;
    msg.virt_err_x = 0.16047406997356506;
    msg.virt_err_y = 0.10718894732275652;
    msg.virt_err_z = 0.6449427759193841;
    msg.surf_fdbk_x = 0.19402776899604324;
    msg.surf_fdbk_y = 0.8957280233229643;
    msg.surf_fdbk_z = 0.13464428934055517;
    msg.surf_unkn_x = 0.03969757415107267;
    msg.surf_unkn_y = 0.4042239153804219;
    msg.surf_unkn_z = 0.5469624930715205;
    msg.ss_x = 0.6026804498706494;
    msg.ss_y = 0.2260634977122259;
    msg.ss_z = 0.3078517146147798;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GUKJDLYYRXEVIQHHWQXVTSFKDANDPXGLGFSJOBXNURJCOIRFSIUKIRKOLGUXKODYJHUILAELWDNEWQHFGBOMBWTVFBPZTZPXCTOUZYLMMHGZWCCVIPRTFSJJJCVAOFIIENKQNNHQYPSNGAAECNZLKAGXHZBAEXMBRWIHXSJNLBAYRBKQMGZWCREVTYKTWX");
    tmp_msg_0.dist = 0.740025394421189;
    tmp_msg_0.err = 0.5068940492595431;
    tmp_msg_0.ctrl_imp = 0.08002514706316932;
    tmp_msg_0.rel_dir_x = 0.518860746585902;
    tmp_msg_0.rel_dir_y = 0.4864505067501017;
    tmp_msg_0.rel_dir_z = 0.5666246654752924;
    tmp_msg_0.err_x = 0.8937249854622704;
    tmp_msg_0.err_y = 0.7914322093917385;
    tmp_msg_0.err_z = 0.6342274746413957;
    tmp_msg_0.rf_err_x = 0.6939627985196414;
    tmp_msg_0.rf_err_y = 0.280825095976599;
    tmp_msg_0.rf_err_z = 0.685565602922646;
    tmp_msg_0.rf_err_vx = 0.11220232554790988;
    tmp_msg_0.rf_err_vy = 0.04758041816582437;
    tmp_msg_0.rf_err_vz = 0.41049257929282557;
    tmp_msg_0.ss_x = 0.16700818491356384;
    tmp_msg_0.ss_y = 0.16781802741962504;
    tmp_msg_0.ss_z = 0.6421678256003591;
    tmp_msg_0.virt_err_x = 0.7884640112792033;
    tmp_msg_0.virt_err_y = 0.301869538017554;
    tmp_msg_0.virt_err_z = 0.294748542552583;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.7712619291627938);
    msg.setSource(41208U);
    msg.setSourceEntity(135U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(4U);
    msg.ax_cmd = 0.8169092573206389;
    msg.ay_cmd = 0.4811229103298511;
    msg.az_cmd = 0.6541472809795509;
    msg.ax_des = 0.6952505522138106;
    msg.ay_des = 0.5468338019424985;
    msg.az_des = 0.9082982810870368;
    msg.virt_err_x = 0.3953311336612203;
    msg.virt_err_y = 0.8399017437495737;
    msg.virt_err_z = 0.10306484206988797;
    msg.surf_fdbk_x = 0.14875810659876265;
    msg.surf_fdbk_y = 0.28530020000623624;
    msg.surf_fdbk_z = 0.2617506058637198;
    msg.surf_unkn_x = 0.6465033537635161;
    msg.surf_unkn_y = 0.9520543412155743;
    msg.surf_unkn_z = 0.6264866622474031;
    msg.ss_x = 0.7551703883292988;
    msg.ss_y = 0.19899990985485327;
    msg.ss_z = 0.6417477815459278;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YSAPFAZPMHCYZJZDDDCUUZJDFMVGTKVURYRGFIHAIJLDYEHKWBERTXDWULIPJIPMAVEEANORLAJHNKAQVPLFOJOTPZKHSZJADCLSTOTKOKUBTLCRGPXKMZHZWBURXXWXGVTGGYCVUSQURPFEWMPFQRLTNNGCEOEKWIYEVXMLQVBAIGUWUGXSANNHCEKRDBCID");
    tmp_msg_0.dist = 0.6951152462070588;
    tmp_msg_0.err = 0.9686093421272289;
    tmp_msg_0.ctrl_imp = 0.013028752942064958;
    tmp_msg_0.rel_dir_x = 0.2631671442118729;
    tmp_msg_0.rel_dir_y = 0.47586851546398123;
    tmp_msg_0.rel_dir_z = 0.09580381503486923;
    tmp_msg_0.err_x = 0.362827040221532;
    tmp_msg_0.err_y = 0.9293303084420139;
    tmp_msg_0.err_z = 0.7546629323082975;
    tmp_msg_0.rf_err_x = 0.13435847287387248;
    tmp_msg_0.rf_err_y = 0.5270808330755503;
    tmp_msg_0.rf_err_z = 0.4105800849975121;
    tmp_msg_0.rf_err_vx = 0.4474858394369897;
    tmp_msg_0.rf_err_vy = 0.4888918459360251;
    tmp_msg_0.rf_err_vz = 0.7499472319646032;
    tmp_msg_0.ss_x = 0.4934662350829532;
    tmp_msg_0.ss_y = 0.988338923419615;
    tmp_msg_0.ss_z = 0.9086189174043161;
    tmp_msg_0.virt_err_x = 0.6909456330959093;
    tmp_msg_0.virt_err_y = 0.04162860328528484;
    tmp_msg_0.virt_err_z = 0.90347253297574;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.19474489948729878);
    msg.setSource(40369U);
    msg.setSourceEntity(167U);
    msg.setDestination(41835U);
    msg.setDestinationEntity(157U);
    msg.ax_cmd = 0.0209091152185501;
    msg.ay_cmd = 0.019149709629443623;
    msg.az_cmd = 0.5598829042409004;
    msg.ax_des = 0.24785674149325576;
    msg.ay_des = 0.5717019576702878;
    msg.az_des = 0.433983886232425;
    msg.virt_err_x = 0.8415139829691565;
    msg.virt_err_y = 0.9052126304480416;
    msg.virt_err_z = 0.11698529849287342;
    msg.surf_fdbk_x = 0.4198574095168516;
    msg.surf_fdbk_y = 0.7750403507570308;
    msg.surf_fdbk_z = 0.025804235579665713;
    msg.surf_unkn_x = 0.5285227874983023;
    msg.surf_unkn_y = 0.9260735732251124;
    msg.surf_unkn_z = 0.9960056919557921;
    msg.ss_x = 0.9007705101544116;
    msg.ss_y = 0.2403442225808219;
    msg.ss_z = 0.08215086428768559;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PPCCVBDYTLAZZIRBLQLJVRZANAFUEZHTKLOXNCCKIFSCTWWVVOBOVNUDTMPJUAWNWSOWZJMARPIKQPJFXWGRYDIFUGGFBCRJMJHMDVKXQ");
    tmp_msg_0.dist = 0.870247373858447;
    tmp_msg_0.err = 0.7303108778558502;
    tmp_msg_0.ctrl_imp = 0.48423022430511764;
    tmp_msg_0.rel_dir_x = 0.8231444914595545;
    tmp_msg_0.rel_dir_y = 0.9510869312983369;
    tmp_msg_0.rel_dir_z = 0.41258682954521275;
    tmp_msg_0.err_x = 0.06325881414540557;
    tmp_msg_0.err_y = 0.5733685187205327;
    tmp_msg_0.err_z = 0.6047855172714874;
    tmp_msg_0.rf_err_x = 0.16572663697284462;
    tmp_msg_0.rf_err_y = 0.6738965342809417;
    tmp_msg_0.rf_err_z = 0.15151580162198275;
    tmp_msg_0.rf_err_vx = 0.45059247862479346;
    tmp_msg_0.rf_err_vy = 0.5501382706247068;
    tmp_msg_0.rf_err_vz = 0.16619641600054236;
    tmp_msg_0.ss_x = 0.573656395375387;
    tmp_msg_0.ss_y = 0.9766605778306059;
    tmp_msg_0.ss_z = 0.1885378925194504;
    tmp_msg_0.virt_err_x = 0.671962731042674;
    tmp_msg_0.virt_err_y = 0.8162743012968966;
    tmp_msg_0.virt_err_z = 0.3175581219762379;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.9264633514187414);
    msg.setSource(42173U);
    msg.setSourceEntity(106U);
    msg.setDestination(48953U);
    msg.setDestinationEntity(8U);
    msg.s_id.assign("UXFDEMTAPFIBEKWLWLQVPHLZAZJITLWE");
    msg.dist = 0.5783897414646704;
    msg.err = 0.8810105210737408;
    msg.ctrl_imp = 0.11650660948608049;
    msg.rel_dir_x = 0.9426614782898433;
    msg.rel_dir_y = 0.5113291080201392;
    msg.rel_dir_z = 0.9916503878653873;
    msg.err_x = 0.29594251509945246;
    msg.err_y = 0.2181730412143339;
    msg.err_z = 0.4447893467799897;
    msg.rf_err_x = 0.294605549997938;
    msg.rf_err_y = 0.3171376050102439;
    msg.rf_err_z = 0.8586471083281051;
    msg.rf_err_vx = 0.24366489564010674;
    msg.rf_err_vy = 0.7542128978769981;
    msg.rf_err_vz = 0.30393558823375677;
    msg.ss_x = 0.6614994755382448;
    msg.ss_y = 0.011945812521079069;
    msg.ss_z = 0.768560348958275;
    msg.virt_err_x = 0.5664470471706742;
    msg.virt_err_y = 0.7662632604664549;
    msg.virt_err_z = 0.481432335591066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.5120692797543026);
    msg.setSource(24605U);
    msg.setSourceEntity(102U);
    msg.setDestination(26865U);
    msg.setDestinationEntity(205U);
    msg.s_id.assign("UFHYKIDJMUQMXOHGIZUC");
    msg.dist = 0.5614168577554659;
    msg.err = 0.00397323863961907;
    msg.ctrl_imp = 0.1638888856770967;
    msg.rel_dir_x = 0.5936805878625949;
    msg.rel_dir_y = 0.8678918992391802;
    msg.rel_dir_z = 0.619900729173725;
    msg.err_x = 0.02575428693818771;
    msg.err_y = 0.45275580997594667;
    msg.err_z = 0.8984637153630068;
    msg.rf_err_x = 0.9628996843117769;
    msg.rf_err_y = 0.4026616114784086;
    msg.rf_err_z = 0.7771664463977357;
    msg.rf_err_vx = 0.6399270908692224;
    msg.rf_err_vy = 0.9494110880923813;
    msg.rf_err_vz = 0.8120485910142476;
    msg.ss_x = 0.1044402565905942;
    msg.ss_y = 0.5149274023119539;
    msg.ss_z = 0.4885395182141248;
    msg.virt_err_x = 0.10213639468618729;
    msg.virt_err_y = 0.7797949839918821;
    msg.virt_err_z = 0.8485534202629115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.09641055400962528);
    msg.setSource(7377U);
    msg.setSourceEntity(155U);
    msg.setDestination(36896U);
    msg.setDestinationEntity(117U);
    msg.s_id.assign("BZOZWSNBEDASNRBTUOSJPZTTFRFOGRLQGGYUYOPEQZKCRUVYUIHLTWPJCVDKJRXDAIHPBGLDWVDXKNCFEAYLENIUNOBKSV");
    msg.dist = 0.782834888993966;
    msg.err = 0.7367868541915625;
    msg.ctrl_imp = 0.8982281533116877;
    msg.rel_dir_x = 0.0032756832726330565;
    msg.rel_dir_y = 0.9720634347100726;
    msg.rel_dir_z = 0.7865407068125978;
    msg.err_x = 0.40019704421963065;
    msg.err_y = 0.7876019605082174;
    msg.err_z = 0.5169485769569404;
    msg.rf_err_x = 0.8742272034719779;
    msg.rf_err_y = 0.3284948786446481;
    msg.rf_err_z = 0.7979696099816076;
    msg.rf_err_vx = 0.9614190389632145;
    msg.rf_err_vy = 0.9838333416283818;
    msg.rf_err_vz = 0.021016427237478763;
    msg.ss_x = 0.4492539401238238;
    msg.ss_y = 0.604378687083346;
    msg.ss_z = 0.4812838255242521;
    msg.virt_err_x = 0.6065674269699959;
    msg.virt_err_y = 0.32403286082478144;
    msg.virt_err_z = 0.9958340480473202;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.23490268493082067);
    msg.setSource(4834U);
    msg.setSourceEntity(12U);
    msg.setDestination(5588U);
    msg.setDestinationEntity(11U);
    msg.timeout = 47452U;
    msg.rpm = 0.7996863460665179;
    msg.direction = 165U;
    msg.custom.assign("FQAWVYASMKJCJFITLLMYKDGYNNDCXJXEURZSASIVFJDZHUDWOYRBPFCBCNDNAGKEMYEUDOWFCYLZQQHHUXHCAIPJSZTMGVTPIHQUNBMATJMQMFAKUHXWHWLLFGRZUBOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.5044760342807998);
    msg.setSource(34658U);
    msg.setSourceEntity(200U);
    msg.setDestination(57136U);
    msg.setDestinationEntity(64U);
    msg.timeout = 44635U;
    msg.rpm = 0.2840739879884634;
    msg.direction = 25U;
    msg.custom.assign("SDFIALIQOQQBTAMIMVGXXLNPXXEDICDFUTCMYVHHAUHYFIWUCVURCLFUQRYSGNJXLTQYRUOHGIQWKDHBUPZZMWPMFEVQPSBZMLDRPKXGSIVNPTTCWGUVVURBHWMVQSJAJIJKWNHYZTXDVJGJRENKEWDBJZOIBLHCMGNDBNPOBGBZRHKCHWEOPLQESTKROAAYGTRZXJFMNPERVOSILUENAEGCXTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.5895099969822728);
    msg.setSource(47533U);
    msg.setSourceEntity(17U);
    msg.setDestination(36266U);
    msg.setDestinationEntity(106U);
    msg.timeout = 64549U;
    msg.rpm = 0.4936176466263109;
    msg.direction = 129U;
    msg.custom.assign("GGHXBFBSPPONUJGNTEAQGBMCWRJUAFWLKBWUNSCMZFGUDKWBYLIAEXJKAYOPIRUFUZXCYXGQSUYMKGVLRQDDEPIKNVHNHMSVMDREUYJJDVWEZZRRQXYIFGTWNXZDPFSCLTKOAIPSTAVSWXDAZLFHLYBKOVFOWTNROMJECNQVEGECQTMBTLUJHIHWDRJIZIOKVFMIQCCBKHBZDYRXEXPSPDCTFTVONBCQVMSTNWRZHKSZOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.6563731606363881);
    msg.setSource(48346U);
    msg.setSourceEntity(25U);
    msg.setDestination(64922U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("WBZPXETJDGRRUEIGQDKRVNZGUDHSBKMELOJKLZOBKVSHYXBNPNSUDVAAKLTDRFEVYFSNZDWBPJOROTENTCSPAVGWXUBYSWJDIQFIOBBFUIUMNQZPTDGAYAWKPKXCHAMCQJVAHLMHVKTJWSHPIYMTZVUQJPMAIGMLJZOOTYFGJLMYLHXGIMEFAOAYQHKTEEQKMPUXYFVONHQDFRFUBCHPCCQXSCWENTRLWJSYDQIXCWXNIZICVXORFLWCE");
    msg.type = 15U;
    msg.op = 84U;
    msg.group_name.assign("OXURQABXPOCQYGDNZLODEAKWWPYMPBTRQGUJUJFYUEPMVQXWLZKSHHJSPVFKTWOSRXUGAZWBOXSNUKUKQNNLRWTGCIIATWBGEFMOICNCMDLDXJLAABQVYZJVFKXFFDDRNGHVCOFAJSKVIQLSYHCMLCHTNIFVDCEMCSUCRIVPRAJXGEWDEYIHMBQSZBYIZQKEETBLUGXPT");
    msg.plan_id.assign("FKKJZMTMTOVHJRVSYCHIRPPBICTILAYUZKIQMBOKUJBAMRISLEZGREQNMGYSTVQKWYPSLRWBHLNRODDTQBLGGAUOFHKLDADUSVMERZCDVZLKJYSQKMNZIRXABVUYBPOXSAHIAHNLWUNDCXCJWJOGFUXSVSHBWAQWCGXFACSAXYNYDHCTXTE");
    msg.description.assign("QUWOGTDJGYUGVVTMROVCCNAITKWOTMXMPLDIOZAKXOINLKMWOJBVRFKZEWLEHKDVPWBPIGIVEUDBLKHZNEQZWPIFMEXBFQRKTJSJHCF");
    msg.reference_frame = 61U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65290U;
    tmp_msg_0.off_x = 0.40270314087409653;
    tmp_msg_0.off_y = 0.5729436719929569;
    tmp_msg_0.off_z = 0.8223389272963358;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.3007911577123443;
    msg.leader_speed_min = 0.4027523758488395;
    msg.leader_speed_max = 0.931749179362786;
    msg.leader_alt_min = 0.9711665319205919;
    msg.leader_alt_max = 0.08641175424134662;
    msg.pos_sim_err_lim = 0.15023268762403763;
    msg.pos_sim_err_wrn = 0.14737972867631932;
    msg.pos_sim_err_timeout = 60286U;
    msg.converg_max = 0.8547909498002205;
    msg.converg_timeout = 22690U;
    msg.comms_timeout = 62910U;
    msg.turb_lim = 0.4699547186481444;
    msg.custom.assign("JFLCKTHNNQHYZXHOJUEVNBGEVMNMUSWEXBSUIAGU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.214024940196048);
    msg.setSource(27861U);
    msg.setSourceEntity(13U);
    msg.setDestination(39994U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("AMUJLFLLNWSTLUEQJDDVDOKIOOBSYWQFSWBIJUAVIRCMHKCUDVRYPAYWWMJGEUMIOKXWFCISNCANBPTEBQOYTSALYNLJJXIGFURBMHRHUVKKNNYJSCKFLKGXZMUDEGPHJQHGFTHRGDLEIQQZNPXUSRDPAFYZPGVBXFRRZWKEXFGXOQWMBTTODDOTBSCEOZLPVVCDXV");
    msg.type = 8U;
    msg.op = 188U;
    msg.group_name.assign("HLBXQKLYLERFQCSZIKMHYGHNOPBFMIGVKDYFACYTSRUM");
    msg.plan_id.assign("WWVTWPQHHQRZHNPIHRLURGDQTRE");
    msg.description.assign("BLECPGKCINMBCWUJWMZPRTPPDNIOWYSRUSWHCFZIKUOTJOXAJABMXHTZIJSFNUVIAKYBEYGJOHAUVHPDNYMRVFQAZYDBWLQPWFLJKEOZYDOIZDYLRXXCEUHYHSJGLTEC");
    msg.reference_frame = 145U;
    msg.leader_bank_lim = 0.8697058416785367;
    msg.leader_speed_min = 0.14593528097563602;
    msg.leader_speed_max = 0.7800113168747979;
    msg.leader_alt_min = 0.8702099868092602;
    msg.leader_alt_max = 0.5385080625971272;
    msg.pos_sim_err_lim = 0.2087302966831508;
    msg.pos_sim_err_wrn = 0.9425144823518082;
    msg.pos_sim_err_timeout = 22058U;
    msg.converg_max = 0.33751997954632285;
    msg.converg_timeout = 14250U;
    msg.comms_timeout = 504U;
    msg.turb_lim = 0.9906425002756567;
    msg.custom.assign("HWMZJNPIDLRJEBQLXYTTWMCHLNVVKTPCNXQTQKMJYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.5611660932950384);
    msg.setSource(45766U);
    msg.setSourceEntity(152U);
    msg.setDestination(57041U);
    msg.setDestinationEntity(63U);
    msg.formation_name.assign("OMDMUUQIXNJESSLNWPJLLPQBQIXGSIYUURCFQODRLIOYLSWRBSZSRHUHVMBGCKEZEECHPXNWFWUWOTILYBJDGOOPKTNAPFAKDQLQQAQVJKMLSBYVRIJCXPPAZGUYZMHKOLXHZTTNRJVTVBFFGGIKEVNEMDYCGETRS");
    msg.type = 135U;
    msg.op = 174U;
    msg.group_name.assign("CRPRPPZOWXNYUPDGAACDWYFSMABQCPINLPTNRIVWBAKYQFYUIEBTNSNVDAFBDOOLQEWALZIODQTVLKOHRCFVXUMOHSSJIOELDCTHXMXZSQEMBSLFXBPTIVINUJPUXMGZZYOHNKPQCRCGREZSVTBKKMNCRHYXQRZIMDXKUVTMKTJXZSHKIEEFEJJRSHGGVIYFJXLANYBGKHCGJGJLGBTHQPJKADGFUZWOUUMWWWVAFTLZAY");
    msg.plan_id.assign("YIMRZPALBHFAGKFZFOMQZPJZKHVUOEEJARRVTDTROCQOITPTWMXJPXRIVGRGYSSUEUICWVYXIXWGYXDWVQHTFIGOZWSECLKOELCSAAHNEPBOWRXKQQGMGHLNUZIACFKCXQYBH");
    msg.description.assign("PPNWHUYORAF");
    msg.reference_frame = 217U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31569U;
    tmp_msg_0.off_x = 0.18051270685414134;
    tmp_msg_0.off_y = 0.5645476382694359;
    tmp_msg_0.off_z = 0.12844311501572847;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6829064763551489;
    msg.leader_speed_min = 0.5729901667004705;
    msg.leader_speed_max = 0.34905084621250626;
    msg.leader_alt_min = 0.48922442951508593;
    msg.leader_alt_max = 0.12491179797552343;
    msg.pos_sim_err_lim = 0.8378103286180764;
    msg.pos_sim_err_wrn = 0.4901841459991093;
    msg.pos_sim_err_timeout = 41265U;
    msg.converg_max = 0.23741612076603036;
    msg.converg_timeout = 24332U;
    msg.comms_timeout = 18384U;
    msg.turb_lim = 0.5601631457854481;
    msg.custom.assign("KHQFXKAAEDJQFGPDOSYFRDSMZKFVRPKEBEZGFKTYMROSHUNRXQNNRSCZIDXNWBJZBIOJWVCYVBOXEIQYQPPQMANLKIAAHIVHPXRIIDDYCHGEDYZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.9993544055892558);
    msg.setSource(50694U);
    msg.setSourceEntity(253U);
    msg.setDestination(53451U);
    msg.setDestinationEntity(208U);
    msg.timeout = 41790U;
    msg.lat = 0.7600683704072172;
    msg.lon = 0.12612463939526275;
    msg.z = 0.7989508880825233;
    msg.z_units = 14U;
    msg.speed = 0.4320110992979258;
    msg.speed_units = 157U;
    msg.custom.assign("OTSRGUJCMRYRQPQPEQYDSQNYFAIDVVLWKSCYVAMGXYBEVCIOHSNTULYXQDPUESJFSDOUMITDQGKBHBVDHDYFOSQAWSHGXHFVZRIKIZJLZBAWUENTFGWZBSOWFMSOMXIRJRXNRLTGKITIVCVPBHAOHRWUCJLMFNGJTANALCMEKPCEUOWKABXEQAHZRWXTFNGOPUKUJPKBJGVXCZNZYZZXDYLQJDVZCLEQLKWEXABLIWFDYCMHPUNET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.5146502936139711);
    msg.setSource(43945U);
    msg.setSourceEntity(208U);
    msg.setDestination(46194U);
    msg.setDestinationEntity(50U);
    msg.timeout = 2975U;
    msg.lat = 0.7098691328398251;
    msg.lon = 0.5429713222249754;
    msg.z = 0.7394887247000513;
    msg.z_units = 245U;
    msg.speed = 0.30533285232200613;
    msg.speed_units = 74U;
    msg.custom.assign("MXDFPEACQIXIRWZPPJPCBWXGWGMERMTICNHHUNLSNYJKAFBZSYAOFEJLYMCDPAIOJGRICUNLAPQYWEDUIZWPTXZUPMZSOYOKFVVQIRAJSHMJWVRIKEEQXUYGCHEGZREYMZIDRKUBXLMLCVSHNTNKVGLZYWZBGQVVOAKTBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.388078418029717);
    msg.setSource(53079U);
    msg.setSourceEntity(205U);
    msg.setDestination(45643U);
    msg.setDestinationEntity(112U);
    msg.timeout = 64673U;
    msg.lat = 0.989147402395372;
    msg.lon = 0.6744557722291848;
    msg.z = 0.6099350702033671;
    msg.z_units = 63U;
    msg.speed = 0.9231278023708531;
    msg.speed_units = 2U;
    msg.custom.assign("GYRHKEMJCRKYSFQYZRKIXHNRXKQGVWJJSOPCRCFXVCBSKGHDUHDUWUPHSQLAZQQVXQWYLWNQNYYZIWNBGTKAOVSDVHMLUGCZKMCNAEWGBOVDDRFYBIXTIDGWJXZAOOTCOKVZLUEEBWZPPOEXNSKWIHPPQAJBTLFELEJMFUBMXFFPPJHLEDSCUMRKSVMRXNCGOAAFINOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.5871743162163069);
    msg.setSource(45132U);
    msg.setSourceEntity(53U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(37U);
    msg.timeout = 33387U;
    msg.lat = 0.693993080746506;
    msg.lon = 0.4502141788667905;
    msg.z = 0.634372330547509;
    msg.z_units = 10U;
    msg.speed = 0.6654540322446224;
    msg.speed_units = 70U;
    msg.custom.assign("VLPNAABDNKZHVRLGTDSHBRIRNGPEKMNIMNACZBFMYCBVEDQDXFJUFLIYIHUZVZXZHTDCRUJGUPFZTSXNWQUPZXYSCCSAJYVCETCYXGOAIJLQOWKAMFLTXIPRCPDEOBEUNGFYLUUVDDTRXAEPWKBOIEUXVKEBVWZNEDSZTCAMJBXXNKTIQFHOWAHOHPWHQPWSQPRFIGKSYJJGHJTLQYSNWMFJWSYFGMHMIZORWOVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.27697667243776014);
    msg.setSource(28823U);
    msg.setSourceEntity(209U);
    msg.setDestination(23886U);
    msg.setDestinationEntity(196U);
    msg.timeout = 8453U;
    msg.lat = 0.9084297939169025;
    msg.lon = 0.1591856544069744;
    msg.z = 0.5390061656285386;
    msg.z_units = 65U;
    msg.speed = 0.2761977029154602;
    msg.speed_units = 162U;
    msg.custom.assign("ZFSPUIVNQDDIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.3871346416758644);
    msg.setSource(25669U);
    msg.setSourceEntity(136U);
    msg.setDestination(52096U);
    msg.setDestinationEntity(149U);
    msg.timeout = 42674U;
    msg.lat = 0.43359506263432235;
    msg.lon = 0.48820322130045446;
    msg.z = 0.9613664616362338;
    msg.z_units = 85U;
    msg.speed = 0.4988128824277537;
    msg.speed_units = 82U;
    msg.custom.assign("ZMHQTGFBOELWYOHFOBVAWSPZNQVEIULTWSQACBWSJXZVVFZRRFZFFEOJRVUIIZNBBATOOIDGGRQAGYLYSMFVBPJXSGWGZOUIXGSPNMHURIXVUDKOOSJBPDXCLBKJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.9611466162938934);
    msg.setSource(19571U);
    msg.setSourceEntity(66U);
    msg.setDestination(61522U);
    msg.setDestinationEntity(43U);
    msg.arrival_time = 0.5906459054065882;
    msg.lat = 0.9984044923348238;
    msg.lon = 0.8773454236034148;
    msg.z = 0.49722945787579753;
    msg.z_units = 0U;
    msg.travel_z = 0.6435089936653863;
    msg.travel_z_units = 197U;
    msg.delayed = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.8653133404099319);
    msg.setSource(11031U);
    msg.setSourceEntity(185U);
    msg.setDestination(11544U);
    msg.setDestinationEntity(88U);
    msg.arrival_time = 0.1635286152827955;
    msg.lat = 0.5017849720399712;
    msg.lon = 0.08043348760867608;
    msg.z = 0.3728140633953311;
    msg.z_units = 139U;
    msg.travel_z = 0.5027186186876653;
    msg.travel_z_units = 104U;
    msg.delayed = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.5205129212028824);
    msg.setSource(43053U);
    msg.setSourceEntity(211U);
    msg.setDestination(9571U);
    msg.setDestinationEntity(239U);
    msg.arrival_time = 0.650282809964657;
    msg.lat = 0.20179944062714084;
    msg.lon = 0.740538153500183;
    msg.z = 0.9736964648102293;
    msg.z_units = 180U;
    msg.travel_z = 0.37486042736337877;
    msg.travel_z_units = 195U;
    msg.delayed = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.2261390913917608);
    msg.setSource(53397U);
    msg.setSourceEntity(161U);
    msg.setDestination(60628U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.7598080865027164;
    msg.lon = 0.46884566538993955;
    msg.z = 0.4996398641323978;
    msg.z_units = 241U;
    msg.speed = 0.9757306690036891;
    msg.speed_units = 28U;
    msg.bearing = 0.7558133890248033;
    msg.cross_angle = 0.9153779259159258;
    msg.width = 0.9119224000818332;
    msg.length = 0.9558883791367029;
    msg.coff = 155U;
    msg.angaperture = 0.7397298492954507;
    msg.range = 62288U;
    msg.overlap = 125U;
    msg.flags = 125U;
    msg.custom.assign("XQYCOHMFKANKFPDQXFDPSSAVYNDOOVQUTEMYGJILUDMFVGTUYNLQSTGKCPILVIWEJSQGJWBBNYOPIGXBOHIKIORHLQWLNVTXIBSRELJAVMILJJMPZRSGLTDTIKCDRHMWKUKZEQGVXCZJTAWSQWEXRCBPDMYBXJXDQFARHHKQUFFOMYBRNPDJVUWASYNRKWUCAEVTWPIZHBMJTWYSEFDUZZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.7746000368035113);
    msg.setSource(19060U);
    msg.setSourceEntity(16U);
    msg.setDestination(54770U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.01652341623186604;
    msg.lon = 0.48206220622943896;
    msg.z = 0.5629549867652408;
    msg.z_units = 128U;
    msg.speed = 0.3481255827996962;
    msg.speed_units = 79U;
    msg.bearing = 0.3554002737899594;
    msg.cross_angle = 0.6527490423058268;
    msg.width = 0.90318369735246;
    msg.length = 0.1891224589006817;
    msg.coff = 148U;
    msg.angaperture = 0.31520750365266503;
    msg.range = 2522U;
    msg.overlap = 205U;
    msg.flags = 48U;
    msg.custom.assign("CRJADEMUKYAJNVQCHMTLDJKQZGFPZSGUOBJZSNOWAFREYVGKDPFXESPVIMOCELDQUGGWDBKENTEOIAHIFSYZZDYBCOIITNSROEIVXAAWPGCAWIEGRJOFBHZRTKNPRIAUUHLPBILCJFOXWNRXNLVMQOUUSONVTQXMPTNFLKKQWQXSQLUWFGPTDBVSGVHCJDYLYCKXUAWMHXZDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.46649681122626363);
    msg.setSource(6916U);
    msg.setSourceEntity(195U);
    msg.setDestination(7407U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.020709281527934276;
    msg.lon = 0.21531744859334434;
    msg.z = 0.6990088019217944;
    msg.z_units = 49U;
    msg.speed = 0.406793226272655;
    msg.speed_units = 212U;
    msg.bearing = 0.4826951549778882;
    msg.cross_angle = 0.7927667109725306;
    msg.width = 0.7331628475299903;
    msg.length = 0.35637583162893127;
    msg.coff = 196U;
    msg.angaperture = 0.365638331322255;
    msg.range = 38358U;
    msg.overlap = 191U;
    msg.flags = 71U;
    msg.custom.assign("YMJOCRWUVAJTYLMRDQCVYNNIVBLZRLMUURNSCGXOBNEHKFTDRTAAJKMTQEXZGWLYTATSJBPFUCIPBHFPWVAHNQSJUFEIBZRXPCGFEFTJVGKRIIGWWFOGHLQQENBOCYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.4321696327958101);
    msg.setSource(5742U);
    msg.setSourceEntity(58U);
    msg.setDestination(64352U);
    msg.setDestinationEntity(25U);
    msg.timeout = 782U;
    msg.lat = 0.9346242203322024;
    msg.lon = 0.30520884262134695;
    msg.z = 0.033675811877955986;
    msg.z_units = 88U;
    msg.speed = 0.1789122610218159;
    msg.speed_units = 16U;
    msg.syringe0 = 77U;
    msg.syringe1 = 93U;
    msg.syringe2 = 252U;
    msg.custom.assign("FULOISYHNZNVWDOJXGPSLGQXQKKCIMXXOLJUUEGSLLFAFZPMTDZKNWRHPCKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.5078499981340467);
    msg.setSource(61230U);
    msg.setSourceEntity(46U);
    msg.setDestination(22364U);
    msg.setDestinationEntity(58U);
    msg.timeout = 62260U;
    msg.lat = 0.6340167401912248;
    msg.lon = 0.8850178715587035;
    msg.z = 0.7404922421242445;
    msg.z_units = 222U;
    msg.speed = 0.5804796731199946;
    msg.speed_units = 244U;
    msg.syringe0 = 238U;
    msg.syringe1 = 175U;
    msg.syringe2 = 128U;
    msg.custom.assign("MCKFRIRFVOWZUWKSJNXOCMAPVXTCFNOUCXITEMKGCSPLHKPWKFABWXAGRJRYDQNBNBHUHBRVMZFXGZBDSLNCHAWACXFFYPYFVNYTELYHHISLAQZRXOBKTQTOAOONTPMLMXVFVGKCGTQPEEKLUTZKODSSSQXMNQJZVPDQRALPTUYUBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.7385300483619718);
    msg.setSource(56591U);
    msg.setSourceEntity(204U);
    msg.setDestination(43704U);
    msg.setDestinationEntity(161U);
    msg.timeout = 48962U;
    msg.lat = 0.5531839475028517;
    msg.lon = 0.1892820331891456;
    msg.z = 0.5966593215909921;
    msg.z_units = 245U;
    msg.speed = 0.9397894298291205;
    msg.speed_units = 219U;
    msg.syringe0 = 203U;
    msg.syringe1 = 54U;
    msg.syringe2 = 186U;
    msg.custom.assign("BTUKDSVHLKZAWOJVPMGFLIAURRFESGZONZAVKZEBLEGJSNPTFCNOPLJTBFYCXZOGKKXWMZMYPMWEQLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.3098542961139016);
    msg.setSource(14631U);
    msg.setSourceEntity(67U);
    msg.setDestination(610U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.16158503192838092);
    msg.setSource(8205U);
    msg.setSourceEntity(161U);
    msg.setDestination(47834U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.34690307037045787);
    msg.setSource(57598U);
    msg.setSourceEntity(251U);
    msg.setDestination(47888U);
    msg.setDestinationEntity(122U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.1907313724902665);
    msg.setSource(56019U);
    msg.setSourceEntity(87U);
    msg.setDestination(8691U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.06403082877712174;
    msg.lon = 0.7297662609880391;
    msg.z = 0.2824108527405609;
    msg.z_units = 60U;
    msg.speed = 0.49958848804221934;
    msg.speed_units = 146U;
    msg.takeoff_pitch = 0.6858343664443511;
    msg.custom.assign("ABONGITZTOYHWYZEZTRAFCYLHTQQDNSBBPKFEPIGNYKWZMRDAJZVHIDXYRSNRQTRKESMMROIGTBTDEGYWMWMCENANSQXZKBSGBFTXYLWPKQSVWATLFWAPJNWNAIINWEOXJFESSYADBDFZXUXZPVJUQDECPVOLBHTIWRAUYQGCYDUUKJLVRVLHUGFXHKCPXEBVVQLFJMLLUKAJVXUVJJMPIHPKIGOJENCQOOURKRFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.23108650707324285);
    msg.setSource(2899U);
    msg.setSourceEntity(144U);
    msg.setDestination(61150U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.9763850431402896;
    msg.lon = 0.9663908534853349;
    msg.z = 0.6564048172406969;
    msg.z_units = 184U;
    msg.speed = 0.10101130171242945;
    msg.speed_units = 176U;
    msg.takeoff_pitch = 0.21502023287444216;
    msg.custom.assign("IDDPVWVSJYUUGVAKWNBRMXJGEIGLWBAUQZJUVINXCIQWUPBBBTTCFIBPNJQBRBJHHCKXMLYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.30796249503057105);
    msg.setSource(49367U);
    msg.setSourceEntity(154U);
    msg.setDestination(60702U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.2902237226151345;
    msg.lon = 0.20607495522312846;
    msg.z = 0.6080272027098758;
    msg.z_units = 57U;
    msg.speed = 0.056255097501444085;
    msg.speed_units = 63U;
    msg.takeoff_pitch = 0.012727948247025056;
    msg.custom.assign("JTJFVGPPXPLZYVZOSIRFDTRZCBVZNEGCYHNGVUMKUUKZCFADOKMASPZLTALPSMNNEWISDIGZEOFQAGPELCWHLEEBLYZBOEXUQRIYQEMABTIDRKWUVJMKXWPNYVANKCWRITYICRPIFQTDWLKQFMYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.6436837207667286);
    msg.setSource(51088U);
    msg.setSourceEntity(73U);
    msg.setDestination(19661U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.9561918558751259;
    msg.lon = 0.9633946188656121;
    msg.z = 0.569975883988716;
    msg.z_units = 107U;
    msg.speed = 0.7894142611265044;
    msg.speed_units = 76U;
    msg.abort_z = 0.9850056790778436;
    msg.bearing = 0.5532332658518765;
    msg.glide_slope = 188U;
    msg.glide_slope_alt = 0.8499799083663474;
    msg.custom.assign("HFQUQEHZHZSLRQNWHYDBXPKDPZAEJPTUIJZQIDQXONUKCXLJQOWREATSRCSABLVETJEBKQFLYFBBTVISVFLLTXZHRTJNMMKRZGCYTJZPGSCEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.3288234344561485);
    msg.setSource(36280U);
    msg.setSourceEntity(130U);
    msg.setDestination(45846U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.9097178563916098;
    msg.lon = 0.6601749439225104;
    msg.z = 0.6105721739163047;
    msg.z_units = 145U;
    msg.speed = 0.6157156236583987;
    msg.speed_units = 167U;
    msg.abort_z = 0.898395288253644;
    msg.bearing = 0.6704825866544806;
    msg.glide_slope = 34U;
    msg.glide_slope_alt = 0.13311601544455332;
    msg.custom.assign("MYTGEWMYZWENWXQYGZCBAUEOOHSQBRDDKVNQZYFPXHUQVZJHXXKRIDSAZDJICCCFVFFJNHXBLCUGUYMIIAJPAMISTSENTRWELPLUGEDWWSOKGUNQYTLKLRGCBIRODJEAGJSJSBBJVPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.07668169127486324);
    msg.setSource(54277U);
    msg.setSourceEntity(47U);
    msg.setDestination(56154U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.5675025875073958;
    msg.lon = 0.4549559827478443;
    msg.z = 0.37934587701447087;
    msg.z_units = 132U;
    msg.speed = 0.9504369458267629;
    msg.speed_units = 4U;
    msg.abort_z = 0.6380232894459725;
    msg.bearing = 0.32482219305593096;
    msg.glide_slope = 251U;
    msg.glide_slope_alt = 0.44067743531181913;
    msg.custom.assign("PHDHIKWARWYSSKZIAGUDHFDEZTHWZUNE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.3519236687647159);
    msg.setSource(58258U);
    msg.setSourceEntity(213U);
    msg.setDestination(18476U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.3779704505732441;
    msg.lon = 0.41602050423262193;
    msg.speed = 0.37174151473071326;
    msg.speed_units = 159U;
    msg.limits = 141U;
    msg.max_depth = 0.768072128006421;
    msg.min_alt = 0.21264751413829497;
    msg.time_limit = 0.404140657456722;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.06993736935254358;
    tmp_msg_0.lon = 0.119243752669143;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PRLIEFWQJPWNNFFJIRGVJVBRYOBUMNKDANZORSITEKCZWOSGDFTPZLPAPMODUJBDWNTJWVPKVFKBDHXSGHQRPZQHSJFAGMQCU");
    msg.custom.assign("STGQMNUMGKDXVJVZZXPESKZNOEMPZGNNFRAYJSQPJPIGHVDPTRBTBVXWNLFZNAGLBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.6628299911793311);
    msg.setSource(63899U);
    msg.setSourceEntity(45U);
    msg.setDestination(52109U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.8733848314139263;
    msg.lon = 0.7695906419753391;
    msg.speed = 0.027173189049229163;
    msg.speed_units = 99U;
    msg.limits = 203U;
    msg.max_depth = 0.24986009724630132;
    msg.min_alt = 0.25482404430345407;
    msg.time_limit = 0.17285639439743383;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5843149496656259;
    tmp_msg_0.lon = 0.8832144914053831;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EBULDNRIWUNJCOWQJLTLDELMTHLDOGUWHBGGSSFYOESNWCRCZSYHFSRHQKCXPHBRYAIKDUMSBFJMRVAPWPYZQBBAMKOOXEREVTFIZJGEWGXHDOOFUQWAGZYGJXOSNJNQPODUU");
    msg.custom.assign("BUXTNNNFENQSUBVRLOMALXLDJNMYEQQBXBGXBODOQEPVBYBGTEWLWHNJSHGDCOFKJMLPUGHOHQCCLSIHYAFPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.7578293173533531);
    msg.setSource(36083U);
    msg.setSourceEntity(79U);
    msg.setDestination(32379U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.5587610171390369;
    msg.lon = 0.06972192926316023;
    msg.speed = 0.9528567776073245;
    msg.speed_units = 214U;
    msg.limits = 186U;
    msg.max_depth = 0.4984725471189928;
    msg.min_alt = 0.4655510464852418;
    msg.time_limit = 0.45006012641972115;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.795266886764471;
    tmp_msg_0.lon = 0.7291190841684357;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YQGJDLGAOIZUJPXXPTPTUTOGLEXZLLQNGVIZEWBTCNZNJVAWYJMEGUDLANRUJBXLHCKEWPYSXUXHJECNWKNEFLBYOACPV");
    msg.custom.assign("KJEGHOBZDVNYJAKEGMIORFTHPYITJSIUDAHWIXTNXSSYNYINKQLMEGZCGJNSAXBDIUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.7312993712942257);
    msg.setSource(43933U);
    msg.setSourceEntity(168U);
    msg.setDestination(53393U);
    msg.setDestinationEntity(24U);
    msg.target.assign("FIGYWPCEHMLJUQVURQCPQCQUJDNQBHKZ");
    msg.max_speed = 0.4744560641376353;
    msg.speed_units = 163U;
    msg.lat = 0.5700130713208336;
    msg.lon = 0.674034728139921;
    msg.z = 0.9506103900883875;
    msg.z_units = 2U;
    msg.custom.assign("CKMBYVIAKLTCVVSMTYUSWTYVVXVSAGINHYWARLHGWLXIAKKCNDGJPQDOIJPPLBFAIMUMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.6532492325001198);
    msg.setSource(32753U);
    msg.setSourceEntity(95U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(6U);
    msg.target.assign("LGATZSDCHAMLCPOQBCPESIVXJSFMFSHNGRMOBDHTWVCSNFJTTXDYLHUTQPOKNSPNGKEIVFVIHKYYBDQONRZRUCSPURGAUYDRVZYVQBEFVHILZWFJAUAMLDJPLGARJWMIIQTORKEGIIQPXIHUCGUFYQOACRDBAGESZMUKXEEOWBVBDWELBEGTWQTODINWVZPXHJCLZMTKXNYNHOFBKJLSHMOQYCJPTQ");
    msg.max_speed = 0.1725129133427059;
    msg.speed_units = 51U;
    msg.lat = 0.17152677991798004;
    msg.lon = 0.03042157207327134;
    msg.z = 0.34701776151651487;
    msg.z_units = 69U;
    msg.custom.assign("VWAKCELODZCFSDUXLGRRWWLYXUUFBCKSHLDNLOLVEIPYVZMXCUTBLRGHDVIGMPUYQRFEHRMETARJJCOFDFQSYWXEIFFVQNAIIMTJI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.19761370098763054);
    msg.setSource(30921U);
    msg.setSourceEntity(123U);
    msg.setDestination(10402U);
    msg.setDestinationEntity(24U);
    msg.target.assign("DZRDUXSYDXATKRPKFIXHAJAIWRGQROSJSOMAXSQ");
    msg.max_speed = 0.13713726310439833;
    msg.speed_units = 0U;
    msg.lat = 0.4216069161766648;
    msg.lon = 0.43161425838325373;
    msg.z = 0.9546660637789989;
    msg.z_units = 222U;
    msg.custom.assign("ZDVSGPVEIGNPMFNADLINZJTIVRCTXOQCBBKJWYFBDLWSHNHKLXBWQOQZKJHNSUKORAJPOFCJUFZYXZDCVIKQRKQOYKLXFUBMYAUAHCTPBALGDCHEUCFHMPLTHJHAXQSYIDDVSLUMVUBKNPMUTUGNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.48188929197290287);
    msg.setSource(35424U);
    msg.setSourceEntity(88U);
    msg.setDestination(4747U);
    msg.setDestinationEntity(200U);
    msg.op_mode = 38U;
    msg.error_count = 154U;
    msg.error_ents.assign("LBCXBUUNNEVWXMLIWAFLFJABOAVQZKYEAQVUAPXTYGXFMISGLTRVOQKPSLKZQPOXZFEHTVHKGGELUBQJPUOZIZPKANIBYNOWNCF");
    msg.maneuver_type = 6168U;
    msg.maneuver_stime = 0.6751307870199897;
    msg.maneuver_eta = 47729U;
    msg.control_loops = 2941454171U;
    msg.flags = 34U;
    msg.last_error.assign("TNDZMXIFFTEJDALNMCKQJHSOERVCATKNMNBTOLYJWNAUCFDKMOQBMZWFFGNDJYFVCYGPRYKIUEWRXRODBMBDKGLEHUIOYEMHXGNBGTSZICIJCVBBSAWWLCRAMZG");
    msg.last_error_time = 0.0073959595643738885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.696520516301274);
    msg.setSource(5314U);
    msg.setSourceEntity(79U);
    msg.setDestination(26698U);
    msg.setDestinationEntity(144U);
    msg.op_mode = 140U;
    msg.error_count = 45U;
    msg.error_ents.assign("SOTKDLRVYRJIYEZLGVIZWWHPQJGFCDNBGTGSXITLGZVFRSYIHVYJHZOEBKWGKDRPVSGCUHIEHJJFSCUPHCLYMKSBLOEBUUHARTAIIXQYNUTDXKBDNTDVXXAFWBHANCOIVMRUDNWDYWQAWBWARKPVMTOCZVQMDNMEXDCNECQRJAYRPCFHBYSQXXBKEELQLIPBMSKJ");
    msg.maneuver_type = 50806U;
    msg.maneuver_stime = 0.1704303114514205;
    msg.maneuver_eta = 61133U;
    msg.control_loops = 1384044388U;
    msg.flags = 117U;
    msg.last_error.assign("YTRHONCPAZYYIBGKQGFAWHEDNJZWVGHRFQYJRKUEXCSPGDLVJEQDHSJXWHORP");
    msg.last_error_time = 0.7603477450721104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.9461897598086384);
    msg.setSource(41725U);
    msg.setSourceEntity(84U);
    msg.setDestination(24584U);
    msg.setDestinationEntity(146U);
    msg.op_mode = 195U;
    msg.error_count = 84U;
    msg.error_ents.assign("RLPZEXMTLAN");
    msg.maneuver_type = 49628U;
    msg.maneuver_stime = 0.8710686627011327;
    msg.maneuver_eta = 56942U;
    msg.control_loops = 1097294086U;
    msg.flags = 155U;
    msg.last_error.assign("QGLOWDPCZVQTDTXITOJMHQJRSSTRFPQXVYGXWYKSDMQXVP");
    msg.last_error_time = 0.9060247969226866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.4405962348112449);
    msg.setSource(20700U);
    msg.setSourceEntity(234U);
    msg.setDestination(25782U);
    msg.setDestinationEntity(119U);
    msg.type = 158U;
    msg.request_id = 2622U;
    msg.command = 40U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 28677U;
    tmp_msg_0.lat = 0.8940028048072188;
    tmp_msg_0.lon = 0.7014788834261271;
    tmp_msg_0.z = 0.829886693069618;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.duration = 24484U;
    tmp_msg_0.speed = 0.7947892574956308;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.type = 85U;
    tmp_msg_0.radius = 0.9698555879704079;
    tmp_msg_0.length = 0.7304171660049625;
    tmp_msg_0.bearing = 0.7396767912019999;
    tmp_msg_0.direction = 200U;
    tmp_msg_0.custom.assign("IWFORZKTVJZCZHXUVRQWLIHTJLBWRIAPTJGMBMNWEEDUHQTSPXJCCZKUJIIWCFXBZSEGYJQUNMALFSWYTBNPNUTMEQMEHYGZNKLZQGHBAFGLGTNIULBOZCGDGFWAWWRIMVWHEEEMYYASHHMARTCOEDJTMVSXD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3394U;
    msg.info.assign("UCSIVRMUNZTAOKALZNIXIZMVXAYYDZKRMJNDLNGHQGOKNHZXPEYVRBCELHKPGZHIYVARGGFLPUTEBVXJTBZHRURJKEPUPDKVCCIULLFQWNBQKVAHTGSCHJDOUFGLMDEIQFNLYMYVWSBVQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.9442859871143429);
    msg.setSource(7865U);
    msg.setSourceEntity(80U);
    msg.setDestination(19484U);
    msg.setDestinationEntity(247U);
    msg.type = 252U;
    msg.request_id = 13437U;
    msg.command = 57U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 3083391924U;
    tmp_tmp_msg_0_0.start_lat = 0.5364310033877636;
    tmp_tmp_msg_0_0.start_lon = 0.9117070015945393;
    tmp_tmp_msg_0_0.start_z = 0.5691187971685565;
    tmp_tmp_msg_0_0.start_z_units = 138U;
    tmp_tmp_msg_0_0.end_lat = 0.7330337318355684;
    tmp_tmp_msg_0_0.end_lon = 0.9575693227975068;
    tmp_tmp_msg_0_0.end_z = 0.8377982372916954;
    tmp_tmp_msg_0_0.end_z_units = 84U;
    tmp_tmp_msg_0_0.speed = 0.49553108947480273;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_tmp_msg_0_0.lradius = 0.4900855837661887;
    tmp_tmp_msg_0_0.flags = 185U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 40404U;
    tmp_msg_0.custom.assign("LSATGOUHLLFNRWUOVQKAKPNZVWZHEQEWIZAFEFKUKVFDBWJDOCWVPSPWREB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31271U;
    msg.info.assign("XCVRYAMBSOPJBIYWDIQODRKVHASQMILIRGHDTOQIINNMRRMMYUTDJNSHVNWDYUTQLSKGPZJOKULAVJTHLNSMONWTGPHCLMHBBEKBUNGRAOPMYUOYJZLCZEGWHTEFMTVRXDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.3932149326875223);
    msg.setSource(21943U);
    msg.setSourceEntity(215U);
    msg.setDestination(37501U);
    msg.setDestinationEntity(3U);
    msg.type = 43U;
    msg.request_id = 23027U;
    msg.command = 20U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 52367U;
    tmp_msg_0.lat = 0.6388285980679075;
    tmp_msg_0.lon = 0.34002720298945777;
    tmp_msg_0.z = 0.6128451101135105;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.7508256425298926;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.roll = 0.37011250036279186;
    tmp_msg_0.pitch = 0.079667547373796;
    tmp_msg_0.yaw = 0.0929492205442618;
    tmp_msg_0.custom.assign("RGCPJJSJTJJTPHGIWOTAGJQLXKTBFLDGOHWFDZTHMFDUKMAEQWFNHKPBEANAVXEYXWIRVSQEYZCDNUOLUMNTPZTPSSZHASJITBMNSGPROZQQVEWELCEKNGDTXGJOALIBHLMVXUYRDMPBUUSNFCKGHEUUAXCPRDWYCYVOERLRBKDVZEQYWJGZLGLQNKILYMQJORXMV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15782U;
    msg.info.assign("EHFBSYHHGNRVIVDQLCIQWDMYSDCVDIFIIUYXKUJROFTNBSWQMFEKQHTMCEECSCYXCQGHOFKXQCKNXVUAQILTNHMTNXVWWUBKPGMWCOZRASDIBJLGUPGCWYYAODAEXAIKZYTZXMSVRMAZOGKEFPTLXVWFKJPOXAESKHBUMOBLOHPFJNZGEUSREJOURDTGLTZGBJUNNBMIIRFQKVRPQTZDJVEODQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.9253646325022059);
    msg.setSource(28374U);
    msg.setSourceEntity(232U);
    msg.setDestination(43367U);
    msg.setDestinationEntity(107U);
    msg.command = 142U;
    msg.entities.assign("JTREQJDZYZFFBBHXCGRDFOFBXLAMXUIAMKRYPUBUNBEJOVFQCGSWTVUZHHBXYYEISNXKMPBEVLWITSMZKLRSCKJYSOLCUKGUVQBTPFVUONNMTGCMZOQQZAICTAIHJMAVOYJRGWQEPZEGAVRKNNIWIKURXTMXSNDXYDCKUVPTDHRLBQFNIFIAFKDHRECXWAJLOQERPCGTDSGYZPMZNVJOHCELHPUEPWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.5982971968024167);
    msg.setSource(2489U);
    msg.setSourceEntity(7U);
    msg.setDestination(12695U);
    msg.setDestinationEntity(242U);
    msg.command = 85U;
    msg.entities.assign("UMFHYAETQWTRAHOWWTQKGKXYDJZVONYDRCIQSJFAMUSWJIAMJKYVDHCTAHOGGCVFSNGELGBHMBZLWVEFFPQEZRYFIQQLHUUDVLYLJBPZISESZDUCJWFTAIPVLWNACCRJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.6884307474946304);
    msg.setSource(47242U);
    msg.setSourceEntity(18U);
    msg.setDestination(62390U);
    msg.setDestinationEntity(191U);
    msg.command = 253U;
    msg.entities.assign("MWIIQNVCCDMSTXQHGCCLFRFGZOYYBDRZRCNTOFOHWKGFAZWQYULQDQEEYVMAUHGEJSLVSEQNACXMWXXMEHPYTWPVRZUHPUPENECXNWBBFIWQGKQQUVSSTIHLENBRDKAMOZITIETBUHZDISXHZXEVJKGFKTBLIJYRZPYGPOVTJPLNRJAAFD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.9873617904496049);
    msg.setSource(38995U);
    msg.setSourceEntity(16U);
    msg.setDestination(40810U);
    msg.setDestinationEntity(89U);
    msg.mcount = 5U;
    msg.mnames.assign("ACLAHKOFFULAOYBKGLNVEEDRXKZYOUWBOEGVXPQPRTFQVTSBIMNADSMTGDXJTRLIQPFFITWYPNXJCAWVRBJMLGCVEMQSUBBTFUFWGXBKDKVJEHLVUNEDVIBZIGJZQAUHXTNX");
    msg.ecount = 117U;
    msg.enames.assign("ZMZAGVPJTMBVDFGRGCEXDZXYNLDOVPROICLBVOSJCTMNPLSICVQNEYYWYCBBUNQTKFHACQ");
    msg.ccount = 72U;
    msg.cnames.assign("ZXVSPTZWHEPKWCWYUTBSBGTMQTAPKGYKDZCZRFPNBAVCYXQFYPUIOSCYESRHVTAWYOGTTAKFCKWRNDOIMIMUWLYOMEBSUQQLPKIXEZFQVNXJUZWFJORGONNENCISLVEJJNJUDPGPGRRHKFIYEBXQQFXBGXSODYHBEGRVMDUUVZXLJSZNTHTFDAFNGXOPBYHAVDZQXWLFVLJOIJDIL");
    msg.last_error.assign("MWVITHPIWCHTLFXOYHYGHLGZJBWOVBFJAJRCNZCMQTUPWNJDUNPEX");
    msg.last_error_time = 0.4731887183722274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.19678779650995382);
    msg.setSource(39173U);
    msg.setSourceEntity(102U);
    msg.setDestination(5049U);
    msg.setDestinationEntity(178U);
    msg.mcount = 63U;
    msg.mnames.assign("QILMHOXDZNZEORJDUOHNYVSFXFGPTJUTFTVXKMAUGQSUFZAJSRQNKDEVIKVWZBZE");
    msg.ecount = 70U;
    msg.enames.assign("FBZTYUQREULPQCMLTCKJDKKIXMUWFJNRKAKZQCRIIBDMDWGHRJVUKGUCZGEXDPBVPESJRTRFIZIOVNDPHVWSYXGZHCHANPJLLEXFXCWUAXFVTMYJLHBUFFYMCD");
    msg.ccount = 86U;
    msg.cnames.assign("QZCMJYWPBRKMAWVJDOYZDUIPOIVLABDOIYHBLLMDZXWVJKYTJNTBMCKCFGDNAOWJZG");
    msg.last_error.assign("ZFZAOVHKXERJHNHIHMDSQEYINLRBCBTVPZSXLTNDJRKVYWZCRFIWDVEDULNLIXRAYBJCKPSTSWCCUPUGYOHVSQYCALTTWDTXODASPJEWOMLNWOJGOQEEQAKHCPJOAQITPSUNFIHVURBHRHMQTBYMUDIWMXGGEPKBAZYPGFSFQLXUCKNLMEOTDKSOCJOMGXGRXLKDYJTZJNFFAFISMABXUCVZWELPQHFEYYZVUINXDRZQVGRNZUQF");
    msg.last_error_time = 0.9885798793951018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.20909328630484858);
    msg.setSource(40614U);
    msg.setSourceEntity(214U);
    msg.setDestination(48046U);
    msg.setDestinationEntity(94U);
    msg.mcount = 64U;
    msg.mnames.assign("FQQXOGHDSSOMGVJHYZUIPKLFVHEPZVBVZDYACCJCQTGIAJKEEFJTCHHNWXIXMDZNKAOXKOMZWWNVPAORBTALNFRGPLGHDISBLBJAPPRBRXMLKCPJUSSBNOPMUHWYKGDQJOZCDJSAYIUBJXVXCWDTMRUGJXWLTMUFNSCVVYBNWUBRXUKWEZZIAQHFFNRLHWSORPGETCSEMLFTYYAITAMQEYORVRSFEZDIUQFKQZENQLKIKBTOMILDQNHWCG");
    msg.ecount = 224U;
    msg.enames.assign("HLEJXQEYXLFCZHDNCYAYPGMFTMVLFNRSIWQDXFATMINYZTCSSEGIGANJCU");
    msg.ccount = 136U;
    msg.cnames.assign("LTRBEYZQAEENDXXSQHQIEWPAKNNTHBIBSXREGGBMUODKYHSHCBLUBPXTMPYEMBQMECHRXRYPCWNXVIXWVCDDKLOTYGFWCGRLCJVJLIJQSEZGDRCAMPFZWRKLFVNWJZFBGZFOSSTEOIKOTUGUKNKDOXFPGKMRFZIUYRXAAPATOGDFJHWJIQLKMUMWCOH");
    msg.last_error.assign("QRBXNIUVDJAOSOIBHKBEKSUIEMJSUXAYNHGJPXJAIVPYVHLQOYWJMNGCXRHZBKSTFVIKOTZVMSTPOFMBEGDYVRCZXAEZQEVCFHAFGSSJWUPOVNJERNSTPWCWPUKIQCBWURQDLBYTILFWQHNALYSGIDHFCOGNDXHWBYIMAIPZJHYRAQG");
    msg.last_error_time = 0.6693361497710408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.1820639442792329);
    msg.setSource(58434U);
    msg.setSourceEntity(115U);
    msg.setDestination(28533U);
    msg.setDestinationEntity(87U);
    msg.mask = 224U;
    msg.max_depth = 0.08658013822244326;
    msg.min_altitude = 0.3166300708529036;
    msg.max_altitude = 0.5659205936763972;
    msg.min_speed = 0.3050223899951101;
    msg.max_speed = 0.48760559179361385;
    msg.max_vrate = 0.44695870777292823;
    msg.lat = 0.0807866519947773;
    msg.lon = 0.29711689342652947;
    msg.orientation = 0.9080005239865166;
    msg.width = 0.8298853146034627;
    msg.length = 0.8184675246424881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.7960139115092583);
    msg.setSource(12301U);
    msg.setSourceEntity(92U);
    msg.setDestination(50319U);
    msg.setDestinationEntity(115U);
    msg.mask = 232U;
    msg.max_depth = 0.23383561386856577;
    msg.min_altitude = 0.07880600715192987;
    msg.max_altitude = 0.8928654555230044;
    msg.min_speed = 0.42841466345403323;
    msg.max_speed = 0.093050403957737;
    msg.max_vrate = 0.7383580601905044;
    msg.lat = 0.3963287924324663;
    msg.lon = 0.20347326929220355;
    msg.orientation = 0.599662053372292;
    msg.width = 0.7915602365663765;
    msg.length = 0.4821132466016885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.5525117723030859);
    msg.setSource(47753U);
    msg.setSourceEntity(118U);
    msg.setDestination(15448U);
    msg.setDestinationEntity(85U);
    msg.mask = 232U;
    msg.max_depth = 0.14361900505257807;
    msg.min_altitude = 0.18807336395658203;
    msg.max_altitude = 0.4170452733832166;
    msg.min_speed = 0.8633621032423796;
    msg.max_speed = 0.792847229310066;
    msg.max_vrate = 0.12046674546788727;
    msg.lat = 0.5556386203463096;
    msg.lon = 0.574042201986621;
    msg.orientation = 0.5011793108144377;
    msg.width = 0.6806868680238609;
    msg.length = 0.4374461244988307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.4838226884947654);
    msg.setSource(5186U);
    msg.setSourceEntity(203U);
    msg.setDestination(63500U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.9172067599108976);
    msg.setSource(28514U);
    msg.setSourceEntity(195U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(221U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.2926228118567523);
    msg.setSource(48552U);
    msg.setSourceEntity(91U);
    msg.setDestination(5578U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.07124261857810543);
    msg.setSource(1203U);
    msg.setSourceEntity(153U);
    msg.setDestination(6206U);
    msg.setDestinationEntity(185U);
    msg.duration = 63784U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.034999339859409506);
    msg.setSource(19674U);
    msg.setSourceEntity(96U);
    msg.setDestination(8409U);
    msg.setDestinationEntity(162U);
    msg.duration = 49122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.6322106690694534);
    msg.setSource(9028U);
    msg.setSourceEntity(127U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(45U);
    msg.duration = 5332U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.12326972200986275);
    msg.setSource(18400U);
    msg.setSourceEntity(222U);
    msg.setDestination(30451U);
    msg.setDestinationEntity(108U);
    msg.enable = 83U;
    msg.mask = 283196970U;
    msg.scope_ref = 3329132871U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.23430527685485958);
    msg.setSource(42354U);
    msg.setSourceEntity(85U);
    msg.setDestination(65085U);
    msg.setDestinationEntity(171U);
    msg.enable = 128U;
    msg.mask = 2661146361U;
    msg.scope_ref = 2115207433U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.44789621756249);
    msg.setSource(14053U);
    msg.setSourceEntity(201U);
    msg.setDestination(2757U);
    msg.setDestinationEntity(18U);
    msg.enable = 58U;
    msg.mask = 1250980539U;
    msg.scope_ref = 1073993041U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.7058554343622031);
    msg.setSource(30675U);
    msg.setSourceEntity(185U);
    msg.setDestination(47286U);
    msg.setDestinationEntity(55U);
    msg.medium = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.30130867092097147);
    msg.setSource(27433U);
    msg.setSourceEntity(92U);
    msg.setDestination(9641U);
    msg.setDestinationEntity(157U);
    msg.medium = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.4155743617042478);
    msg.setSource(5721U);
    msg.setSourceEntity(172U);
    msg.setDestination(21694U);
    msg.setDestinationEntity(75U);
    msg.medium = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.9431248589117802);
    msg.setSource(23457U);
    msg.setSourceEntity(118U);
    msg.setDestination(41258U);
    msg.setDestinationEntity(186U);
    msg.value = 0.21038389716702455;
    msg.type = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.4179533936522908);
    msg.setSource(16639U);
    msg.setSourceEntity(208U);
    msg.setDestination(23981U);
    msg.setDestinationEntity(65U);
    msg.value = 0.008565819192035584;
    msg.type = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.09087655069407363);
    msg.setSource(39760U);
    msg.setSourceEntity(98U);
    msg.setDestination(50660U);
    msg.setDestinationEntity(48U);
    msg.value = 0.809623357015391;
    msg.type = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.6226341357356022);
    msg.setSource(38837U);
    msg.setSourceEntity(69U);
    msg.setDestination(54965U);
    msg.setDestinationEntity(219U);
    msg.possimerr = 0.966798221923542;
    msg.converg = 0.0781063236546996;
    msg.turbulence = 0.7282534498819713;
    msg.possimmon = 212U;
    msg.commmon = 139U;
    msg.convergmon = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.304161313920432);
    msg.setSource(3965U);
    msg.setSourceEntity(97U);
    msg.setDestination(48072U);
    msg.setDestinationEntity(46U);
    msg.possimerr = 0.06407252364915561;
    msg.converg = 0.9305353307749279;
    msg.turbulence = 0.7014476995100388;
    msg.possimmon = 87U;
    msg.commmon = 151U;
    msg.convergmon = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.5681420552070527);
    msg.setSource(63742U);
    msg.setSourceEntity(45U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(23U);
    msg.possimerr = 0.38967836296401837;
    msg.converg = 0.1434617812497314;
    msg.turbulence = 0.5294516086059233;
    msg.possimmon = 130U;
    msg.commmon = 122U;
    msg.convergmon = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.9577258583946939);
    msg.setSource(40394U);
    msg.setSourceEntity(229U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(219U);
    msg.autonomy = 26U;
    msg.mode.assign("RPBDYJUSADKJYXFISCSKBQGCWNYUMKDSTISZBEJYUGITFRWTRIIJEWFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.869255550278727);
    msg.setSource(26888U);
    msg.setSourceEntity(138U);
    msg.setDestination(27584U);
    msg.setDestinationEntity(221U);
    msg.autonomy = 55U;
    msg.mode.assign("CBZZEWQOHJNVKJEYXVRZTIAACDSZNMBZHOBNOXOFQIHTZIYPEQWSMIHUCROPCDDPRVLXZENFAAXMDJLNVSYFUKYPTPMYKXRMLTNQULZHHGXFCBRJSYHPJJGLETRVVTSIAVDTGWMEBBKDFRSCUWFPGAUGZJIUANKERBQPYRCCIUMDFDFWTHGSSGJFUOREAAIQHYTQXJGQKMMYVLIPJELZLKAGOQWNSDTCKDIXHUKXVBWWQVNWOSNLBLEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.6156614840171397);
    msg.setSource(21607U);
    msg.setSourceEntity(31U);
    msg.setDestination(53443U);
    msg.setDestinationEntity(231U);
    msg.autonomy = 177U;
    msg.mode.assign("YLLAJYDRHCAPZQYIEDMQKDRGMFUAFDFXLFEVBALROPNIAHNHZPSPIIDYWOTVWWEJCBNRCWIWVQENJSBDZAKLUOAGUPMBGCPNFGCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.6923648461922787);
    msg.setSource(62140U);
    msg.setSourceEntity(81U);
    msg.setDestination(44091U);
    msg.setDestinationEntity(172U);
    msg.type = 64U;
    msg.op = 161U;
    msg.possimerr = 0.43267189775593506;
    msg.converg = 0.8929838744407819;
    msg.turbulence = 0.03182081637619605;
    msg.possimmon = 161U;
    msg.commmon = 99U;
    msg.convergmon = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.7412662999488133);
    msg.setSource(57726U);
    msg.setSourceEntity(138U);
    msg.setDestination(3649U);
    msg.setDestinationEntity(141U);
    msg.type = 13U;
    msg.op = 219U;
    msg.possimerr = 0.3524273523642616;
    msg.converg = 0.01008410032967244;
    msg.turbulence = 0.2903945072688153;
    msg.possimmon = 139U;
    msg.commmon = 226U;
    msg.convergmon = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.6692408821970415);
    msg.setSource(37162U);
    msg.setSourceEntity(20U);
    msg.setDestination(61011U);
    msg.setDestinationEntity(178U);
    msg.type = 50U;
    msg.op = 41U;
    msg.possimerr = 0.5399891720509393;
    msg.converg = 0.6785123893785828;
    msg.turbulence = 0.5855340784889521;
    msg.possimmon = 156U;
    msg.commmon = 215U;
    msg.convergmon = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.32608007516028725);
    msg.setSource(31U);
    msg.setSourceEntity(143U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(6U);
    msg.op = 45U;
    msg.comm_interface = 145U;
    msg.period = 10103U;
    msg.sys_dst.assign("PHZBZFNINLQGTPDDPKGFRCFQWFWXDVQHPNYTMBWCKXIHEQROKTAELXBRJDFJCVOYVXESWEGYYQNCLSQLOIJKLZLGQRPQJGMSAESSDITCTOIVKDVFCZNRCYSDVIKHMCHBOOTAOMZHBWJGRHONXLAZBKPRVUJBKASOQHIAMJLJAXTQYIRHXKMNIASEEFSJGDUEZUPGWTGXDEYFPWCTPNUUHBIWUYUJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.9606530467314053);
    msg.setSource(53023U);
    msg.setSourceEntity(102U);
    msg.setDestination(49956U);
    msg.setDestinationEntity(204U);
    msg.op = 72U;
    msg.comm_interface = 72U;
    msg.period = 32397U;
    msg.sys_dst.assign("IIVZKMQTCIHVUFYZBITCQEAEKNZEAEQDOOSBACNZOXWXIFACFBTTLRXGZFLWPDRRCOKLTEUQSCPKOZZTSHRYHWKWVBSUFVTOJEGAJVPRZXGNMJPCIMDVFFXRGGRQDIHQEGHLTWHKXKLWPWMSNOSMOFXULWFRIQNPRUOYTBKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.2700007406707543);
    msg.setSource(44294U);
    msg.setSourceEntity(116U);
    msg.setDestination(15313U);
    msg.setDestinationEntity(63U);
    msg.op = 249U;
    msg.comm_interface = 75U;
    msg.period = 64026U;
    msg.sys_dst.assign("YOHCEDXJXGYSARAZWIHMPZDGELOETXWXLKUVZPLKHTGVCMOLJUZGYRADCLJVCIBTNGMLOOUMDSVZJIAVMEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.2942722430060326);
    msg.setSource(55882U);
    msg.setSourceEntity(82U);
    msg.setDestination(4413U);
    msg.setDestinationEntity(229U);
    msg.stime = 3612546364U;
    msg.latitude = 0.3483612324331046;
    msg.longitude = 0.6158030566338428;
    msg.altitude = 6831U;
    msg.depth = 31891U;
    msg.heading = 47593U;
    msg.speed = -11565;
    msg.fuel = 38;
    msg.exec_state = -120;
    msg.plan_checksum = 36102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.6772119212480344);
    msg.setSource(8212U);
    msg.setSourceEntity(229U);
    msg.setDestination(828U);
    msg.setDestinationEntity(114U);
    msg.stime = 3041724953U;
    msg.latitude = 0.4040131912128131;
    msg.longitude = 0.9492619935075881;
    msg.altitude = 6780U;
    msg.depth = 43968U;
    msg.heading = 54531U;
    msg.speed = 3146;
    msg.fuel = -49;
    msg.exec_state = -92;
    msg.plan_checksum = 59530U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.1854714431805884);
    msg.setSource(43144U);
    msg.setSourceEntity(55U);
    msg.setDestination(63171U);
    msg.setDestinationEntity(6U);
    msg.stime = 3016510515U;
    msg.latitude = 0.9443499597494565;
    msg.longitude = 0.7725732808838932;
    msg.altitude = 35306U;
    msg.depth = 14384U;
    msg.heading = 25855U;
    msg.speed = -11547;
    msg.fuel = -83;
    msg.exec_state = -76;
    msg.plan_checksum = 46541U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.9992762417794663);
    msg.setSource(40822U);
    msg.setSourceEntity(71U);
    msg.setDestination(16062U);
    msg.setDestinationEntity(149U);
    msg.req_id = 64316U;
    msg.comm_mean = 16U;
    msg.destination.assign("IPXYTAMWLDAEGBRXPTTNLBROLKXHMVPLEORCCYJJUSTDOVHZIMZVMFUCZTWOWIOBGETWNXBRBWHLDVBZQBZZQQZYPKONTJKFXMPKGAIJSDPYXCDNRHQZQWGQGESBTOQQDJSHNMCCKL");
    msg.deadline = 0.26666163404435117;
    msg.data_mode = 103U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 37541U;
    tmp_msg_0.custom.assign("JEERUKIZGRKNRCAURLZHYYFBCXOOVPUQJWONPJUQTEOVAEAVCHACCUAUZTWEADXVKWKTFNRMSZSN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XQERJBLKUTWDSMJVUBUPJEHQTPWJLANPYMHULHZRCIIPDXAKYWVNKBLMEGWCLADWQFSQOZC");
    const char tmp_msg_1[] = {-82, -103, 32, -94, 41, 20, -23, 98, -96, 31, 23, -122, -22, -82, 114, -66, 68, -90, -2, 126, -26, -53, 88, 71, 44, -71, 100, -95, 122, -81, 32, -23, -59, 59, 27, 67, -28, -51, -48, 14, -97, 111, 0, -6, -78, 45, -1, 105, 112, 36, -15, 61, -72, -105, -41, 71, -89, -95, 48, 41, 109, 96, 83, 117, 29, -40, -87, -9, 53, 39, 87, -18, 31, 29, -13, -118, -8, -78, 110, -112, -86, 11, 69, -19, 122, 9, 47, 11, -121, -44, -1, 108, -127, 73, -19, -89, 34, 17, -57, 85, -125, -90, -12, 98, 22, 83, -23, -19, -114, 122};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.5457296191228216);
    msg.setSource(12915U);
    msg.setSourceEntity(121U);
    msg.setDestination(58318U);
    msg.setDestinationEntity(171U);
    msg.req_id = 55408U;
    msg.comm_mean = 186U;
    msg.destination.assign("PQTFZMOOPWVUNPRQFEHISCZWTVL");
    msg.deadline = 0.042929187182384476;
    msg.data_mode = 246U;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 68U;
    tmp_msg_0.mnames.assign("PBNZIJYVJLPAKXJMODFEQOPTIHJPJPYZUQAXYOWQYSOREWLSNHDJLXUJBRISOJMGBCTUTFTOZHIBZJWAQMGEXGEQXMZNDHDCCGZVETNCXCYGNMFVYVPESCCMWQYUYTGWVWNZTNFSKXFRQLUFKOHIWBKLKXRWBDATLMJKRVRGHRVLOIBCADBFISSEGYRMZHDBYOAEQADSPLLWDKPTCHPGTVSPAIZMHCOVAIBKUMNQRDW");
    tmp_msg_0.ecount = 151U;
    tmp_msg_0.enames.assign("HJXKTICJRPXJBKWPTIEDMFEVJBIVJTQBUJZGJPSRAVONCGHRRASKBDNVCFFUOUWEBXSLBYEKTHLYAUGDQZRSBNLTUAFDJXKUUFSHYXDXWENADAOLCPPRIQXYVWEOZWXOCIELIVIWVEOSMMERIDOKEBSNPULPRTZHTHCAMFWMZHQYGLLKPQNNAGFYXD");
    tmp_msg_0.ccount = 138U;
    tmp_msg_0.cnames.assign("BCLSXANULPLTIUPEFVPMRZMSIGMKIDHQDNKWDWITWIPYFOPTQRKRFQPVEGJJWEQUMNJSZZBYLOCXIQSWYXRVDOWXHCJRPCJFQXDGUUAFNGYJZLAZXJGZPBMKSLHETSANABIOMLJQLVDKNCQDRSWJOQIZOBYEWPVWBFVENRAECCTHVOKFVPLMTKWYGNLMXKUDTHVGSKOXOETAHOCFNYRAMDUYIETHBHZFBYRNGCBKSRCXHZFIEMJGSABXUDAHZ");
    tmp_msg_0.last_error.assign("VFGMNYUQTNGYQERQLMOWJKYGHWJNEOXGOVDIYOSAABHUBFVNTZPNUBLUKAJECYRXPFEZCORXMSCTQNJOLWZXHAHPKDEZGMGAKZUNBNSOIJHFQDKRRLZYDLAVDNVMCJSQPSTBAZSWCFCIEJYHBDMIFZTXWLZJAXOQFTEWQUWMPDLJRXHCLEBVFUWHHDLEODPXICGHIBSABYSMWIWUPKTKKRVMKII");
    tmp_msg_0.last_error_time = 0.18866394601610048;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RWDBUUYNYCJYRINTHVNXBIXGOKOAGNDRKZIFBSWUCKHAXIJBAVZOYFZQGUQZ");
    const char tmp_msg_1[] = {-51, 120, -113, 81, -76, -36, -74, -67, 87, 3, -109, 21, 9, -71, -75, -105, 45, 105, 8, 58, 104, -109, 12, -124, -19, -9, 89, -26, -35, -12, 44, 100, 29, -52, 0, 13, -93, -20, -128, 62, 14, 67, -88, 103, 53, -41, -82, 75, -105, 77, 115, -40, 33, 66, 5, -105, 102, 73, 65, -107, 91, -77, 78, -61, 71, -54, -104, 16, -116, -69, 38, 67, 80, 109, 14, -26, 78, 4, -7, 27, 90, -105, -25, 13, 118, 75, 36, 101, -43, -106, -114, -20, -103, -20, -30, 95, 50, 56, -116, -64, 90, -38, -64, -82, 117, 38, -103};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.981166807928295);
    msg.setSource(15720U);
    msg.setSourceEntity(97U);
    msg.setDestination(13095U);
    msg.setDestinationEntity(111U);
    msg.req_id = 8022U;
    msg.comm_mean = 163U;
    msg.destination.assign("IMYGWQOWLKYLCMJTPSUQPTOJQXIPUSXMUHZRMPRV");
    msg.deadline = 0.43363407533860476;
    msg.data_mode = 2U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.8070221377719048;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VKPUQUZAPUIIBCONNHXWLNFXKOWQUJSYKZVIXJBMYRBAFYRJLEFDLFKJQWAFPKOBSGRFMYVZUMDZNEOAVUXNOHVZZAVNTHRLPBYUVSBKCWNPWVLMCROKTCSCFGIMYIZZKEPAGHREJDLIQDRCMDANRDDTEIELTQQYUVSFXXHCTIGRSWJOEGGMLSMDTEWRKGFGVNGCOLPT");
    const char tmp_msg_1[] = {-35, -108, -101, 13, -6, 0, -80, 121, -75, -127, 39, 94, 103, -63, -22, -8, 111, -86, 106, 112, 45, -26, 39, 38, 72, 106, 27, 96, -98, 77, -27, 113, 69, -78, 121, -121, -13, -83, 72, 67, 18, 45, -22, 73, 47, -74, -30, 100, -15, -11, 72, -35, 24, -54, -37, 93, -108, 113, -60, -65, 82, 103, 9, 53, -92, 112, -103, -106, 83, -77, -109, -14, -123, -14, 67, -74, -102, 24, -64, 102, 37, 1, -62, -64, 113, -21, 39, 103, 32, 119, 50, -47, 123, 2, -126, -52, -1, 66, -12, -88, 17, -22, 49, -126, 19, -116, 38, 121, -24, -54, 113, -75, 107, -60, -117, 7, 105, 66, 82, 12, 9, 67, 109, 55, 76, 62, 88, 64, 63, 31, 69, 73, 88, 124, -127, -70, 31, -32, 5, 116, -110, 20, -70, 11, 69, 26, 118, -108, 53, 115, 71, -66, -72, 13, 118, -42, -65, 53, -117, -119, 64, 32, -36, 108, -101, 63, -71, -45, -98, 95, 7, -98, -92, 104, -1, -54, -112, -89, -7, 55, -37, 88, -103, -17, 103, -65, -69, 93, 2, -86, 19, -88, 25, 125, -113, -82, 117, 19, 40, 46, -114, -85, -110, -11, -34, -111};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.3662135592406557);
    msg.setSource(61480U);
    msg.setSourceEntity(92U);
    msg.setDestination(14051U);
    msg.setDestinationEntity(105U);
    msg.req_id = 55070U;
    msg.status = 40U;
    msg.info.assign("TXOBDOTVPACFXWCXJNCCMHINYBMSQPOIYAZXZJSUKGFYBMWJGXBEKANURWGZLQRVUKXQGGTLNQYHQBAZOFCRUWJIFKLKPTKCQDOLLRONKPZXTDHYDOJEFBMBWEXHILWQTEBOVMSAYWFGWSVLTNEHJERSVAHRFDCMHIUPVAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.1000977685292308);
    msg.setSource(2786U);
    msg.setSourceEntity(192U);
    msg.setDestination(18423U);
    msg.setDestinationEntity(36U);
    msg.req_id = 46151U;
    msg.status = 235U;
    msg.info.assign("BTFJSUJKJOXTLNVPWMHBXFWNCNFHSWTCFXGSCDLFAEBXYBGNDKZFSGDJMECZXOODSYNQHANTWLVGRFRQISAMEWARSUPNZZKMQMVLXBYWDZPBOTIEGZXAAKJMDRPMPTPAYUEOHTWJHVDGCYGQUQAMYYPQLHUOLQKICFRUTCXKCEAVIFGMLDYSQKKMTZPOZWEYINWDLQBVDJVRHATIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.040587792851282445);
    msg.setSource(30005U);
    msg.setSourceEntity(55U);
    msg.setDestination(9386U);
    msg.setDestinationEntity(249U);
    msg.req_id = 44613U;
    msg.status = 244U;
    msg.info.assign("NQZZFJPUWYFEIGRRTXNKODWQSGYZKQYLBJITRGLAYPQPIZBQSVCVXOZEWALQTANPSGEXDMPNLEGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.5518446113468848);
    msg.setSource(56596U);
    msg.setSourceEntity(179U);
    msg.setDestination(27201U);
    msg.setDestinationEntity(230U);
    msg.req_id = 10662U;
    msg.destination.assign("ISALKZBLTHHYOBBWZEGHGXUUWPHOSDISOVRPLCHKRCMFTJODLXNXBUVXNGTJUJEPYIDIXAJVVALWPRPZIOXULQMSHPGOZYUDFZMGEVNQTVRCAJFBTGHPADXNPYIHGYEGCRCDSLN");
    msg.timeout = 0.34852984421945743;
    msg.sms_text.assign("FLHKGQCCXROTWDHVWUIPQUJSATRDGRHPJDOVVOBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.21021046005901367);
    msg.setSource(44672U);
    msg.setSourceEntity(175U);
    msg.setDestination(54218U);
    msg.setDestinationEntity(143U);
    msg.req_id = 29055U;
    msg.destination.assign("BRSXMCYNPIFNZOKPOFJTADABQNFYDGHGAOWIPQPJILDKUTTJNBCUYXZLAYNIVERQIRXDCPKICPCGCWHKETTHSZLMXANGMOQTSDZLFXSCAMLQBDQDKRJVAWPULOJQDTKIZQHLXVECSKVOUNX");
    msg.timeout = 0.06935757631041894;
    msg.sms_text.assign("GNIWTZAYRPWTUZTEHRLLUYXVRUMWLAROTVUDSCDNXSGVBYGWFLUVDGSBEWNKASCPBHMKQXHPDJKCUGINXJVBKLEQIVHLPRBQWLVHAREJZWHIZCPPOPNOOMEIDRYVSJOXDZICFSKVOWDFUTMZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.8752658125383089);
    msg.setSource(44272U);
    msg.setSourceEntity(182U);
    msg.setDestination(32572U);
    msg.setDestinationEntity(93U);
    msg.req_id = 50275U;
    msg.destination.assign("YAOUQVZJCXYXPJUJGHMNFNKIOVFGKHHCREOAR");
    msg.timeout = 0.36823345862891754;
    msg.sms_text.assign("YFMDMOHOWTBLCLKQTZFEVYSDUXXYBBYUNILRZJSPKMESCSXULDUQAEZMEZWDPAWJBQUGZXPWEHIRQQZVXSCLTTJAFOYXIQOARMMZKWSFCDERNPHLSMOMBAIGPNYAXEPGDQFLIFJCPHQPARNIMOJATUBHNDEYNEFJVFYIOVGWRSKDTIUDHHSZAYWCOURWFNZTGGPMJTKCPWFKBIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.4489036477573676);
    msg.setSource(37885U);
    msg.setSourceEntity(164U);
    msg.setDestination(24228U);
    msg.setDestinationEntity(182U);
    msg.req_id = 37538U;
    msg.status = 230U;
    msg.info.assign("OWSVVBNMPWZDIJGSWLIHMPDHICYCZXHQEOWIKYGFLJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.24232222298685613);
    msg.setSource(10719U);
    msg.setSourceEntity(40U);
    msg.setDestination(60778U);
    msg.setDestinationEntity(119U);
    msg.req_id = 18482U;
    msg.status = 78U;
    msg.info.assign("MWLPDHRFIDLDWYVCVTRTEAPBBNCXHWQJXHWLOWYFAPJXSAGJXBEQXOMQSRFOTFLSYAMOGMWPWZDUSFMACXTGKTPYFLGEDWSUMACRNEEEJZPTLEZMIRIHKRVQCGUIVHHKSFGSZMJQXPPYDNSHLAINRNWMTBGZKYUOOUSGYUAVKKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.09681702490647448);
    msg.setSource(32029U);
    msg.setSourceEntity(45U);
    msg.setDestination(44650U);
    msg.setDestinationEntity(70U);
    msg.req_id = 45739U;
    msg.status = 221U;
    msg.info.assign("ZFFSEDHOCLAQPXOKFCWFFJCTMEOAPGYGEYBTIWSEGHUOPXDWFIGMVMERXMZLXMBBPQGCNHTDZTXILPABHTURKKEUDLOGJEYFYQUISETDITZBKTVLRLUKWMNBVJYVXUKUZZIKGISSTJONHQPYAQJBARCIAPNHDOWNXZXQJWRTWMVZOZLQVYRPCQOUVYEB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.014617533673718541);
    msg.setSource(25322U);
    msg.setSourceEntity(244U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.43590095549359176);
    msg.setSource(45326U);
    msg.setSourceEntity(11U);
    msg.setDestination(52163U);
    msg.setDestinationEntity(22U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.5988883659217531);
    msg.setSource(380U);
    msg.setSourceEntity(106U);
    msg.setDestination(28729U);
    msg.setDestinationEntity(75U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.6866311931687218);
    msg.setSource(3251U);
    msg.setSourceEntity(154U);
    msg.setDestination(21109U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("RFBLPQFESAZEBYHKKVCAOLRYIPEHNGSEAZFWGKQXYEPHWKVMNSLGMDUKGQCSLGCSRKGADFYXPDBPJTLVBJJSCKGJRXJTQKUWOPZYZPMINPXQJWFZAXBFWMRUCZTIRHHOMTIUZUNNGXYHXBCNCBFVYHIDORQZSNFMJLUYQYKMWNMHFOVSOGTXWDDU");
    msg.description.assign("CGADIZLDKXPVANFFUIDEFDCSABOMYYQITFOQUEERTELTQSTNQQRCTXHSMDWPLSODGJJSOYJYZCOWZKOQNYGLEFXWAZDZHREOBBRAZIIGBUXEPNMYIACUHJARUQTHVNLBTPMZWYYRKCVNUCFNSUIBXMEVIJKSRUOCZBPDSTLYWSQGDJFODBIPVGQLHJUZVMHJIRMNVKZNHMFVEPXVTWGXWBVALKKXJLOSGHHNRFWHLXFMKURMYEGP");
    msg.vnamespace.assign("UEOMQMDYRNEQSRWNICADXWSMPVCZNTYHPWBEBWJQZXIMKTLVQCUZBZHPXFEABUPSCIONTDDIMGDH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EXDLHAKWOGONBGVCFMDRWXZZXZAQAVBHFQYUEQPBWJZXMUZOHWWBRKSZRWEYJOVMVVOBEVFLZJPUMXXGOIHQPHDKKLKADKPRQCABORCTSENRECJHFTSMAGNTLPSCJBWUNAQNDDOQGKOIURXLMFJGSNXIZSPFRIACBEXLSZIGFOYITCSQHEDPIJNKPYVRCUNVSNYYRWGCTKMLAIYLEGTVMUDMIUVWBU");
    tmp_msg_0.value.assign("KICOINOJNPWMTYFXEQDCBXAVXWDWECBIGKYHEUSRZSGMBYUHHDCHKQQOPPABJMCXLTILJNYJZKDIYPETSZJFMKVZVQVTOONDWXMZSGQBAJEPWQNURXTEAXRYIFMFRXSIDOHHPTVAHLZLLVRWJDDGDLOFZPQVKRKUZVYSWHTYUPKDSXFJSLHU");
    tmp_msg_0.type = 79U;
    tmp_msg_0.access = 128U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GYARECYCHHTTTCZKUSQFVVIKSPGEUXMPJQDVSHKMKSYBCBUAFWTONBXIEBYFUPWYGIKQJAXTYBRDOMIKYNOILWJBWGXRIXEBZDHRIGZFRCIQMNQHCWWTZSO");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PERHKNYAHFJ");
    tmp_msg_1.dest_man.assign("PNMCIYMTBVQDRVUCMEWNBSMVRJCKGZZZSIJTEAQXWFOYWHDNKVZHWWAFUXSRBKQNECOQJUELCMHQGXJXJUMBQOZCANNYQNHZGDBLWWXDOHJVOJERHDWKHQSGMXDYGEPNMOOKZMYPXYLOQYFYRTPBGBOFANGRAKAIIDZGXUFBJOIKAGLVRSSUZHSEIDPRTGPEPPLRLNVIJFWIKTLWMDCAXLCHQLTYJYPXEKAUFAHUBTL");
    tmp_msg_1.conditions.assign("RAMUVBFTAIBODFLR");
    msg.transitions.push_back(tmp_msg_1);
    IMC::RestartSystem tmp_msg_2;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.20679848219445107);
    msg.setSource(40650U);
    msg.setSourceEntity(40U);
    msg.setDestination(18101U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("EPVGGSIHKXZILKJCSQNXGZSVRNMSXHZEAFDCTBWUNQIJOHABAEPLXQSIMOJLCFEGYGOKLQURCRUPWZODQJOLJGHLYOHLEJNVPKLYARCWKWKDXAFCJZFGDHVPAXTTHWIQAYVYPPTFYZDTXVOTUZSPLBWMCKRRQGDCBD");
    msg.description.assign("HSJHKAQMDDCUZIBLZBZDLRCRWUBENNEQEYNGBEPSJVGPABQQEIKGSQEVYVMXXDBCPIXLJOXYBRRTSHAWRFHFGHRHWWRBFRFCGFVCXRCWZGVOWCNJJTOCBMIXUDZJTVMCQYEAZLWLTKPQOOKKGLNVVABQUSWLFZANMDZPJAISHPXNMOIQNPGAITQOXLYCFYWWJTNLMUVUSMTTINYSXSIDYHHKKOA");
    msg.vnamespace.assign("GLHKXTADARWSASWPNQTGJGOOMUVHRODYEYJUWXVUBCENUIRLMCXIVCZURMLMPBNWFEVVIWGGJFRHDVFSQZJWMIBZCUZZGKAQOSQXFIESRBZMFOYHKFEXTGYXHSPTDVQJZNDKRZZVNNEKRAWTOMWMSYHSLYILYBCJPDCUARIDPUGMXMVLCHCTBPAEUKQWPNHKTESYIGORCFAJOZQGADYDII");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FWMHKUJVHGJVDQEBGMOFFORZBJWAHOTWURIZNPMCECDNMXXKOQMUQNHLTZGLYFKMAYPCTWQYSFOBNNDZUTIONLYSPDASMDPLJIYPIOARTGDUUTIBLEFWRAHSINGUYBKRPMHE");
    tmp_msg_0.value.assign("DXMJGEMUEXMUWCCLJFYARVGVHBHKCDCNYARWDHGPODGIRQXJTWIDOUPRPOLORJYKJGQUP");
    tmp_msg_0.type = 167U;
    tmp_msg_0.access = 35U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SJMQUTMTMCLDUTRESAFRAMMDXJLQNIDXCUIJSKWKUAVVNKXXXZSRDNHUZZMZBHOHGJCVITSIMACCDDZAOMBIOFYMKSPQWTFBLTNJDRSWPVHGIYMZIQBUJYWYRCGIFOVBWZAGXEXQGNEVYOQAJHFQEGLVBBAWLWPOGPEHPLGVLOYEBWCLBJOJRJURBESPNKQPFVKDWCCYHKQEPHSFZRE");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IXKOYTLLXJRAJZNDHJTCQCXUXEBZHPLDOAGOGKRZNKAPRHVKMYKRUFZETNWAYBRQTCOALLQHGHWWECUWIFMQBKXPSCBCJFSUGKEJOYONHCYEYTQORBFSNFMHSMAQHMKDRTQSNMVYBPNQGLSVZYGILFIZAPRLASVCXYGJZMWNPMYQDAWVENBFDOIMSAJFXVBHLJPWSQEDZFGUU");
    tmp_msg_1.dest_man.assign("TUJSNIIEJTYMEQEIQPCARYFOHKDSMXDGOF");
    tmp_msg_1.conditions.assign("MXZMFOQINCSQYZFVNIGCRXRWULJWKHIPPFBMWTQNTANNCXOYKFMRZHJYUOJQTGDMCBAGWGNWLFYFJEIDKRPRGCBPNATOQDVTEXLSTBHRMSSAIRMYQVWAKHUORD");
    msg.transitions.push_back(tmp_msg_1);
    IMC::MagneticField tmp_msg_2;
    tmp_msg_2.time = 0.4559597152403121;
    tmp_msg_2.x = 0.6415269430999635;
    tmp_msg_2.y = 0.4458502490500875;
    tmp_msg_2.z = 0.0025032746266208106;
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.7972797240639824);
    msg.setSource(54084U);
    msg.setSourceEntity(159U);
    msg.setDestination(45514U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("CSCMCXLXNMZIIVFINBTPHTSDZKEVUKYVYXOOJV");
    msg.description.assign("YTDYXQOBJIFNPBHVROYGARESMKEHUUDOMLBDLVJYIODWBZUHZPAASCTXLJMXPUYGXEHZVFIBANQWWZCBPDENQQZZDZRFEOZDHIGLKNRKDGSVPJYE");
    msg.vnamespace.assign("IJTESVELHVFIXDTUWIBFWVTTDLK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XNYEKTLMSKLOKSMOHOPFFPOYQQHLAACXDP");
    tmp_msg_0.value.assign("TTTLQYLWBXFPGOSOHQLPLRRNCXLSNOEPMOZLUZVJXQZYNQHIHHEDDLRINBFDKAGEXMZJTRVVJTUJYPVENEQXZPBKGCIANIGCKOGRJSIBKNRFQLTMQFYIWBMUCPAFYM");
    tmp_msg_0.type = 107U;
    tmp_msg_0.access = 203U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UVBAPJXMEZWMWOQVCLCQHYFKQRUZPNUROWLGKFIRCWKXIZJTILZFIFBSKTGAMRJLGVADZOTUJSWNVLJOZYHECNVPNBETEDXLDIVLQXASBJPBUQXUHOWZOMLOVSFFHYKHQSTQNWNARAYJTGAKPDQIFTUZDNHRAMNSDFOIJGCCU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JZSNINMRONCZPCZRRLHRGXVBTYMCHSIRAHHJJAGJUIWZAYPTKEPUOQFIAXREAOBFLCFIFKYPVUYLBTFUOKEFJDIQWOCEWBLDCNUCDUVNLUYGA");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 22680U;
    tmp_tmp_msg_1_0.lat = 0.5889551334528197;
    tmp_tmp_msg_1_0.lon = 0.3238025826768559;
    tmp_tmp_msg_1_0.z = 0.1708738637066305;
    tmp_tmp_msg_1_0.z_units = 151U;
    tmp_tmp_msg_1_0.speed = 0.8457324746175269;
    tmp_tmp_msg_1_0.speed_units = 182U;
    tmp_tmp_msg_1_0.bearing = 0.17528468735708036;
    tmp_tmp_msg_1_0.cross_angle = 0.22901621376027193;
    tmp_tmp_msg_1_0.width = 0.5635123726705896;
    tmp_tmp_msg_1_0.length = 0.6746252299172261;
    tmp_tmp_msg_1_0.hstep = 0.5519161279592271;
    tmp_tmp_msg_1_0.coff = 88U;
    tmp_tmp_msg_1_0.alternation = 0U;
    tmp_tmp_msg_1_0.flags = 242U;
    tmp_tmp_msg_1_0.custom.assign("ZAWJECTLABNKUMESSMAKXCKQGGXNGJIIRAPKISXUPONECPPOLKBWUYNMBEMEYODTASRCHGUPOZNYBFOYKFCIUQQBPFBLQIHMREK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LblEstimate tmp_tmp_msg_1_1;
    IMC::LblBeacon tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.beacon.assign("AOLWMYURBKFIFQSMYKZBJCUVNMGIIDHGQOMRVMBLVHNNHFEAYDDJAIANIYZHHLJWKVQECWFTZSRCBOVTTNRQJEUVC");
    tmp_tmp_tmp_msg_1_1_0.lat = 0.9702248506219556;
    tmp_tmp_tmp_msg_1_1_0.lon = 0.06013466749494889;
    tmp_tmp_tmp_msg_1_1_0.depth = 0.3267090984071973;
    tmp_tmp_tmp_msg_1_1_0.query_channel = 237U;
    tmp_tmp_tmp_msg_1_1_0.reply_channel = 234U;
    tmp_tmp_tmp_msg_1_1_0.transponder_delay = 232U;
    tmp_tmp_msg_1_1.beacon.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.x = 0.3486398325375998;
    tmp_tmp_msg_1_1.y = 0.8450894930539089;
    tmp_tmp_msg_1_1.var_x = 0.9441853728904618;
    tmp_tmp_msg_1_1.var_y = 0.26346045699429466;
    tmp_tmp_msg_1_1.distance = 0.5718223681019737;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Acceleration tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.time = 0.5694458680205782;
    tmp_tmp_msg_1_2.x = 0.2915900024432799;
    tmp_tmp_msg_1_2.y = 0.7453744926298732;
    tmp_tmp_msg_1_2.z = 0.6036065989826109;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ZLUMDVDBNNXZRNDFVGIKTXGJVGEYKLTUUZRLOMKNAACRPIKUVENHHRYAZTXBRWYYXCVNWDXIXDIJOC");
    tmp_msg_2.dest_man.assign("PIDWVPWNHVEOBJMXZQUHGLLBKGETXSXLAAGNPBBBZFHCQGIITPYOAUBLHTTHGLH");
    tmp_msg_2.conditions.assign("KAZTIHRDBRPNNOLFQDPUSCPASVUJFEIHCPLOTISLQXCCYETPMJHXPJMLHBWAMCLMWFDRVZIUWDWQLTBL");
    IMC::IridiumMsgTx tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.req_id = 61390U;
    tmp_tmp_msg_2_0.ttl = 27908U;
    tmp_tmp_msg_2_0.destination.assign("HAQXKMIDRGLFRBCNSKKNSGDAEIT");
    const char tmp_tmp_tmp_msg_2_0_0[] = {67, -28, 39, 48, -105, -89, -5, -109, -92, -99, -81, 4, 24, -20, -27, -2, -126, -102, -119, -106, -46, 8, -66, -92, 77, 55, -14, 120, 51, 99, -55, 81, -68, 22, -62, -104, -120, -44, 32, 90, -54, -34, -122, -12, -80, -103, 4, -16, 113, -114, 71, -106, -65, -98, 119};
    tmp_tmp_msg_2_0.data.assign(tmp_tmp_tmp_msg_2_0_0, tmp_tmp_tmp_msg_2_0_0 + sizeof(tmp_tmp_tmp_msg_2_0_0));
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::EulerAnglesDelta tmp_msg_3;
    tmp_msg_3.time = 0.05206938448460008;
    tmp_msg_3.x = 0.2860966594546719;
    tmp_msg_3.y = 0.4415184029400423;
    tmp_msg_3.z = 0.44475106930544217;
    tmp_msg_3.timestep = 0.7079693695754855;
    msg.start_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.6245019838846078);
    msg.setSource(32986U);
    msg.setSourceEntity(132U);
    msg.setDestination(38772U);
    msg.setDestinationEntity(44U);
    msg.maneuver_id.assign("TUIEDCPLAQCN");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 21925U;
    tmp_msg_0.lat = 0.17428499674477116;
    tmp_msg_0.lon = 0.7533731712094673;
    tmp_msg_0.z = 0.6282388073605896;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.910768641768541;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.roll = 0.9458039908613467;
    tmp_msg_0.pitch = 0.7461694814593598;
    tmp_msg_0.yaw = 0.0638207666412397;
    tmp_msg_0.custom.assign("TWRJJPGWZPEMQEMAFMQNUACGPPEYDGTHSTMMLIURARRSQAWBNAVXTBTCFFPPAYDFJXMQRQUUKVXWLHFFYNELDTQBMTUCKWYOXOXKISDTNBFOCWEZJCXHIFDFIGDSMRAXVJSQLUJSZZLCJHAHLBIINGEPGOYOLVYRKBDGHGQKYWZEVUPSDXXSZZIBB");
    msg.data.set(tmp_msg_0);
    IMC::LinkLevel tmp_msg_1;
    tmp_msg_1.value = 0.37300126370115905;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.6940470240858381);
    msg.setSource(35731U);
    msg.setSourceEntity(69U);
    msg.setDestination(57825U);
    msg.setDestinationEntity(105U);
    msg.maneuver_id.assign("XDSLSWQKERIVFKRGATTJZLHHFYWTMSZQIMEKSITBHFGNPJRXVZSYWXRDKFODOFBHCKUOMCESZTSBGEQNAPGLXDWPWBPENABEFOLEQMTXDJCUJTLBWRCIOTSIPCVJLVBLEXYRGZQCEHALLTWGQDAJRKIMOVYZCIAKRYZQVZUYK");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.9727807590918089;
    tmp_msg_0.lon = 0.17190720742828836;
    tmp_msg_0.speed = 0.6770616700409252;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.duration = 23198U;
    tmp_msg_0.sys_a = 58299U;
    tmp_msg_0.sys_b = 34917U;
    tmp_msg_0.move_threshold = 0.672937900494726;
    msg.data.set(tmp_msg_0);
    IMC::SetEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("CZJFYQWJYVEYFJZAERSPIULB");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Formation tmp_msg_2;
    tmp_msg_2.formation_name.assign("HUBTYBJVWCLNCJSNBJGTRGLYYXYNJXTBGSVJKQKIBLGMWWWRIMCSIOYQXJZDCOAMKURBXQTFHAQUKVHCSVMEFGGDGSDFHSDCPYOTCSOMLFGJNAPUAIAEHCRIPNNDKCEARAFADZAMYNVRZKHPOQNEWZPDJIPSORP");
    tmp_msg_2.type = 248U;
    tmp_msg_2.op = 232U;
    tmp_msg_2.group_name.assign("VPDYYUIXQKJQLBQXLHKMKQTVFQPIHRZWUIJWSQWPOSNMVIBWRZAPYDMIDBORXKECGZTIDQDFUCYEWDHENEFYBTZOPVSBPLFSVSQNFTTATJCNGNWJHZMZDGLBLZYXEVCASGPBTWDPGEGJUYMLCKAVURFBVEFLTCAOSAXXAUKHQUZBTIAHMHZJCWOKIIREOBCWUMORCNG");
    tmp_msg_2.plan_id.assign("MQCIKIHXOVPKZCHBCKNIZGEBVXYEOSDIHT");
    tmp_msg_2.description.assign("TGUFVTUWWDFMMYMSDCJDGVHKLOUSCJXCXHRZEQNOJNMXHUWOJBMWRPXPAZRJMLVHBETCBQPAVZOHTVJJPNWQSMXSGRFDYTVMBLYCBSNYIPXGEHRVITUEOBDEEJXQQZWLTNMLZAILBAFEIHFKHDTALRQROWAPENGXYKUUISBQBKZACNNBXZTKGACHOUDFFGWIYQOQ");
    tmp_msg_2.reference_frame = 193U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.vid = 8438U;
    tmp_tmp_msg_2_0.off_x = 0.10917480534000112;
    tmp_tmp_msg_2_0.off_y = 0.53697844484855;
    tmp_tmp_msg_2_0.off_z = 0.09895638239878746;
    tmp_msg_2.participants.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.leader_bank_lim = 0.13368370558995668;
    tmp_msg_2.leader_speed_min = 0.21754894167872996;
    tmp_msg_2.leader_speed_max = 0.261973007413019;
    tmp_msg_2.leader_alt_min = 0.8925266987621902;
    tmp_msg_2.leader_alt_max = 0.05645270454901308;
    tmp_msg_2.pos_sim_err_lim = 0.1709019108390173;
    tmp_msg_2.pos_sim_err_wrn = 0.5069434573604292;
    tmp_msg_2.pos_sim_err_timeout = 36643U;
    tmp_msg_2.converg_max = 0.5148547005674511;
    tmp_msg_2.converg_timeout = 54912U;
    tmp_msg_2.comms_timeout = 25651U;
    tmp_msg_2.turb_lim = 0.040481875315787286;
    tmp_msg_2.custom.assign("ECVJDXNNSTLVWHXEGRPEINVCDJBYLJAMGYXTHRTWUAMEDREHQANOFYEYIDAZLUWFWIDOCOQETJ");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.9653145122969402);
    msg.setSource(2222U);
    msg.setSourceEntity(83U);
    msg.setDestination(7156U);
    msg.setDestinationEntity(222U);
    msg.maneuver_id.assign("MEBHUFGGOAQCRHRRIXTHQKMTWMMNGTZNYMKBBSPYACVEUYQLQBNSPYYLXKVEQKOCBXKRXXCPJCWGTBFFPXVATJORDTHECPVLJRYGBOIJHOVTIDLDDJSWIMQWXGDGFNPJKMVGVZLFTTWAQNUJCZESAGDPQUZB");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 38075U;
    tmp_msg_0.lat = 0.3162580733232808;
    tmp_msg_0.lon = 0.757421083188365;
    tmp_msg_0.z = 0.849854580607516;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.duration = 50822U;
    tmp_msg_0.speed = 0.12330331244618975;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.type = 130U;
    tmp_msg_0.radius = 0.13850626656541687;
    tmp_msg_0.length = 0.4498046565378595;
    tmp_msg_0.bearing = 0.26955408140886084;
    tmp_msg_0.direction = 250U;
    tmp_msg_0.custom.assign("UPIEMHAJMACUJZDDGZFFJQFYOXUMWCLXIVFEEBLNXHOXQPQPIYNSZKQXCNRUGJEJDBDTPXNKJPYXIYUGYVM");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeading tmp_msg_1;
    tmp_msg_1.value = 0.08578927768478783;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticSystems tmp_msg_2;
    tmp_msg_2.list.assign("YDTNYVBMILNWKCLLWOCITCKFWQUHVJCRLSEJXSUJEZEHQUUDQFOOMDNCSHJDORCIVZPCBWAZQLPVRBSXYUNXVPUDXOEAXQTWJZEWXMYJAFHGIRSQJLONLBTYGAUHTPEAZYXZQKFPFGSIXKYOHCPIWEBMLKSVFVFNNPDEAOVWIRRGYMABDQBSMAQKCLATKVYLZUMPKVDC");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.6119591237607398);
    msg.setSource(35634U);
    msg.setSourceEntity(207U);
    msg.setDestination(59657U);
    msg.setDestinationEntity(14U);
    msg.source_man.assign("BXXMDMHBANXHPOHVOAVWGIEAPMVERGKYGLBGXEZRCETOUADDTWTOOOJQXFDSLGXDTRWNGZWQJYLZZPECXUOFJCISYIYDFTIDCQBXQWKYCQSLIJYWDBULMHHAQAKUICIXBFLNTJUBVNPYKMJZPUOVSLYMRPKJRKNHYNOLVSGFSNRTTCJPSVBVAUSUFKJCFVWFAJIHREPKHTIUAEBNLZZPZMCYWLZDAZURIKE");
    msg.dest_man.assign("DZMPFVSABHJUOFORJCHNGKTJKQUCDEVDBOZAL");
    msg.conditions.assign("NBFZGEXSURVGOICTYJLLMHEYWGNKHNTDISPTKWBWLXXRXUUSVCNQABRCRAOAVRAUWJTMIGXIASIPFUHJEFJRVSDDYIZDSOUOLXDHWMZZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.5997878797367395);
    msg.setSource(20646U);
    msg.setSourceEntity(192U);
    msg.setDestination(58303U);
    msg.setDestinationEntity(90U);
    msg.source_man.assign("IJLDMPDZLCKHGGCDWWAPRIXNOWKTUJXLUYPZXHJTTKJRZQJTCMQPOPSVNWGUIMQOSHW");
    msg.dest_man.assign("OYVNLQLYSEQLUWPPUPLJEQOAVHRNAURHMSIWYERCLMSZSZAGFDONUTVPOEGPTICXJZICAQACNKDFTCSGGGOZHQOTMWDOGFZINVIEHVKHJHBAXQZPEMWUCRRWNUUNDYYDVIFBR");
    msg.conditions.assign("UKMPBQZVHVKVMVHNLXPLAHZIUDCNEGNSFVJDDOUFAKCFWGAMZNIUEFPQICOKRYBXPONTVIGEYLZCMEYQFTDOFKHHWXCGIJXHMSYYLBZLLQGQADOUJNDPQYNCBWYWURS");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 183U;
    tmp_msg_0.plan_id.assign("XTLKVWZLJOWLTVKOJFIABPBMRBIREBSRXJCGMMOTFQBGTKCURCRIGPMUFPUCSZETEFJWUHSAQYXLZXTDPJBSBPPCIGAOZNHRBTSYQGCEVMNNEHLVXAENFJAENLEUADYUFXYZZMGHXKHMDQHEKKCIYNYPHYUPECCMKOUJFXNLWLDDRYRKHSWWVGTRDKRSZVQDWVWSIIIUUZAAYQOVDGQTAFMLDOWXJNGYJISHKADIHTOJVQVZ");
    tmp_msg_0.comm_level = 211U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.6198023874004169);
    msg.setSource(45720U);
    msg.setSourceEntity(200U);
    msg.setDestination(38215U);
    msg.setDestinationEntity(134U);
    msg.source_man.assign("TCWPDEFERNUHFBKSLHZOTTHDIIJZMQMEVWPDPUGFLLZPAKHQOIZMRWATEOCEDUSWNVJMOBDLHIPJTSNENOJPYVLBYGZRBIPFQKACBAWISIAHCNZXAEFWOVDUXYYRVFFKAYZVEULYJWMTZJJCGHNUTCJCWIHBYQVBSFDHCORKATSKIFGGHDVXSXGJUONBMAXXGXNKWQRCTVSRXOABEXQSNNW");
    msg.dest_man.assign("DJNXVFPVPB");
    msg.conditions.assign("FXDFCOWSKAFVNIHZMVDBJFKBHAPDKENETMYCTNPKCNIBXCNHUJRJLTXQHVOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.24330529987091976);
    msg.setSource(58436U);
    msg.setSourceEntity(149U);
    msg.setDestination(17635U);
    msg.setDestinationEntity(21U);
    msg.command = 90U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TQDCDBQBQDEZLWVLJMJLABBSJTEXJMHYXHBPTWAGHGPHWZB");
    tmp_msg_0.description.assign("PEAENYAHYCYSEEFTXQWNFALSBSKWNXJOUPRIMLEOTHRVWVIJGXEQAVPZGSDYHYKRTRIDQODV");
    tmp_msg_0.vnamespace.assign("LFLFKZRKIJXYMWHLRTRVSDAMAKELTXYGUXOPXRBLCVMMEVPKVVJJKTMYOEHIKVDKLAOZCXFEJREKXFGQGMPSFWSRNQOFEQBIZUSYXUBRCDJRTCFLGFYEYUVAQVPHUPIGNNOUODCIRYEFNIDCZLIURFEWGUNGYWZBLHOBAJIAMPGO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EZJJLLBNZFQXCGZBOMWLLDXTLBFWSYKHQVKPFGZL");
    tmp_tmp_msg_0_0.value.assign("OOEWTEGDKBJSSFKTQWOLJLNUVGPTMFGCUGARVPTOVKPQSFYLNINBBAVRWWWUCKYBVFORZLONFHEIHXTXPYMRIMVDUPNBLZCDYZBDBCMOUSDXYFRPIERZGWDLUNJKQXTDQALUXNBHXAIKTTTJOHGYFGFKCXRIIXJDDJGINAZGCFOKUPCVWAJMETHMZKRRMIS");
    tmp_tmp_msg_0_0.type = 242U;
    tmp_tmp_msg_0_0.access = 37U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GLJMNYAVIQVLLJOAWPORWLQXAQDLOBIVAQJYKCRMZDWONOWKCBLWWKXFRPSRDEPCHJBMVFWLMNDUKYSZNYVKPGAJNBBKKECPRBCZERTUOGV");
    IMC::PlanDB tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 37U;
    tmp_tmp_msg_0_1.op = 161U;
    tmp_tmp_msg_0_1.request_id = 17629U;
    tmp_tmp_msg_0_1.plan_id.assign("TMHVUHDQPRHOIXZQSFUIWCTWDWMJZGFKQSOOMDXATANTMCHGXUJMQMJLLLLZGIALHIFYDOMSNNCPAEFRBVGCOHVCVRTXKYUCZNQGZDPDWFVIOFBNNYCHHJCPFZSEVGNFAHENZPIAKU");
    IMC::SoiPlan tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id = 23923U;
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.info.assign("WHFHRPVQSOXTICPZQYGSUPDSODDXAKINCWBYYWARJVBQCAUMEQXWIVEUEZANJJEKHMBYXDIACLVDTKOGLYGLCANJBWCEYTJQKQCC");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.9017133823956538);
    msg.setSource(30911U);
    msg.setSourceEntity(33U);
    msg.setDestination(48262U);
    msg.setDestinationEntity(126U);
    msg.command = 21U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XJVAGIIGEYIKOZXKDJFYLFMJVZTBQCNQRCNKYTSVZVLMIAABMXMODKHZRQGCBCUZZHXCDXIYDBNWWLADLJSQUPJADHNERDUWFHUGKQOMESJSJRPQSTTVCMBTKFHWZXLYKVABMSHO");
    tmp_msg_0.description.assign("MBIAVUJTNQKXRJSXJTETWKLPNJMDZZAPLELEYIXGHLKBJKUXSAXLIFJLGUUE");
    tmp_msg_0.vnamespace.assign("HMEFORCBXFPQQVLBXTVDJPSHREWXMTDVPDZOWTKEZYJXQRJUMAUHJAFXAKYQSORJQLZCRNRKTRKEEQGUGPCUNYQVIOVNGCKYCYVIRGGNWDZJSQZEECKSAYMLTOJANRMDQYLSDPBTIEEUWBMHHCSPNMUUCSDCTGQLWFDMSBPABOLFDWGIZBOAYKSTSFDBIOATI");
    tmp_msg_0.start_man_id.assign("PULBCMHSEVMNWRIQKUCVYGTIYVZGSQPGWQRQLTEIRPIBXLZQPEHAWDXGIFGXXJAEMYRDOFOBSTQFRUHJOSWXMTJDMGJZNCYORANAXCZPRGVYEJHZNMWTUFVGTYNBXCFWBVGKBDSLAPKNMLCDOKQFXUBRAJVZCPUS");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.17273774437973088);
    msg.setSource(36751U);
    msg.setSourceEntity(179U);
    msg.setDestination(41672U);
    msg.setDestinationEntity(42U);
    msg.command = 128U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IMJLWPUUWKZCEEDLWVSUAZRVJANQGRFAGORILNRBODXVWMPASUHEQKDGOHTYZJIZOTGCDTBDXROAYIKYKFDYQQFHVLKGXFSVWJZWTPSNXFXZPNTCJERSKQNXVSBMQTBVYTDHERBPZUUBEQXZJJUMPWLVIRIEPGCYWKLBEGRKSRFIPGANCCLCDCUIHXJHJFNSMFUXADCSDLUZP");
    tmp_msg_0.description.assign("TZDLSPFPTAAXAIZGWAZFGFOFMXGSNSXKCHFEWHWODIHQANCMUJGQVFSGZBTXUPEEAVDEXDDTCXFIIDZZOZVWLMLLYJWLVEQYAEIPKKIRMJWLOFWBVTYMDOJGAYNBDRTQNMIZYAUSQQKOVWWMRFTXUOVRJYOFXQBTUCEQREPYKLUEQHVHQMGS");
    tmp_msg_0.vnamespace.assign("TXGDPGYIKBZERNTOGTAOEHPXZGMTODUXVBVNHJWKJZQBFRUMLNMRRLHWPZQYDBDTCHBYIRJXMOMHNCQJSAXIYIRSVFEOQCQDICSOAKYSBVGVEDWFCQEEMZKTEZBQCNLWJFRZBKOTIJKSFNSDGWXAUSIVNFZLYIDAFOVUAKHARIQAYWVCTHUNLLHJWWDBVPXYQHSFGOXGMFSUVPEM");
    tmp_msg_0.start_man_id.assign("ZEXZCSOFOZPUIFMWPBMKUGIAUROFPXPIOPCJGYHZBNTSFUJGETSNQWGTNPXOSFZVSGDLDUJHBEQWHOEJWZWIQFLHDJVZKLRJJQYMKLSDQFBQGLAWFQNOCQDNABCDUYGJXIFHDEKTNRPWCEKABSAVHNA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZNOYFSJBTDYCKHNZDBTAUGBUVPOVTQDKSOCKRPVCUMNLUURAAJZKGESIZBONNIYKNMQIMEENOSRXVYSJBZPIPRTYXFLJKRZXUXXWJIEEZEMHHPGRBIVOPOTSOMXMEFHAUOTLHVDKXJQIRWAQGSCVYGVFAUQLYISVLSJGECGBHBAKWKDKTWLFDD");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 55873U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("YBNCMFYFITCJEAOMTGAUZHTTOZSTYJLDOGEAXBJNEUYKMURHBRLHCVGKONZKUCFVEUJBWAINYYCOHPPYENZQSEQDHUSUQBUIMJWWAFJDKGZLZHPDOCYFLPLKPAGHNZZJKIIMSCSRIIOHGHAKBXDQEMLRQRXSXASVQSQBHTZWPRIXVIEKTUKLXFGSVQFNCRDBMDEJNGBPDOVJXZRETDROMVWTLCYTNFMVAIDJGLVWXWQ");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EZPEWGIROTKABPNVFSKRBMGCIALTLWKSRICDNZPLUYLCPTMVEFUFQBYTRGQXQCNDSFYLRBDJAXSRGFX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.x = 0.011501075501224367;
    tmp_tmp_tmp_msg_0_0_1.y = 0.1932053283999451;
    tmp_tmp_tmp_msg_0_0_1.z = 0.8935968699724637;
    tmp_tmp_tmp_msg_0_0_1.k = 0.9677005705324626;
    tmp_tmp_tmp_msg_0_0_1.m = 0.9216648349846391;
    tmp_tmp_tmp_msg_0_0_1.n = 0.1927127576851354;
    tmp_tmp_tmp_msg_0_0_1.flags = 90U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::VelocityDelta tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.46079899540966607;
    tmp_tmp_msg_0_1.x = 0.8843084279341326;
    tmp_tmp_msg_0_1.y = 0.27420350566166707;
    tmp_tmp_msg_0_1.z = 0.02718130209637004;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.2920204058399972);
    msg.setSource(8971U);
    msg.setSourceEntity(236U);
    msg.setDestination(33563U);
    msg.setDestinationEntity(20U);
    msg.state = 69U;
    msg.plan_id.assign("XEGEFPGZZNKRBUNLOINJDMMBCQLRJ");
    msg.comm_level = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.04062020433672475);
    msg.setSource(36680U);
    msg.setSourceEntity(148U);
    msg.setDestination(34133U);
    msg.setDestinationEntity(186U);
    msg.state = 94U;
    msg.plan_id.assign("CUXEXOEDQDTJSFSFNUBEVAJQGCWYBTGZFXHMQZXLKBIKGBUXDVSPQWNKFDWSQZNKS");
    msg.comm_level = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.2710388980045064);
    msg.setSource(25070U);
    msg.setSourceEntity(210U);
    msg.setDestination(39164U);
    msg.setDestinationEntity(253U);
    msg.state = 122U;
    msg.plan_id.assign("FTRTOMSLMISEWAHNAVOHRUYLIOYHWFDWTJNAGCARQIHXMCZJFPFKEDJYQJBCUUVMUMSSEEOHBQZWJIUZKGPONRJGRAJXGLLPTMNPHSDACSZUFXVOXUYBAQXYIKQZRCQQHEZCOXAWKZAOPPNXFLYDIIJFBHTKFWPALSCUYQEKBNNHKGSIUFMDCCGLXZVLMDRRZQJLZTQPDRTTGKGXFMYSPWLRIBVT");
    msg.comm_level = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.14434794350397318);
    msg.setSource(18245U);
    msg.setSourceEntity(194U);
    msg.setDestination(16993U);
    msg.setDestinationEntity(27U);
    msg.type = 23U;
    msg.op = 227U;
    msg.request_id = 62144U;
    msg.plan_id.assign("ARQMUPZBNKHRHSVTFRSBDOFXJYZGQAYEMVZXXEDOYZOSEICPXGLLAELBQUZCKZYUQFYWXLHMZRJGGKHYCGIGFTDPJFYDTRZMNHMDOBOTDTNASANWBTOHDSULOLCOFWUIYNXKIQLIEVOGPMVKDPJW");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("TNTSPVREWOHVOQJIMAHUOTTRTFBEMPYGLFXLRERZIPALVXNMCPHWMGSLVUNJIFKEGZQRXUINNOYIQTWSYZDDHXSFWNADQNOQCGTJAZSMIOYQZBJLIJJGGRDWJQVXNXKUVUFEAHXSUDRDOECKPCQGWRSPTBYNHMKAVJCKSWUFCRDRGLZWHBXYZHBIHXDQMLBNVCGYMOJZDAUOEPCPKMUWLBSZEAJFW");
    const char tmp_tmp_msg_0_0[] = {-120, 46, -2, -14, -125, 61, 4, 1, -31, -8, 39, 106, -5, 115, 78, 102, -68, 89, 85, -91, -46, 1, 126, -93, 52, 68, 26, 7, 15, 118, 95, -111, 54, -21, 63, -127, 38, 73, -29, -109, 89, 88, -81, 16, -43, 12, 53, 34, -91, 1, -6, -125, 48, 58, 125, 36, -33, 88, 37, 47, 59, -95, 17, 90, 6, -3, -15, 119, 124, 0, -5, -59, -60, 12, -66, -113, 117, -69, 99, 14, -60, 108, -21, 12, 48, -90, 26, -108, -89, 115, 79, -42, -58, -97, 58, -73, 33, 61, -69, -95, 65, -29, -123, -91, -77, -53, 36, 104, 83, 101, -115, -60, 42, 112, 106, -33, -97, 91, -71, 28, -114, -55, 46, -115, 12, 80, -58, 29, 4, 76, 45, -85, 84, -122, 85, 62, 15, -32, -40, 108, 4, 110, -41, 10, -113, -70, -78, -113, -56, -14, -62, -6, -20, 69, 2, 122, -6, 16, 23, -121, -78, -29, 37, -64, 76, 64, -33, -28, 28, 22, 95, 39, 92, 51, 2, -119, -12, -122, -1, 92, -79, -22, 4, 15, -16, -24, -35, 25, -6, -37, 26, -39, -53, 88, -126, -42, 46, -97, 17, -10, 44, 44, -4, -52, -17, 13, 1, 92, 1, 19, -79, -99, -113, 114, 28, 112, -7, -75, -61, 78, 120, -28, 109, -114, -64, 17, 122, -43, 9, 25, 46, 105, 68, -101, 43};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ITBROAURFALEPJKPRHQBTYGDBQVNVHOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.45197359095159706);
    msg.setSource(47374U);
    msg.setSourceEntity(222U);
    msg.setDestination(26342U);
    msg.setDestinationEntity(143U);
    msg.type = 171U;
    msg.op = 15U;
    msg.request_id = 12303U;
    msg.plan_id.assign("VASFAJVUOAXPDBMNXTLQHSXSJZFUZI");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 251U;
    tmp_msg_0.plan_id.assign("VDKHCKGIFNINWFYDXPDELCPCZYGCAOSQQNXSOHRFGCS");
    tmp_msg_0.comm_level = 116U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RCUBEHJINALMAUCVGTHKVWLANBFJLSIUVJFUCGGRTMTHRJNPGHSIIDDVIKTMFFWLNPQILAWAANOGYPFGXQBAVNOZBZCBOWBKSKRJQDLKENWISXJDMMTMBEGQWJVARBDHFHCSIMRDRCZVDKZVXTTHQYGMYZTFSZYUEKWSVLKAWPWNDPQESDQFZEDXQNOLRCFYEZLUUEXMYUHYXCYJQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.2563843871178262);
    msg.setSource(56457U);
    msg.setSourceEntity(74U);
    msg.setDestination(16304U);
    msg.setDestinationEntity(124U);
    msg.type = 194U;
    msg.op = 57U;
    msg.request_id = 28570U;
    msg.plan_id.assign("SMMPJTUNHIXZKXAOSIGXNVQFWPIWZHYLXKXHMGCCQEOQRLEMMULSTRELJIVERFGJKANAZZDTACIJDOREJAGKODBCVHGUWWYQIJSXUESDBMDJKKOVNOLLIKENYKTTTCDHGQJSSQPCDWHDZGSPRHPLBFWNBVYBQVYIMVBYMOITDREMAPOZVPFQSNUAVDNECBAQKZBPFWR");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 146U;
    tmp_msg_0.period = 3049295113U;
    tmp_msg_0.duty_cycle = 2552760423U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RGUFSJJVUKSDXYORHFCFZVRXHJQSSHILFLFQLWSGWKGDOCSUNKETVUQYYLMHJJZRDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.5228849782872401);
    msg.setSource(5452U);
    msg.setSourceEntity(60U);
    msg.setDestination(38439U);
    msg.setDestinationEntity(100U);
    msg.plan_count = 16228U;
    msg.plan_size = 3515777170U;
    msg.change_time = 0.8804519822665912;
    msg.change_sid = 38335U;
    msg.change_sname.assign("SUFOINIXZNRDXUKOMJDGSPXVIMRPOPVLWLXITBGSDJQUJTBJNUSQHMTMTDYDQCKFBZHRVACWZPMZOXLLTEPGCRKAQIXOQMQNJEQGJQLIBWZNYCCKOMGDNHOZXBBYKALYLOEUFNXYSFPUJSDEDNZRWWEBZLVGDOGCTRQMRTNBVLZAPFFCHENGUDZPJGXOIHMFIBRKLMYAWPHVKYCFKSTHIC");
    const char tmp_msg_0[] = {-43, 21, 119, -55, 58, -44, 49, 50, 94, -91, 81, 120, 26, -57, -24, -54, -102, -28, -126, -109, -82, 114, 55, -93, -89, -93, 55, -71, 79, 111, 71, -126, -65, 22, -33, -121, 2, 34, -127, 81, 61, -64, -1, -61, 108, -61, 68, 67, -90, 36, -115, -88, -81, -73, 121, 69, 17, 15, -43, 92, -22, 9, -66, 45, -30, 93, -88, 23, -100, 21, 104, 21, -24, -115, 48, 69, 35, -65, -99, 47, -84, 39, 51, -106, -103, -73, 2, 115, -82, -63, 66, -89, -5, 35, 21, 75, 47, -93, -74, 121, -92, 56, 45, 108, -66, 51, 6, 109, 14, 63, -9, -104, 47, 86, 16, 63, 8, 91, 32, -9, -90, -124, -77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UTUDMYJRLQHYHTUJHKELYJPXETCVKSSXEUWPKBYVVMRBTNTSEOFULZGRLWYXLNIPBOYPXXOYKSFPNM");
    tmp_msg_1.plan_size = 39318U;
    tmp_msg_1.change_time = 0.10346325970145243;
    tmp_msg_1.change_sid = 63610U;
    tmp_msg_1.change_sname.assign("ILBCKJYMTCLSXDQODSMPWAKIIDHRXILNTOHQIIELWKYOHQABEBZCWZQUCFHVJPOBFJXDDIREMHRGVTZFSGCAAGKWYSENUUMOYNYRXERBUZOQPFGHKYWTNWOJYBMIPMWVKPNTJPNDMFXLQSFASRRLTJTEVPAJJPYRIABJXZEXMDULQLXOWFQHSRQ");
    const char tmp_tmp_msg_1_0[] = {-48, 101, 51, -8, -75, -94, 41, 37, -47, -88, -31, 21, -22, -51, 91, 51, -6, -11, -62, -94, 99, 84, -95, 85, 33, 25, 34, -20, 99, 44, -70, -99, -58, -94, 27, -19, -31, -122, 126, -99, 64, -91, 42, -75, -88};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.277489324657865);
    msg.setSource(58756U);
    msg.setSourceEntity(86U);
    msg.setDestination(8605U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 40447U;
    msg.plan_size = 704343738U;
    msg.change_time = 0.18301771833703817;
    msg.change_sid = 37198U;
    msg.change_sname.assign("CTEFGMLNARDZXKKCGITAHBRNVRXW");
    const char tmp_msg_0[] = {56, 115, 43, 67, 11, 83, 26, 64, 72, -28, -68, -59, -36, -60, -94, -77, -122, -88, 110, 48, 35, -89, 78, 119, -41, 0, -39, 18, 98, -2, 113, -27, 66, -22, 87, -75, 16, -12, -101, -21, 109, 3, -32, 81, -9, 124, -91, -85, -70, -41, 0, 38, -14, -61, 71, -106, 65, 55, 58, -29, 58, 21, 89, 48, 56, -9, -9, -11, -50, -8, 81, 58, -102, -65, 1, -108, -55, -125, 60, -26, 70, 50, -61, 108, 50, 33, -73, 21, -128, 27, -120, -67, 56, -9, 7, -112, 67, -121, -7, 122, -92, -84, -16, -89, 99, 15, 64, -76, 48, -80, -79, -15, 81, -87, 43, 121, 52, 80, 104, 103, -31, 106, -1, -24, 62, -118, -71, -114, -99, 91, -90, 10, 7, -71, 8, -71, 0, 48, 76, 35, -83, -80, 89, 29, 111, -29, -44, 86, 36, 96, -127, 90, -74, 89, -63, -122, -91, -47, 74, -76, 24, 32, -19, 4, 0, 19, -25, 2, 14, 43, 8, -14, -119, 117, -105, 67, 121, -101, 121, -51, -4, 85, -57, -116, -33, 107, 35, -8, 72, -59, -45, -122, -75, 17, -117, 7, -85, 68, -36, 37, -99, 102, -75, -112, -90, -98, 123, -56, -26, 101, -90, -35, 68, 73, 56, 79, -32, -60, 113, -113, -80, -127, 69, 72, 31, -24, -85, -25, 72};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MLDPGAUIFEPNWWKICNDRXVUTBBABCIGGWIHFUPNGVOJOSEUJXGVZXDXLILHSLC");
    tmp_msg_1.plan_size = 39057U;
    tmp_msg_1.change_time = 0.7388868608369286;
    tmp_msg_1.change_sid = 46407U;
    tmp_msg_1.change_sname.assign("XWEJZOFFVGOBFIOKAPLVHOBYSZGLNMJSXXGEKLXFSMYQVHDHNZPPDLTBFSIJRVKTIBSAGTUAEYGXPPDXCQLOQQIHS");
    const char tmp_tmp_msg_1_0[] = {-11, 24, 78, 59, 65, -43, -100, 107, 61, 72, 115, 105, -15, -46, -62, -46, -55, 87, 110, -48, 83, -18, 85, 65, -54, -122, -57, 55, 95, -56, 7, -87, 11, 112, 39, 45, 126, 8, 102, 62, -84, 66, 27, 61, -22, -36, 36, -12, 54, -67, 96, 80, 81, -87, 81, -1, -116, 39, 39, 22, 86, -11, 93, -21, 94, -78, -117, -128, 125, -51, -118, -8, 67, -83, 56, 37, -17, 3, -64, -89, -59, 121, -121, -34, 42, 33, -42, -109, 62, 21, 85, 82, 53, 101, -100, 11, 77, -51, -33, -62, 92, 40, -120, -65, 114, -37, -87, -55, 12, 86, 21, 31, -102, 116, -90, -103, -76, -105, -78, -120, -128, 79, 30, 25, 75, -113, -112, 44, -31, -93, -128, -30, 60, 120, -10, -126, -120, 120, -35, 58, 89, 63, 31, -48, -1, -28, 5, -116, 90, 83, -72, -88, -33, 18, 49, -17, 64, 20, 80, -109, 119, 110, -62, 104, 124, 93, 114, 102, -70, 125, 49, -5, -14, -109};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.8703298818847398);
    msg.setSource(27082U);
    msg.setSourceEntity(127U);
    msg.setDestination(19787U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 61422U;
    msg.plan_size = 1496435340U;
    msg.change_time = 0.7305213933688494;
    msg.change_sid = 25128U;
    msg.change_sname.assign("TZNELYXMTVJTMFZMKXVKTZGCZVYKQUOXHQFMNMTIQIKOREUYWWNHPLJFRNVLXSIHSRFHUEBNKTRASEDJWGFDEW");
    const char tmp_msg_0[] = {-74, -58, 99, 97, -116, 21, -121, -121, 66, 18, 77, 71, -128, -103, 116, 100, -40, 78, 125, 19, -101, -29, 67, -15, -33, -45, -49, -46, -62, 86, -114, 71, 22, 100, 85, -30, 86, 21, -105, 105, 23, -73, 74, -38, -100, -123, -23, -16, -56, -96, 7, 77, 94, -74, 107, 73, -103, -36, 102, 19, -25, -1, 66, -60, -104, -122, 94, 88, -79, 42, 83, -2, -45, -96, 87, 109, 119, 93, 71, -122, 59, 47, -7, 41, 67, 75, -102, 122, 3, 59, 70, 16, 126, -90, 99, -103, 124, 85, 40, 51, -118, 76, -25, 44, -117, -78, 125, -77, -15, -92, 119, 99, -99, -3, -25, -17, 73, 8, -114, 18, 112, 46, -120, -61, -35, -28, -8, -32, -11, 61, 98, 67, -28, -81, -3, -60, -84, 44, 72, -80, 90, 8, 66, 81, -90, 95, 32, -1, -21, -59, 91, 68, -107, 5, -68, -78, 70, 37, 104};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BHTDJIENGPTHRCARWSBOAGXEXKWDPVFBYZNYJKXVZWWGSLWEPMGPHGEVMJUFMYONSUTFKQQSBFXAARNNQAKUFVPUCXIMHBCZKSJTJKFQEH");
    tmp_msg_1.plan_size = 29143U;
    tmp_msg_1.change_time = 0.06476961583780205;
    tmp_msg_1.change_sid = 57379U;
    tmp_msg_1.change_sname.assign("DTWPHQUNIASGTIXXDGGEFYULCEDQVPAOBNKBSUCRC");
    const char tmp_tmp_msg_1_0[] = {116, -97, 106, 110, -85, -22, -20, 112, 15, -87, -63, 34, 28, -125, 0, -11, -59, 8, 52, 61, 104, 53, 36, 79, 24, -6, 55, 2, 44, -122, 66, 121, 109, 104, -8, 85, 92, -97, -25, 119, -72, -77, 72, 61, -78, 39, 55, -85, -33, 102, -28, -121, 62};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.35695448518485007);
    msg.setSource(31739U);
    msg.setSourceEntity(119U);
    msg.setDestination(54883U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("UJUMDYVBFCLCHPTDMHYAGSTVLXZWRVJNGNXFNYDDSLUIETEGWFADFVVQGKTAQCKSJPPLKXOBBWBZBSIBJEAPUGAOTDYUSRJHRKQ");
    msg.plan_size = 15944U;
    msg.change_time = 0.792669383402067;
    msg.change_sid = 291U;
    msg.change_sname.assign("TWQCQOBUHXUQMGRVRNSWQEFGYVKSHPCZCTCBVRWZVGSISEZOBUOEHGYWGGMIPPZDNVLIQRPVTKXJYBLENJHRDNHIXAWIBNJOEHMFDSLF");
    const char tmp_msg_0[] = {-73, -73, 102, 73, 18, 104, -75, 125, -109, 107, -15, -47, -30, -77, 121, 74, 106, 23, 35, -72, -47, -28, 61, -30, -127, 125, 42, 10, 126, 105, -70, 116, 49, 126, 126, 114, -128, -15, 81, -80, -81, -35, -40, -110, -38, -35, -100, -48, -79, -127, 112, -25, 69, -25, 47, -52, -76, 56, -115, 106, -11, 54, 52, -14, 79, -60, 17, -100, 67, 73, 122, 33, 83, 105, 96, -93, -102, 40, -26, 27, -48, -92, -118, 26, -126, -76, -110, 77, 41, 65, 23, -99, -65, -102, 123, 100, -37, -77, -37, -38, -21, -85, 50, 62, 77, 120, 121, -19, -66, 11, -91, -63, 71, 60, 16, 91, -31, 82, 74, 53, -70, -71, -88, 64, -18, -75, -108, -75, 93, -117, -29, -49, -31, -93, -28, 62, 9, -6, 126, 120, 122, -119, -48, 96, -59, 61, 5, -13, 0, 11, -79, 4, -56, 72, -90, -75, -33, 41, 70, -96, 61, -20, 46, 95, 61, 92, -67, -27, -116, 50, 65, 32, -50, -43, 2, 66, -48, -70};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.9281690400870032);
    msg.setSource(50103U);
    msg.setSourceEntity(169U);
    msg.setDestination(56036U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("FFOKKPANNSQCVTYTTCDWZGDKJDJIJGHXNFVKMFFNISQEMROVFGDHBKPUPXRGSJPTNGMAOPSQINAIVCMHDZRKHDYOMWYOARXYDHLSSWOQTJTF");
    msg.plan_size = 3669U;
    msg.change_time = 0.2444832691945812;
    msg.change_sid = 47814U;
    msg.change_sname.assign("DQZNREMQXLIZSNRWVPWPRJGVFXWYJUKPIABVCICKGRQLMJGWJRBYOZCHJPSANP");
    const char tmp_msg_0[] = {-39, 44, 14, -93, 70, 109, -91, -124, -28, -119, 107, -22, 21, -111, -104, 47, -14, -33, -71, 37, -56, 111, 101, -53, -104, -78, 122, 13, -124, -101, 36, -83, -36, -12, -122, -113, 12, 58, 47, -30, 43, 59, 42, 86, -13, -123, -128, -80, -2, 19, 39, 80, -50, 80, 60, 23, -31, 58, -126, -32, 106, 124, 22, -71, -19, 32, 74, 50, 19, -122, -76, -74, -2, 60, 121, 16, 63, 15, -112, 13, 89, -71, -104, -74, 39, 38, 88, 116, 96, 31, 2, 90, 8, -67, 88, 29, -58, -72, -11, -13, -17, -117, -67, -34, 17, 91, -23, -83, -71, -41, 68, 46, -82, -59, 58, 66, 72, -97, 72, -79, -31, -10, 64, -29, -92, 79, -60, -37, -122, -35, -83, -84, -7, -89, -22, 126, 18, -53, 61, -63, -32, 44, -62, 19, -62, 14, 5, 98, 102, -72, 122, -40, -11, -22, 23, -57, 87, 55, 54, 39, -14, 29, 90, 65, -33, -112, 114, -49, 86, -103, 100, 86, -26, -122, -70, -43, -21, -34, -66, -103, -42, -35, 89, 1, -96, 3, -21, 95, 26, -51, 61, 2, 50, -90, -99, -27, 36, -110, 109, -90, 29, 25, 123, -18, 99, -60, -53, -65, -127, -13, -38, 34, 0, 42, 114, -108, -71, -21, 100, -21, -1, -22, 47, -121, -40, -2, -120, -17};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.18319174289743712);
    msg.setSource(53195U);
    msg.setSourceEntity(161U);
    msg.setDestination(24151U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("TPXDAXODSVBINEVVSZMJDJMNUGGVLHWYVSKMRDGXQLIQNCNPYKGAJRCWNUDLEFSCBUKGRBYZZWDUAVSKRJLCXZNXYRKAOOUHIOYCMPJXGVEEYR");
    msg.plan_size = 29474U;
    msg.change_time = 0.4181684402725261;
    msg.change_sid = 29938U;
    msg.change_sname.assign("MEJLNQFOERUYEKTXNZESMVGTNDUHUXIWGJRFLLEYMDJFQZJPMUNMFAVPONNFBWWQRPHSHNWVDQLYWDNAMVUSTFRNOSKQXCEGGCRBIKCOPCUPLLHWCBSYJHTZSJZVDRVQCBMOKKLBEZACDCTXLFKHIFEHTBAPRUKUXJGKPOARXIHIVJIXMMFLSMAAWPZGGYWYSIKSHODBSOFQUWVPXRIEYOYN");
    const char tmp_msg_0[] = {68, -24, 113, -23, -13, 65, 107, 63, 105, -31, 14, 71, -39, -116, -91, 47, -79, -17, 115, 54, -9, -89, 122, 81, -79, -54, 107, -8, -30, -15, -73, -38, 46, -107, -51, 88, -85, 76, 112, -86, 110, 74, -32, 90, 115, -106, -66, -1, 64, -119, -67, 79, 41, -45, 102, -26, 91, 112, 111, -70, 0, -50, 81, -103, -59, 79, 31, -51, -6, -33, -57, 77, -88, -94, -21, 81, -79, -65, -67, 13, 91, 120, -99, -58, -72, 56, -66, -26, -15, -44, -65, 13, 37, -125, -8, 25, -11, 72, 106, 54, 92, -13, -7, 106, 107, 85, -53, 58, 51, 23, -99, -82, 109, 35, 56, 96, -17, 84, 106, 112, -78, 81, -90, 13, -121, 45, 43, 65, 114, -94, -73, 29, 102, 44, -87, 81, 26, 28, 77, 74, -3, -54, -13, 76, 90, -71, -75, -36, -84, -87, -71, -13, -100, 90, 121, 77, 87, 35, 92, 31, 83, 49, -10, -25, -95, 83, -17, 47};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.1427005763469893);
    msg.setSource(21019U);
    msg.setSourceEntity(101U);
    msg.setDestination(42060U);
    msg.setDestinationEntity(103U);
    msg.type = 43U;
    msg.op = 210U;
    msg.request_id = 34258U;
    msg.plan_id.assign("NENPUNLAYMWGQEAYGRQYFLZTLTVXTCDKAMGDXPGPCIRNSWMGCWEAIUOAZVHJRCXIDEDQFRAMBNYJLWUMGWPVHTQEXPVCHSSMGBYRIPZMEYEFKFSSUHVOJMOBBIIYRHDANLFVBQPZEXSKQFTKDJKCUPQTWOPRKQMBOWZFILNHQFYVBLXLHUTZGPCRKBEEOBYXDCTUCDRBFKWA");
    msg.flags = 49718U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 34331U;
    tmp_msg_0.rpm = 0.9894763471412454;
    tmp_msg_0.direction = 138U;
    tmp_msg_0.custom.assign("YZNGXQFEKDNMUOVONAUBQKNFFLVHEEGFQPMKJTNKAYOWFSPRJZASUHYAYLAFIZUVODMEKMLCGCSTIK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TKRHZABKBIHBJOVZARWPJQDBYENBQVMJLWRGYCUFDPAOCHSISXHYTPNOJQLVDFMIESTUKXELFTVAAVPPAWNGLNTCQFGSQPIINSWVEUXZFWBUUDHWBBYJSKZCFPIZLNOENTERZXUIJQOLBGDMOBTKKUTDMLCKYLKSJUTHSGCWCMOWPMMYGQIARAYIPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.5288230733124143);
    msg.setSource(13023U);
    msg.setSourceEntity(42U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(120U);
    msg.type = 6U;
    msg.op = 230U;
    msg.request_id = 3898U;
    msg.plan_id.assign("OCPIPZACKXLSAOSZGGUGMGRUAJPNZXCVJOBOQTFHSIHFVDHUFKOVXLLXERLGDMTUSLEGZQQUZYTTKKXRHZBBMDYPJCIIJEZSWTBZDCFUNHKOGDEUKJKALNJNPCFSRTUWQAJBVWYWGQNMCRXEF");
    msg.flags = 17559U;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.36792677683051656;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NQJTASYCOXCJYLFHEWXWMWXBLQZGXITYIPGEPFIIHYQUHXRCBOGNEMGNVRKDAZRPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.08347106296065299);
    msg.setSource(54654U);
    msg.setSourceEntity(190U);
    msg.setDestination(27021U);
    msg.setDestinationEntity(239U);
    msg.type = 104U;
    msg.op = 122U;
    msg.request_id = 6609U;
    msg.plan_id.assign("CYRMBTVJKLSOGHUUIOMTPXSMORZQNBGXXLDCIAHGEKEZVSDBWKAVUXCYFVUWEBEWLHNGVEPSNKYQCHEVTUYINJLVNYITUSOOQFMHDXKCKCWAMBGQDQRSWOYFZFSPIYAKQCAXVERGXCFKGVWDBMUIPNJZJUQYZBTMZHLRWYSFOJAAFWPXCWSOGRKJTFAGTULFQZIDNTJXLORLUBNHSDODRLQTZRJICHPDDAXLHPTZBKGI");
    msg.flags = 52823U;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.4487703339025324;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JTRUPYJFLDRUEZCGHAVZGOSGUUPCYNIOOWQQCEDAMCOKTMTHQPVWZKGENWWMBUSNJLQIDFYAHFSBSRIPJCYLPEMVWIMNVFZXOQAJHEIRCCOHYOWOKFMGKRIRVRSCGTHHZBRDXPUMBTFPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.526144654398826);
    msg.setSource(35218U);
    msg.setSourceEntity(147U);
    msg.setDestination(216U);
    msg.setDestinationEntity(163U);
    msg.state = 213U;
    msg.plan_id.assign("REYRWCHIRDBUAPXNPOUYRDAZXTVPAQSWYCECKJRNFITDHPW");
    msg.plan_eta = 1598415979;
    msg.plan_progress = 0.27088942053696985;
    msg.man_id.assign("JSEXGUZJRVQGWCKCUKCZISRATPDFRGQVEGKTBMFWSIJOVQMNSHIQCTNOLYGYEUBOXOEDUXBVFCIWRHZJAAPUHYHPNXVPSLIXQJASZVNFGTBOPDCBAOGBJMHF");
    msg.man_type = 17769U;
    msg.man_eta = -505940416;
    msg.last_outcome = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.9092845008109612);
    msg.setSource(30576U);
    msg.setSourceEntity(199U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(210U);
    msg.state = 235U;
    msg.plan_id.assign("RINYOYYJGLPUDXPYGLQCAQZWTOBFCVSUCUZTHPYCITPCKAUKJDIGMIAGIJPKDQDPTKQXHFZIRLPYETAQDFNIPLOXLKBPVJRVMBGMHVUGQSLYASURXHTXNKXWFVZWJXGSNZVSMITIWFITLERMMMCECDOSZCDKBXFWTPOH");
    msg.plan_eta = 906345770;
    msg.plan_progress = 0.37509965745738316;
    msg.man_id.assign("HEDKJONVNSMRZVXACBDEIGVHEZYAZVJWLIOKZFPWDXBZBOYNUWFAATCPEHHZLFXCFLJHHJEUPHXNGYNCUFPWTBTDMYWLQQGUIVHDBJFUGKSIUALIMTKVRGPBUOAVCWQUTAGSKBMXNKRUDCOGIQFEUVEXZYWCXJNMPMIHXAJNRVQWJBSWZYSRQIDFKTGCKODQTOFTSDHVRSZQXCYMYOIMERNGLJNJTOQMPQSLRKOMPDAAWLL");
    msg.man_type = 53570U;
    msg.man_eta = -990394596;
    msg.last_outcome = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.02287444799277194);
    msg.setSource(25181U);
    msg.setSourceEntity(66U);
    msg.setDestination(6140U);
    msg.setDestinationEntity(154U);
    msg.state = 28U;
    msg.plan_id.assign("KVZLFXLWGTFZUSIOSKLSMEWADIEVPQJGBYEATFDREARAALYJDWDYVHUGVJFQBSATKBSRVBUFNNAHSZJRHJUCCCPZHJOLRMHNIOMMETKLGQCQEYWVPGLNTYMFJSUORPRMBXDXNGWIMPYFZXWTGKMIAYOPGOITVEWDBXPDNWNUEKZMBGLAZCXQMHNIJOY");
    msg.plan_eta = 2112671383;
    msg.plan_progress = 0.44648252473885475;
    msg.man_id.assign("IDIVONSHLLDVJKWPLYCLYNWEURHHLYKMACSCJJPJIUPMCIOKUZBELFTZYNHBSHQWOKEDCMTVQXXMXGTBRKGVBHBIEPGFUQPSWQOWXEBUJIVITZFX");
    msg.man_type = 64951U;
    msg.man_eta = 1519251896;
    msg.last_outcome = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.7076666933050038);
    msg.setSource(65308U);
    msg.setSourceEntity(65U);
    msg.setDestination(53645U);
    msg.setDestinationEntity(70U);
    msg.name.assign("LFYSWOOGHLNCSCLZAQRHXXBVNNKQKWLWQKQPTXKDENBCBZPTGVVBGNLOHSUYFCXPZYTJVYUOBAGLRQQKYNDQAHHSUWQYAFCOJRRPVMIZSDLAFBOPTPIJGZIWTFOEC");
    msg.value.assign("PDNOFNQZILHDTFFQQPULPXKUMCCKNBBBGEPDTVGQIRSAGCVTSNXWYWSMRIUWKBMEEPMODYXDIVSDVYHXFBFKSKQXAXXONJJMEIZPNGSLJZICOURSXBYYCDPSOSWTWEACELAFZIJTOPQMURANTHYPJGAZCMTKAKIIXJEFDWAJJTQQVHXGLUQHWATVHJOKBFTZBZUEYOMHBIKSLULUVRDWZLNBNPYGGGHR");
    msg.type = 235U;
    msg.access = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.9870230926285751);
    msg.setSource(63454U);
    msg.setSourceEntity(242U);
    msg.setDestination(897U);
    msg.setDestinationEntity(110U);
    msg.name.assign("BBDIXFAZRLTKHKOTTWGNUFJUQCKXKFWKGUMVMYABDKMZVVTHXPXGVIPGWTCYESMRFOWTCSFCPQFTXLXWZAOKFQFFPHAUIBMKCBJJVSNAUBELALSBNWORWSHLOXQJAEMZQEESUCGVHNOMASRYOLEHACCNDJYGTIVTGJUJZWZJIDIUNHHIVZHWGHLDBPYN");
    msg.value.assign("HUUTGPMVRLSEGLIIBCOBDTTYSZQUSAREWFAHGJRPUCNRPZEJWVPXVPYHSSIFIZENULDMGWRZMQKRVTCKHVVXTDCUNOQBXAIXXREKJNCBKGMDAUEOMYLQSXLJRHPVYGLYADZIFFCPEX");
    msg.type = 210U;
    msg.access = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.7191579225126701);
    msg.setSource(30565U);
    msg.setSourceEntity(127U);
    msg.setDestination(35839U);
    msg.setDestinationEntity(253U);
    msg.name.assign("EBNCJCJDDPNLRBIMNGYLVKESWGQOWLXPTKVRYMVSHYTZFBNEAQIHRUVAQJQIYLFDBSPCLUMKZWNQBJONAMZCOGDODFDUSGIQIBSYTIXFYKALJHONGRUCSGHXVNEDTDAITXZGFIEKTYSNRDEEOYA");
    msg.value.assign("APXBNFFRCSHLDNZRIOEWIKRMIYSEMEZKCZKOJZBWQJUQBMDMJHIYRDYZLXYPTKACYGRBKWHQDOAAETADFXLFSFFPEOQIMNNERVZGWTWMTDFSVFURISONSOYSHPLSOJJJECPPVRKALIGZVNOVTPHGKMYLRGFQVSCNZXEDNXDEBATWLWMIQJGGALV");
    msg.type = 191U;
    msg.access = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.5315789245518866);
    msg.setSource(62587U);
    msg.setSourceEntity(139U);
    msg.setDestination(38965U);
    msg.setDestinationEntity(159U);
    msg.cmd = 33U;
    msg.op = 62U;
    msg.plan_id.assign("AKYOQLHMHTRQOSGHVHPHDISAYUGOEBMZFRWDDVNTZEDSRBXLUBTXDJCZFLGGUKJGMJMKRLXRCPAPTFZKUQTPRJYIZNULPNYHVUIGCFOMMJDQOWQJVZYAJKILONEJFXPMNLDNQWVHW");
    msg.params.assign("IEDVPBZBFBCBMIYPOBHYDRGFICKRQRBMPOOJLXPSNERDUGBDEKWOFKSSGZVMCLWIMXHNPEYWJWPSFGZILNKJWLVWZLOFQAHBNZKGATIFACWMNUETLOMPKSJIDZOTRZSGXXVUXSDACYCTDYMEVYJDRQQEFQRKHTZYAMKTCBQQIGHQFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.8186249123095274);
    msg.setSource(42902U);
    msg.setSourceEntity(180U);
    msg.setDestination(59641U);
    msg.setDestinationEntity(113U);
    msg.cmd = 127U;
    msg.op = 175U;
    msg.plan_id.assign("KEBRAMESPVZBYMQBNTIEPRIIAAXHQMKGWNKYSGDDNOEAVCZXRWFGHDQQJQCWJLYPGAKJUYXZMBATCJXENYRTPHNJUMFQPWWXYRWMCURXAFQJZFLSHGHECVQDIUBLGD");
    msg.params.assign("EKALSTWQZZLOTXHENMBTPJVOH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.38009330436731903);
    msg.setSource(4031U);
    msg.setSourceEntity(247U);
    msg.setDestination(29248U);
    msg.setDestinationEntity(241U);
    msg.cmd = 46U;
    msg.op = 151U;
    msg.plan_id.assign("HAJNYBREGN");
    msg.params.assign("YUFNFUKQFGDMEHRGXBYLZNKHQKPPDVXMEDIDLUDJNCULNTZPNNPOANZNYWUZLXZOGHWERMSVVVROZEVJHIDCKRBQEROQXBTFQWCJHGLSBAACMWHKZSTPQYSANLMHLTVGPCOEHMSXYXJMWXXIPWPRISEKTSNPADIALLCFIBFBCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.9681090667006134);
    msg.setSource(2507U);
    msg.setSourceEntity(133U);
    msg.setDestination(50999U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("PXSJQSHELUTYOWKKZHHAGQXEBQYQENUTPPGMACDTHXCANHJUMOXTAMZPQBWEIJNHKUKAVINYECDHCWAPYFSUUGDIMTWYPKWKIDBHQZZPDVHFCEANSRMFROLOSBJKWUHXCTEDFBVXOQSAILXWYSRFKWGXLKKVDNWYYZO");
    msg.op = 232U;
    msg.lat = 0.6637512657712323;
    msg.lon = 0.3049951629791694;
    msg.height = 0.742391709385233;
    msg.x = 0.027004330867536952;
    msg.y = 0.07849830029545934;
    msg.z = 0.020117568924039042;
    msg.phi = 0.7860907749015392;
    msg.theta = 0.5938956303988098;
    msg.psi = 0.4965726542514617;
    msg.vx = 0.36941200931805607;
    msg.vy = 0.08898143143671056;
    msg.vz = 0.10302870422141952;
    msg.p = 0.5801636513421833;
    msg.q = 0.5134454165892731;
    msg.r = 0.4620658830227926;
    msg.svx = 0.32707908371540617;
    msg.svy = 0.454783874384289;
    msg.svz = 0.1325020539458298;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.976489891173119);
    msg.setSource(19256U);
    msg.setSourceEntity(246U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("SNHUCWDEXEILGNGMDXLMSKNUVEKFQYPTLDBBZLKSVVKTFZJNFBVSZHSDXMPIOVCLQBTEXEFPHAZRCCWVABQFSCWPFGPVTANNRXMBPDBXYEENRZBJCGYJRPYWAORUISZTGDMKNWHWDIZUIYMRLXHCOYKJUARXRAFSAYUROOWCDOTEEJHKGMPNRJQQWFZSSEJHFIIOIWJ");
    msg.op = 197U;
    msg.lat = 0.7024250683524242;
    msg.lon = 0.2752904734306414;
    msg.height = 0.26885444062179953;
    msg.x = 0.3638018764638935;
    msg.y = 0.5112383733170881;
    msg.z = 0.058299379717092426;
    msg.phi = 0.896396365543077;
    msg.theta = 0.26146860219296997;
    msg.psi = 0.2918576854424251;
    msg.vx = 0.9319238093880542;
    msg.vy = 0.0916853365075867;
    msg.vz = 0.8807780520878026;
    msg.p = 0.43506034430957985;
    msg.q = 0.010203707014156738;
    msg.r = 0.42650552440774225;
    msg.svx = 0.25393454676318084;
    msg.svy = 0.3217707191008492;
    msg.svz = 0.3786297735030846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.1292941090552432);
    msg.setSource(20177U);
    msg.setSourceEntity(117U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("BCDINPODEDPKFFUCOOJVZLXNHRAFKYNNVQSPAGTOGJMLEKYIVTDQOWFAPXTOYTYRKWIVYMWQJJAPPJWASZKDHKFXVUGNEHLISMSBGFGXZEB");
    msg.op = 226U;
    msg.lat = 0.9415359573220331;
    msg.lon = 0.3345008596522957;
    msg.height = 0.948260486202377;
    msg.x = 0.3194149503581677;
    msg.y = 0.9999556477628541;
    msg.z = 0.30209340574661614;
    msg.phi = 0.6408792774819991;
    msg.theta = 0.4497103730278752;
    msg.psi = 0.7104349658456871;
    msg.vx = 0.3077191006145883;
    msg.vy = 0.7175273604593613;
    msg.vz = 0.3730107872115508;
    msg.p = 0.3103219186831455;
    msg.q = 0.3434606801333564;
    msg.r = 0.16484783609046505;
    msg.svx = 0.6723015634342444;
    msg.svy = 0.6481029164675757;
    msg.svz = 0.18483771315217024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.8864723084087702);
    msg.setSource(38734U);
    msg.setSourceEntity(42U);
    msg.setDestination(36233U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("STINDNURZNICEOCCAPTDXASTXDAVYEXANRZPBTBPLLIEUNFFWCUVMFULYMXAKDVDAKYGTUMEIQKRRTRQNJHHHUAZMNHFGJSBBYKOEEXOQPJJOMYCRJ");
    msg.type = 74U;
    msg.properties = 119U;
    msg.durations.assign("ESBUSXQOMUDFUEYROHEOIFLDWJDCVQOBPFHUZZZSMVVTIGPECCQSNRWHSWCBLMEDPQETFQGHPQOVXZQMOOJMZQKNMXVWUIXEGJPOT");
    msg.distances.assign("STCGFFMCXZXHYAZKFEIPUJGWBZXPDYTATTNPMUHNY");
    msg.actions.assign("LGDGJIJXNZVIXHKPOFHCWQORDMFRFQHKMQILMJZLMJAYH");
    msg.fuel.assign("LRCBZAAUKPMUKWGYVQEIPGWCJOUJZFTGOHKWRDSMIWBNNBLBINUITHAHWEGAFEZNBNHXWEOSBSUZJYMGYBYHSGQDIXOJAKOUXLCVDWPZAMTPHVOIGAXPDRCAFVQERGKJUCUUSNTIYMTZVLFYGSGXLLPEFYVJHCPXPQFMEHEDTQJWDADSYZZMRJJCTKPNXSFOANKONVNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.6792594883099091);
    msg.setSource(5614U);
    msg.setSourceEntity(68U);
    msg.setDestination(5700U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("YUFADJTPKEJMWMNSZPQGCTAZOKSRAYVVRTAHSQKVWXXQBCIJXQXTKZUJUHFGUDDZHHGOTIBDYPUY");
    msg.type = 185U;
    msg.properties = 242U;
    msg.durations.assign("NLWPIQUPYJCEQPFZYUCRTCBBHLIKURGACQHGMOPDANHIWFKNMELDSAYUTGEXKBOSCGUAGLGLFDG");
    msg.distances.assign("YMGPKFEJINNKTKDVXXIPJXFGJRRWASLSHBTUDAFJVWOAIRBVGHQSHFCXKCBDUIHUPNYZVTLALOUTBPTZBVWOQHPWXUGJNMWDNVLCABVZWAJSIHRFUBFQRCEOGVXTLPIAHSLDHQMCMFLEQIZVGKP");
    msg.actions.assign("SPRHJKFVUVDNTNZBKOSNUESRRFWKYPDGBQPCMVWGAPDFTFTAAKPNSTHVNSMLDGBFIGHXBQYVITKWSQFTEYFBECQIWRNQZICHRMFZZOOOJGEFOOKVZMZGXQVUETYLECCNGBIBYVVJITXCPGZCFRGRLLPJJHVLXHLHXAXUMWOOJZQDOPAMAWMIENDLRXDLSIRQICWQURUXCSKXBYSNJWJZTP");
    msg.fuel.assign("HVUIZBBYKFMZNCLTIYSFIRYKPEOVHDYEQLGZPRFMXVMWJMSAGVJUADAUYGMBBCPOAAQPQODUFAEVNKDVIQKLJTTJWBMYLDIVCQWHDCRUGZPOEOGRLNZDSAEJPJBNDWXKJXBZFPBONSRFXUOCETFGPCHWFKCRXJOPYWAENERWQXBLEMHHNTWKKCLVYZGXPOKHZRLNIHKJFGUUZUVDXWYHXLCTIURBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.6749586397514832);
    msg.setSource(64379U);
    msg.setSourceEntity(84U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("GPYWAJLOVJVLWNLRSEPLCIPGNBDKHFUBBIUMXTATDWSCNZTS");
    msg.type = 196U;
    msg.properties = 43U;
    msg.durations.assign("VKWHYNBZQOYWTAKCEQCLSNDZQKAWZCCHUL");
    msg.distances.assign("FVHUGTTAFQGNSBKKOCRTHLKKWWDGGMWNZAIXFGYNPGVU");
    msg.actions.assign("GCFPDOWHEMYOZGLAMHUFVRYSAAXJLACASEKNOTCIFHBHNCKWEXDXYQSUFHBRGNPRVRGBHBSSAHCMXIKQBUOTNKROQVLCFZTWAVWMFQWZRJBFZGDIKDJQTULXFSUMKOZHPPZSVVXJULGFZBLBRTZINMNYQPPVINODZQYIVUYIAUIJRTCWWWVKHADOWJTJCGBNPTRXPSDCBEGLEMFVCENJQMDQDHQYATXSW");
    msg.fuel.assign("SMGMMVITTFCDZLJUIBXZQJZBITBQFPVAYAMOBENHWNUPDTZBFLILGMUENHJPZBAFAEKNKEEGVKHRDQKDKLNSIRGCFZSROGTGJDRSXSXOFROZHHWZUVJGOXCPYJODSKKLSYWYLIQRMDZLRWUGWCHWEHQGFUEMWOYYJZJIXPXJNVRNUCPWKNOAKXABTCVYPTBMHOPEICLEFVARSAMWVXVVUCUTFYLTNOIJCWEUXRAXHDBYMBQAQQGCPQSNDFYPDQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.004497896074701857);
    msg.setSource(10525U);
    msg.setSourceEntity(73U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.07246099298826636;
    msg.lon = 0.3882828928865323;
    msg.depth = 0.9681227716126611;
    msg.roll = 0.3680329176313366;
    msg.pitch = 0.8576568091760264;
    msg.yaw = 0.7567278422990982;
    msg.rcp_time = 0.09547612510094161;
    msg.sid.assign("RELLUMIAJNNJKHLYQAGKSPELRYWWIXWQTKCRUHPEXJDMGYYYELUMLHTSAZJY");
    msg.s_type = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.3992919045900659);
    msg.setSource(20380U);
    msg.setSourceEntity(150U);
    msg.setDestination(21903U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.6287181009256543;
    msg.lon = 0.8076564374221177;
    msg.depth = 0.7161818469057533;
    msg.roll = 0.08187514547839359;
    msg.pitch = 0.9941783822621869;
    msg.yaw = 0.26747333097860115;
    msg.rcp_time = 0.8512633763296366;
    msg.sid.assign("TVIPARGQOKANCZBLVNSTQPMZMCSUQZYPYSYWLGGMHPBRHZFFEXOCKBGKBTNZSQXFMWONPAFZVJTTUCSYSESKIOXIJMRUYPNIDNGVVGXFSBQNADHDQELNEUBWKLYSIUABRZJMCHIOVYCABTYFAJJRKHJWFTOGXWWKPSEDHNLZYFVDBHAZVLC");
    msg.s_type = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.4748387948342191);
    msg.setSource(55509U);
    msg.setSourceEntity(88U);
    msg.setDestination(9486U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.14873854979120904;
    msg.lon = 0.34017431837552414;
    msg.depth = 0.10343708912645955;
    msg.roll = 0.893289427044632;
    msg.pitch = 0.6209795002605316;
    msg.yaw = 0.11795949287572571;
    msg.rcp_time = 0.29918277576403796;
    msg.sid.assign("CYUVQNBKHRAALICSYWQUEDQYPXHAIERDDNQNOWUTOTTOAWBGEDZOVCXNTMUSHSIQYQKYCOIOBOKMTXJUDPSLVFEDJSBHTXKFCNZGNWBCENHMZEXJQUFGTTISRNAQJDAMGJIRSLGKZXJKYPDIBMUKGYRLCYBWFEMHIVOYRSXAMKFRWPUSJDRWLFZZJRVAVPVGJBCKXVMLPT");
    msg.s_type = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.8683776463072216);
    msg.setSource(9891U);
    msg.setSourceEntity(251U);
    msg.setDestination(13370U);
    msg.setDestinationEntity(249U);
    msg.id.assign("GDFJJISJSFTAVDFWNZYQMRBGQDCHUQRUEWVGDMYUTAKJRANQHBSQCWGSZJBBLEXKHFROGRSVQACTIMZZM");
    msg.sensor_class.assign("HIRMUVLHQGHRWPWQMHUHZCEAOCBIENXWHFGMEDUOPOFACGVJEGOVVRAQYZKDGHGBEOOXJHAPTAYQPCMTNFKLXMCEMTVXXSSCIJWTFYZKAFYBAREWXKXVLJYAFUTJWWSZOWDDYNBPJOGVFZSLBNPRISNDSZYGKULWUKUADTEJZKMSPHMSFOSZWVZBNPRQNNGLQIIICDCPUTTVBXBOAISDRLLGKFQYTMCQRYIEUQNVJTDYB");
    msg.lat = 0.7260960622390676;
    msg.lon = 0.02606175571217406;
    msg.alt = 0.6983347197405282;
    msg.heading = 0.007750964471100019;
    msg.data.assign("CAOUBHYVGVLELBGTZWDXLTXELNPJISDMJKANBPTMCULKGIEVMWVRPRBRBADWAOIOPMPVJOFEZKWUDQPNRZTRLBXAYOBBRGSDUPDHQKVKISCSSFNUKCOPLYORGFQENTYPWFDKDIXZGJQZRZYAOFVECZHIMWWYQCV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.2781037642742128);
    msg.setSource(38126U);
    msg.setSourceEntity(236U);
    msg.setDestination(57795U);
    msg.setDestinationEntity(60U);
    msg.id.assign("UZXCKYDPWWPZNALVBMICTTQHBKQNFCPUMRWMDOMSDZPJZHQAFHVGCZLIXZNEKDFCFZYDYJYPPSMBFYGGHPVIONCCQVSADHZNATONYDEBELVXRBITRLXONRUFJSIHUACWTUATBSUOG");
    msg.sensor_class.assign("QRPRCIIKAMNOPSKNKUAFIACSNVSGEQWOEDCYZUKFXVIGGSEAKLFDTBXRESVDHZGPQRYHCWLWUDYDHZSXMOUUYCHWQLSVFJPHVFGWJGVPK");
    msg.lat = 0.7267290577175367;
    msg.lon = 0.7722830164664977;
    msg.alt = 0.14359742903455974;
    msg.heading = 0.3894676642186655;
    msg.data.assign("TBBVUDEINMGQJLWMRTSCPFUYVCVUFANKOBQFEXQLRXVEZGIPBPWJKZFJLPGLCBONMTZEUTDAFOVSHCYGBWIQHXRXCGUKNIWSUQZAEMKXRGMUUKJJSWFDANPMYIFDTEPSGPAYZMZIRWICXJOAOGVANAHWQHSJZYKYRCML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.6726747525464528);
    msg.setSource(23335U);
    msg.setSourceEntity(236U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(4U);
    msg.id.assign("ERZTCDXUUSFPBVXWE");
    msg.sensor_class.assign("TGLHDYZMLZHUERJUZSQKIMCWUKCPUAAGVGWAJYCKULVCYDUNDZYLGPUWFEDXZRBYKARVJRQGKPHVSZZLJSSNYHWSCNOHBNFEIRIEQIOCQSUIXOWHDRBHSTFZHRVGH");
    msg.lat = 0.6971075662113423;
    msg.lon = 0.2245597502526332;
    msg.alt = 0.6305421822440442;
    msg.heading = 0.2906849087166624;
    msg.data.assign("QORCCVOSALZUWEQJYCFWMXMQAYLPNAKTQYKFEKQVIBEIFBTFDTHGJHRNPQPZVRLSDKIUCRJEITMQANEYGYYARJISTGJENXQZJNFJXPGWFLFKDUSKGAMWVRXTIHLYIUTCUUBOEBVISCSPBDCJHZLNGZHLPEPSVYOKUDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.5972008328661205);
    msg.setSource(42031U);
    msg.setSourceEntity(144U);
    msg.setDestination(58127U);
    msg.setDestinationEntity(212U);
    msg.id.assign("PENMGZKHDJIQFPBOBCHZSMTLORJLMYYKQNAUDEBNUONTNZKSCFZYMTFNCXZYFEYWDTZQAKVXEPULJYPHKAWDZBOXMUMFKEBCWPDXYXDICRQWWWWIINCCVVAWBOIJAWDTFGPGZBHEUSYXCQTJAPHNXCDIUBLILJQIVFSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.602146415147874);
    msg.setSource(65037U);
    msg.setSourceEntity(162U);
    msg.setDestination(27748U);
    msg.setDestinationEntity(4U);
    msg.id.assign("JSYJFMWFKGDYOJZAHDPHDQIFPLWDGHRLISWCLQUEEZVLZRMAHCTDFBBVYPRGWFNXYNCKBCGE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QQRLTTSPKHPIGAIUJWUOLQDYZXXXTHHQPBZSDRIRRJXQWFPDGYMYGCPVPMFVBKKIGEHJDYUAZHSWALYIECNCXVZCDIAPRIOGDGREMZLJKSJAFXIOKSQWWZJ");
    tmp_msg_0.feature_type = 2U;
    tmp_msg_0.rgb_red = 206U;
    tmp_msg_0.rgb_green = 51U;
    tmp_msg_0.rgb_blue = 139U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7945271614377992;
    tmp_tmp_msg_0_0.lon = 0.2173853509769309;
    tmp_tmp_msg_0_0.alt = 0.35158413735470817;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.6168243032281918);
    msg.setSource(44701U);
    msg.setSourceEntity(99U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(191U);
    msg.id.assign("JOUZMLIVNVJIYOWNIBBIVMESPNFMGZSNKKHIDCCKGRAPGXPHCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.08770294808249368);
    msg.setSource(17110U);
    msg.setSourceEntity(88U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(45U);
    msg.id.assign("CENFNTICKDIIYAKDONRAZLLCGUSVXEIRGWRGZPWSFKOPUPWKOOYHUJHNWRSJSRFMPEZDMPCBQPWKOVJRUQLKFCGXWXJSCNHKURLIBLOTRMVIXNAMSXOLECSYGAMYVECDKXYQBEWZFUETVXAPB");
    msg.feature_type = 231U;
    msg.rgb_red = 199U;
    msg.rgb_green = 238U;
    msg.rgb_blue = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.9124545107793077);
    msg.setSource(27806U);
    msg.setSourceEntity(243U);
    msg.setDestination(62204U);
    msg.setDestinationEntity(140U);
    msg.id.assign("DWAWGEPEAGMIQAFRWHZTEONWJBIQRNOOMECGBKD");
    msg.feature_type = 83U;
    msg.rgb_red = 113U;
    msg.rgb_green = 9U;
    msg.rgb_blue = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.7705200461943161);
    msg.setSource(31212U);
    msg.setSourceEntity(137U);
    msg.setDestination(36521U);
    msg.setDestinationEntity(89U);
    msg.id.assign("GQYPAUEUFZQCXUEGQWAQNNVGBXFNMEMHTGLBESUYORTWAZPMWBRDZTCHYOYPNQYFAURAGSQVEPFHIMEMXWXVHDQKFFJNBMJZSEFVODKFADNQCJYSZJRCNJJLLJHPATWRHZLYXICOJXBPVGGPMHSSJZKIUBUOTWYDTSDON");
    msg.feature_type = 87U;
    msg.rgb_red = 11U;
    msg.rgb_green = 16U;
    msg.rgb_blue = 33U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.01992686953634537;
    tmp_msg_0.lon = 0.9049715095300581;
    tmp_msg_0.alt = 0.8086116737402239;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.12102812154756892);
    msg.setSource(7247U);
    msg.setSourceEntity(53U);
    msg.setDestination(26418U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.12374576732346831;
    msg.lon = 0.8656130036320908;
    msg.alt = 0.7336719758237323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.5208074226620771);
    msg.setSource(988U);
    msg.setSourceEntity(89U);
    msg.setDestination(37144U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.7825328819478162;
    msg.lon = 0.7660894706501372;
    msg.alt = 0.01979005870765682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.15134504975974106);
    msg.setSource(25174U);
    msg.setSourceEntity(243U);
    msg.setDestination(35420U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.210597601537458;
    msg.lon = 0.283811481769476;
    msg.alt = 0.5498468096259341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.13703327234268825);
    msg.setSource(47010U);
    msg.setSourceEntity(99U);
    msg.setDestination(40676U);
    msg.setDestinationEntity(123U);
    msg.type = 99U;
    msg.id.assign("ZZVEGFUGCNEHPEZCJKVUBBTKUVQOPURMJNBJUQDVUDTKRTNJFKKDWRFGIMQWHKLOOTFLVETSBFTTDLDSWNIPDFYCRESIVFUZZYVAOHYIGXIJWSWNWCXJMKYXQPASMQTZRKYBPMULXGKSKORGBOEEPZMAGHRGLAXNIVDCNHYWHPWAIFLFAVSSJRNARJZCCTJHSPYQPGITMHAEBXDYMUDNFHBRVLOOGWCXMZZLYSQAIIQNQDLXEUOHCXQAPELOW");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 51085U;
    tmp_msg_0.ttl = 44288U;
    tmp_msg_0.destination.assign("XCHYJLVIMNMKZWDEBNFESLYXQNSXFJTMTYVGJEOTGEXGHUYTBBGDAWLLSKIAKOAQKBLQHSAHWDCPGWCYPNVZQROWFPAWAKFLUHKBEDHRTUOSIZEU");
    const char tmp_tmp_msg_0_0[] = {2, 16, -101, -45, 6, 104, -70, -17, 97, -58, -127, -84, 113, -117, 67, -117, 38, 84, -31, 107, -34, 23, -10, -115, -34, -73, 4, 93, -96, -77, 43, -56, -110, -90, 4, 117, 78, 117, 63, -51, -25, -94, 15, 126, 110, -120, 101, -56, -25, -69, -9, 2, -58, 114, 60, 26, 10, -34, -68, 60, -15, -109, -56, -103, -11, -72, -112, -76, -71, -30, 78, -122, 95, -11, 15, -51, 64, 68, -123, -77, 95, 93, 60, 110, 72, -124, -53, -59, -107, 47, -76, -55, 53, -83, -29, 22, -86, 90, -90, 46, -36, -54, 98, -54, 97, -94, 84, 105, -30, 28, 61, 98, -56, 125, -29, -94, -128, 89, -16, 39, -11, 19, 5, 5, -127, 89, -112, -81, 73, -64, 110, -52, 64, -104, -84, 30, -22, 106, 119, -1, 86, -17, -47, 28, -63, 51, -110, 41, 78, 32, -116, -44, 36, -37, 56, 76, -48, -68, -14, -94, -67, 63, 120, -82, -15, 69, 56, -67, -58, 89, 12, 117, 110, -42, -75, 98, 121, 38, 125, 22, 71, -36, 65, 50, 30, -86, -46, 103, -42, 105, -14, 37, -119, 19, -109, 116, -121, 43, -80, 89, -21, 39, 16, 2, -80, 64, -62, 20, -116, 100, 102};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.15303070592749834);
    msg.setSource(17381U);
    msg.setSourceEntity(141U);
    msg.setDestination(26759U);
    msg.setDestinationEntity(135U);
    msg.type = 152U;
    msg.id.assign("TWOURYDDQJADXBVZRHYCFSRYNXKZWSBPXWOJEWUELZQKRINDRVBTIHUZDKNWBEBGWJAZAHLHLYQCMMOKBSRCODPTZJQLQGJCEUGDFIISMTLHRTGSNOKRAKOXFPSYEMTCW");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QSJEMYGYPUNYVTN");
    tmp_msg_0.lat = 0.42569534894960004;
    tmp_msg_0.lon = 0.2732914189220139;
    tmp_msg_0.depth = 0.6445631359814212;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 211U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.27275353961867643);
    msg.setSource(60603U);
    msg.setSourceEntity(13U);
    msg.setDestination(20026U);
    msg.setDestinationEntity(112U);
    msg.type = 27U;
    msg.id.assign("MSAFOXEWJKGFDLVGCDQSQRZBCHBBZOPNQGXFHYVHPIOGRJTKMFDTKFTYEXVMRDETFNYCUJDFNUOIKAOTHSUNVRYDJJBKXMLGWVHLJXYOUGNERWAUDCXFVPSYNCWAHUXXCNDYMISZRUBBCZYAFUIALXDWMIPRZBQQZMFINQSMBYWLSTKVPWJCSWKJOXVZLEEHQHVEIHNUMWIKPBPSVLERCKJHYCWEGAUTIPZAJLTDLPKBIATOQOEZPNGSMG");
    IMC::GetParametersXml tmp_msg_0;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.46976673788697376);
    msg.setSource(3329U);
    msg.setSourceEntity(67U);
    msg.setDestination(47137U);
    msg.setDestinationEntity(18U);
    msg.localname.assign("XEBKLPWQAPAAVWUPWIIFFPMXQBCPXPNBUYLOTNZQNVIEOQBEKJTVNGHLCNULHIDQOFCOTQESYXMXMOTLGAMEWLKOWORKSQJTMVODWYCSMJUEZTKFGMJTHHKJZACXTHSIJIKCZIAMUZIUWLBPSADVUORBXPRQLYYFXNSCRSTYUDDWRDQBXFGWYMOCFZJLGQSAWRYEKJHKHJVPCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.7688973096942471);
    msg.setSource(26746U);
    msg.setSourceEntity(143U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(189U);
    msg.localname.assign("BBEKOFJSHFNPTQSITUVMPLIUXLJOODRSQVDNNGJXZCSUDIVUDTXUOGWHYNVZPIKMCVFRABCBBKTEGXIYJKWKTEAQBXP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.8716690095460372);
    msg.setSource(9971U);
    msg.setSourceEntity(100U);
    msg.setDestination(29525U);
    msg.setDestinationEntity(162U);
    msg.localname.assign("DRTVWSFQVEJORVPOQVEAVRSUCSLFNJZXRIOLUIVMXMNRUYCHKZXLEVGLDGBAFPFYOSTFYKZJGMOAZBBSKBFCFWTXETQGKGQJRGUEXFWJLQAGUTYZXWJQAHKKXDPYRWDEQMKWPGGYHCCZBWPZHHCDELHSULCBLU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BOVBFWAXFGMJSDVMKWETSZIFBYRCHZSASJCMXZLQNZGBB");
    tmp_msg_0.sys_type = 113U;
    tmp_msg_0.owner = 58020U;
    tmp_msg_0.lat = 0.40741603920555824;
    tmp_msg_0.lon = 0.3933165044288154;
    tmp_msg_0.height = 0.9134122330368315;
    tmp_msg_0.services.assign("XSBGUKYVVQGKKBTGEJZUMQQPFTZLFZIXAEQJZJLYJXADACLAJKOHFMZCGIISRPCIYKNYOGQVCSCYWAIJWWIEBUPNXEXWLPMBVQQDCPUCFZTORWEENKCLJUGYQVXGADUDFGVTEBVBTRDNWDSNUFGMWVJELMPORYLOLJYHPTHAARDMXCRDXOKWWHNYHKPXFBWAMYLHTIVMZIIPOKLBFSVTS");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.9431234353655308);
    msg.setSource(1229U);
    msg.setSourceEntity(170U);
    msg.setDestination(54267U);
    msg.setDestinationEntity(111U);
    msg.timeline.assign("EVCKOTAMWZXNNJJYGPPPIZARNJBPUXSGQUKEKAIVULQZYQFOGNCKXGIRLGWFPTTCVSODXUZMZYQPAHNLEYRDFNHUWJALYOCSBJITQVWWIFVBUKJDRJVENFAIMMVTHIISWARSFFVCTKOZJCOYMBLKCHHDYBGEIDZGPVJFHIUD");
    msg.predicate.assign("ESHNMOZNGBJYBGWLYOHSEQAXISAIQIMOPITVQRBGSXCUHKLRJUTGXRGPJQTGRAAVUNMOSJYCXIDCMGYDSTHPHOVVDVNLUARDNKWPITOQXEZYFKSJTHNRLFAKXFVZAPNWHEOFKNLBZ");
    msg.attributes.assign("SGQDXIFAJNNLMJLWGCELJLKZTFINWDJOQCBFMUSBGIFKSDPUMKZBMJELTYVXFWTUZZSADELBKEEBIQARHILFBDGEKSWMNYVWAEAQHHSRYGPFLXDABCUODARXTITVVPXWNMRKPQFQSMRHHVGRPSHCEGNHHPT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.7693352703599885);
    msg.setSource(25082U);
    msg.setSourceEntity(153U);
    msg.setDestination(61301U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("PYZNLDJVKVDYSFZQGVJUMUHRMNLGCMRQVDARYMEYFOEOVWYGEZYQVUPSTUTQCFBAEACGXZVZHICILZWOATDHKQWKLUMPBEOBGKNRGQJCVCVMFTZEIHRDMDPLSRHXQNSPKUFGZGBTBIXLDIDASICIFXYWLTSKXOYRYJOHTNJAHAWJJGXUVRCBBCNOXPWSPZW");
    msg.predicate.assign("ITJQWCSIPTCJXXYBSFVSCZJHLSALPUAXFZGRGLIBDAOMDKKOYWBKFXMMCRWHSUKVHNNJMTOOFTOMIIYBRLCNEVGXMDGIVUQZPBFZYPFVZWBMGIMSLEZKGUPQUNGJHRXTRPDEUVRZQDHLHJQEJLKHPTGWVAXECAEEHHQXVIYNDKYBNPBQTJWYYDWICFUX");
    msg.attributes.assign("DHNHTEFGRUKLUVFHAPXGXYLUHXJAFKAZKLCUHCINKBZEDIXBBKBYGDJWGABUJJNOGFGQZWLHZSDIRPWFVYMZSCKTAYWWUWEEMVNSJCJEEYAXMQPRPRXGENMPZLRIIORPPVRIDHUZAWKTQMSGUASUAYUPZVSGXLSDQFWXJITDZTLHWWOSBRQHQOTMYNCBOOMMNXKDICIPQDCXNVRNMVAVIKYQOTECJYFTOMVNVCRSOLBJOPEFLQFBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.10488894030084006);
    msg.setSource(57591U);
    msg.setSourceEntity(131U);
    msg.setDestination(1215U);
    msg.setDestinationEntity(222U);
    msg.timeline.assign("AEXIPCMVITCVTBJROOFJWOODSLSDZRYKCOPUQEJEPTDHRVUEFSIDLNMBBLMKDTWFHUSSYNTWHWMGLATA");
    msg.predicate.assign("XMJSVJIZSNAYEZDEVJTBEKJBZIEGFUCKSFWOWMZRBZQYPYVKPCNUHYBAAUKTDOJBRLQWPWXOOJWYXCKHJLUEPPYGTLHXWBHFDJOPGLGSEPILSZWTKYSRMIXRKHEJOCLKNHAWULWIPNDKAHAVPMQGVFQCMGNTQDSNZZMBDURLUYXL");
    msg.attributes.assign("BUYIKMYIRYLJTCTRUOVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.5826664364235598);
    msg.setSource(59482U);
    msg.setSourceEntity(102U);
    msg.setDestination(7537U);
    msg.setDestinationEntity(9U);
    msg.command = 115U;
    msg.goal_id.assign("NEQTOJKWJLFKFWTEDVUZSRDZQGWIYAPVURJKQTLZAPUDUEBTTWSPFPHGCCWPQALIXDYBZNFNDHSSZTSZSMNCMVXARYHNCPYMRMVLPFOXAQZEOXLGXYMMZKYVYJKMWEXOFYAWJJKEZEVXMRRJUSNXBPRHNLAYRBCGFVCGIOHAGCPLZI");
    msg.goal_xml.assign("TDFBBMQOBCFWSVLJDPKYJGNQVDZVUPXBEXCWBUTKLDNJILMGDHKCVAEVTXEPEZPNENQASOBPSJFRGNHTYTYXBSGSRLTXZUJJAHMZNWDHCGIMHTJUNCFAUHSLDLMWRZRZVMJRRSTMAJONZRGWOIXLQKOYKFKZHZWISCXFLDPRTGPTVREFMLBDQOKGKBANVOQPWWIUCFEUZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.9085510659085833);
    msg.setSource(12225U);
    msg.setSourceEntity(218U);
    msg.setDestination(1097U);
    msg.setDestinationEntity(193U);
    msg.command = 224U;
    msg.goal_id.assign("XEEORPQEXVKEKDKWMFKNVRQIBMCNFFVSVUHLZTJRTTJYCWBAGIWQPBJMSOACGIBUQNWPYKYPSVDSACELUIZXHHGZAFMLSFUXUZRGOFACHMRPDVDXURLTLATBZDOGEYWBXAYPDXTYOVTLWOJGHUUTQYNPOHANIQDZBGKHBQVGIJZADMYRWCUEREPIKGELQLWOSJCPPCBJHMOUIQZTSYKSWBINHJSGMKRLTLIEFVS");
    msg.goal_xml.assign("FWGEOKJKQOTSFUAJPGMWEFKGSWWYOYFTAGSBTIHAYVVYXLGQMXMIDCAXMECOEMCDRHUZFXFHOXTCLEKDVJEGMJVEMKGARAQVCAIHVVKIBFTEPBZUFGZOTZKMZPDDINYIWCJXVYOQMYFAQSPSBLXVWNNYNDPGFNIZMDJUDHHRBUWCUUPQBTJLOQHQKBBLDBJLRLPKTSKCRIHRENNZXSXQYSIONUJCPJXWPWUZLTREWVROCHZIYSABSZQRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.6190456338305247);
    msg.setSource(7468U);
    msg.setSourceEntity(112U);
    msg.setDestination(32521U);
    msg.setDestinationEntity(33U);
    msg.command = 122U;
    msg.goal_id.assign("JYKUKDIIYYDZVGJWVHPGLCNTRUQSJNZBFODKWUSXSEQZPICAHAYMOTSBEVPDUXULWTOKKHGCPRCAAUXROMQTAERNGQOSLIUJVZJDKZGYHBOQZSJOMQGVUBPPNXIHZHWQFCDCMXTYRTRJPMBHLEWZXJARKDEFXCTBTNFIFNEXAEQFRNWLPOWENQWKYBPVFLYIDXBYQCX");
    msg.goal_xml.assign("SZAXGLEQFLTJWPBQGGIGDRTYTNZYXBMZJOAJBLVWXATUJKARDTFCTJQDMWOSFECEQCHHDSPKYXQCOJWI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.16135824877701688);
    msg.setSource(19195U);
    msg.setSourceEntity(244U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(189U);
    msg.op = 36U;
    msg.goal_id.assign("OUDTYSBAPXKWGGSMZQWATXPEIXNOZUTYIIAJBLRXAMDHXTRQHJOMVNDFAOFTRWCJYUOGKEMGPIQNNCESOKZFQCOEIGQNIESQVBZBJGVKEQNDFHBVXHWCFSKSWYZVRLZRCGEQPQCCJBZYLPFITT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FRAFZXKSWBYMHLINKUIMRORESZJDZTAOJDEHGANGIKNAUOOENTOPCYTUTTGWFVZXZEQGVZVCFHPSPRPYCOAVEXLVSAJFSEXJSKQRLRUHTULHPYSZOMIJWUKDXKSTGFHAXBCFCMQGWAEWUEXDDWVPFFMLKOLQBYDIPLIMMWCFXQKBZDVLEYUZPNDHKWQBUQPJPWAOCCLSQZERNXQCYRTBRYYSMNICNBJJYHGJGJDV");
    tmp_msg_0.predicate.assign("XCDOVXKUBMHKBSYDMGHMDKZRMJWTKRPJUCKDCVXXAHBAULSFUMWRDJFOCRCTNQDJWVKXARICJLIWUNBXEIDNXVZEBNLWPMHQAOXXANWHSTHJOYXNNVBHQGVTMFTNKOLQEWOVPLBOUVELGMTYWSJGPRASFPISBEPSIVOFQIPCDQTTQJONEDMNEFTEYUFPHRSAMJLRPYGSWYHIJZOZLZLPEYQRUIQTAUFLHZ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.6158949978666197);
    msg.setSource(749U);
    msg.setSourceEntity(143U);
    msg.setDestination(6815U);
    msg.setDestinationEntity(148U);
    msg.op = 105U;
    msg.goal_id.assign("OFWBDNCQWBCCEYGPRTQHCBGHDOYFJAEYAKOASCLULWIJRZLGZXRCDFQYINBMLOIRHXDEOQKVLVTZNXQYZKGEJHNXDIESAFVTVWMAIDJCRFQMHVNRBMYLNKGOPMSJASITOWFQBUEXQKLXRBUOIAYKIVYOTVHFQJWVBMKFTZWZZMCKFPATRXXUUJJUNEDANHGKJBWLYHOPEDUPPSLVTIMPRGSFGPQSKNZESCTWTXXDMU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VAKIDWKHFPOZZAPAJDMBFNKXDCNPPOJRVBXYEEEYRGWTMYQAWUTVKEFHWDSZFXEXLYHZFGNEBXJUTHRRYRUDFDKEJVQGCMGQYLB");
    tmp_msg_0.predicate.assign("FJJCUONTIFITHZZOURWOZABTJBVPVRZJANYMSTGNOVRHLSBEGWZHOXFQHOEQGCCKFHKIYRHDWDWUYEBSCQASYTQUXXG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KLUZYKYPTGORWBOUHMLZRIMBJRVRNXXLLAOAOTTWAEOVJGFIMMOGYEDWCDXAICIGNHIXVFNISEPEDKXSONNOWKGJMWDTQSRPBEJMQSLLYEAKAVUZFBTQBHIXVTZPGRFYNGVZPFHWCCQXPHWCWQJMFBMZDAPMDTSNUSBJYCQEHCVKQAQQPOIJZKFUSYZXWGJHLNUMDDAPFRXENQWIZEUHKHSVPYUBAVLUCUZLLGRCJDKKFGDXEBTJYRFSY");
    tmp_tmp_msg_0_0.attr_type = 230U;
    tmp_tmp_msg_0_0.min.assign("UVWWHZOSDQTRXOGEPQILOOHEYXTVCBCSASWUDIPOGOVYXXINTMGTQZJAAQRNVAQYQXGDXZNHBELGPJUAYJVTELBVIFGGETHNLZCJAGCBWQZAEYLNSKCJJKU");
    tmp_tmp_msg_0_0.max.assign("WSZVDLUZARGDJRUYPJHQSWFONHNZZHIFHYIYOSBSRYTCKYILQWGERDEJZYICRCUJOKUCTEJIAGIVIDFFSACNBSIDUNMMLFPAOSQNFPKQRVBCBKZQHVTMMZBHCFIX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.8470055478553773);
    msg.setSource(42846U);
    msg.setSourceEntity(14U);
    msg.setDestination(35785U);
    msg.setDestinationEntity(221U);
    msg.op = 128U;
    msg.goal_id.assign("XZLNPQVPXAIMTCPFKIKEDKBNLHLMCENBYAWYFLAOMGSTUWPQMNFVNRLUTVZIIOXUGLOPASIZTVAVPZKUDBXGECBUEXRCQLOTYCSATJJZFGJRJNKGDDBOENGMIURYHMVXWBGDCKRESMPSFQFSXFBTADCEAJJGEFTHRSSPOUBUPWIMUZNHWUKVKHXIYOZWJIARMJDWYXBOMQSVWVOYTKYGZNVQOHPTFRLXSDBHHK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MVNIHQTCYJNBOVVSTKWPUPYTKTXAFIODZMGTDYCXUOQNMMVFLQXIWIUGJWFDAPLRBCQPMXAWMJXDAMBSHCSCYRSLSCCRDVNBZVMZYGECBWLNTRSXLANGJQEUEOSQRQQDETICVOBIYRXDREKKZUNPHHVJFBPHXUAKQWDAMAPJWGNOWLUJBKYAONITGFVJSHZQWLTHGLYEPKHSEIEJ");
    tmp_msg_0.predicate.assign("YUZZAAUNKMFWTVOLQNKTBHJIUFICKBJAWJTALNRKLTXURFOEVHHMKSCMCOTYNPOHKHMRHIQPGHYSELIIBXUVD");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.568477382509052);
    msg.setSource(62790U);
    msg.setSourceEntity(104U);
    msg.setDestination(24783U);
    msg.setDestinationEntity(239U);
    msg.name.assign("VEQDPLSLDFUPJAJMNPGVAUYUONHBIJWSTSLXAIPURCSXVBFKVVGGIEHLPMXAKOTEGOCILCSKHAXHPAZPWYLGQCTNRERIMXQDEUWVHY");
    msg.attr_type = 203U;
    msg.min.assign("MULRHBHSDLEGPIYGPHYYDRGETWSGKTHCTBKWSKNYPIVBQFRZWAYMOPJSGVSOOEYUWASMJCYXCXNLXHRCEMODANIZAVDVVJ");
    msg.max.assign("IAPCQSURHHNSSEGCKEWMFALIGZJLVEJLSWSZKJMZBKBAXZGTLNRATPBMBFWOFBBTMERXOMIOQIQWUHCKKEPDCJHADUHXUDMXCHLDEUSQWIATVQSVPFFOWOCDETUDRVHYAEDSXCMIIBZDNZOKMROICONBQRYNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.9407382715444297);
    msg.setSource(5708U);
    msg.setSourceEntity(126U);
    msg.setDestination(64080U);
    msg.setDestinationEntity(86U);
    msg.name.assign("THBKYYGKTAJHMUSTRQWFGRPHVYFAFWEDVXWBCMWFNAUALVDUGGXPZMZOOCUDXTDOVMJZAAQBEQLCFCWEGGNIXRTBCVOKKIDOSBUEXWWLQMHXKCIVTFXNEYSTAHDUZJUGSFOPERCMVPOVRELRDBZZHAMLMJNHKYTICJIXIJKQPNS");
    msg.attr_type = 145U;
    msg.min.assign("PFEXKMODGXFFNANEYZIGSQJHESQCIEHEKEOBLJFRMLFNLOHSNLSNZYBCUMVMXCOBZUGZKCYDUBHFZEVIXBYQDKUVYAJAKWKERZZPUSXNTEXGRJNGOALICKLXDCGPCFPTQQPDNPOTQMLTQVKDUCCDWIYSBURSXXZATQTDTROOPWZUWHLOSIRIWIVRVALMIOAWIGPJYKFTSYPXGNRGJHMYMHHWZDUWLTTPHKB");
    msg.max.assign("KMWXZRRKLGYDWJUFJXSGNKEDHLYIGQCPYIXLHJYGVBJWAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.8158712722662532);
    msg.setSource(45882U);
    msg.setSourceEntity(164U);
    msg.setDestination(43840U);
    msg.setDestinationEntity(248U);
    msg.name.assign("UKJUPVGQGLAAQQDZWMWEUDMKPVAHKFWPOTBIUGSCTLTZYHJRSADDGDGWNLHHXCULYMXXOBWALYUZUGSEVOFISJYJSQMGULBNJXKCBVZPVESXMPY");
    msg.attr_type = 176U;
    msg.min.assign("GTAIPHSJTJZEPTZPKLSSCNRNVDWEDNWAXSOYLBELMKJCSIJVXKLNVTJZUVMMECRBOJVOQDKUGEHHKOFYXHLQXXHZBQOKRAHWYCRQZBPGRFZVQBURUITDXAQKOFSWIJTAWWQYAGEMFAFKNNXQBORUUYRCSNNMEZAFMBPFDSHGGJWUCHHACLQYFHFDYELEVZIKMCSLAVPPPYMYIXIJJTULRLIDEWIZTDMSRDDBTKPVOONGVX");
    msg.max.assign("HTEWEOGKQSKOOLGOHMWOKVVXDJENWZPLWOQLLGCUIWXTXJDFNDIUVBUKZAKDJCZVBYCPQZCYTSJQMHGPOFUDAQZVTIFLNSAEMGZBCQVVNLAAPUBXYFYBDTPCVRDRRPURDHWJILRORASPWCQDAMCFMRKYALEHUVIMEXQNXREPXJKYHJIGSIOMFNSGQKHNTBWTTUILOCAEHYFZIFBXLMXKIYCFVHAZPSJEGKUGDYJYTHJWPWNBUGRTNZNBEMSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.6680417473706907);
    msg.setSource(39091U);
    msg.setSourceEntity(124U);
    msg.setDestination(60267U);
    msg.setDestinationEntity(111U);
    msg.timeline.assign("BKVWDTBZQSEEWNGVDJPLPLZBWFEMHJGCPAYNHPLLXSAUKFLZIWHATHN");
    msg.predicate.assign("RWNZYCFRCSOMKPUSOVSDHDNAWFZHZIMKHJALRKTLYQNEZBQNPTKLVFRMTIEMMEVKVHJBXYWXRPLUTBXUFPGSLBPMUHUCOKCNFPGIWOVFPBERDJSVAZBXODCGZRKEXWIEXLQQGHQDEZUUQDGNYMNADGXAEHLIQSITUTZWRRJBPNVNOISBACIJIUCHFYTAAORGPJYIKMHXDCSMTVHLDWXVWEJJBFONQGBSOZGJCPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.5496737619878147);
    msg.setSource(41028U);
    msg.setSourceEntity(226U);
    msg.setDestination(49401U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("HLXTLMTDUDHNOIJVBDAZMATOIOLPBVMUOTJKFFIIPCETVZCBHLRQNSPYGELCRUGQSKCHFZKXRJWJRFKEXHXFRODNBMJYSLYFZLTWTCVRPMOXORVEDUGQJDXGOQBQNBWLSAMFE");
    msg.predicate.assign("CIKDMDAJXHRHPVLHNEHKVGREDQVBGLKKGZAJCJVYREABEXPXCTDZYSETDMNLSFAMSHPPUGCTYVHBWJIHHXSAAXMADPWXRUCNNQUQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.13221924894159964);
    msg.setSource(64320U);
    msg.setSourceEntity(26U);
    msg.setDestination(39569U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("DOUIHPXKLFPWSBCRAINCKOXYEEBMPJKKLTYWGQYXBRRHCHTRJKIRPRXZJBPDUFTINMNSPBVUHSBOWOHDIUDVPVTOEYAS");
    msg.predicate.assign("RHKFCAGGNYFZRUKDHCRQUHVDLPGFCPWWXNOZIZSTBXFXQLGUEBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.16049985929875676);
    msg.setSource(36723U);
    msg.setSourceEntity(107U);
    msg.setDestination(7442U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("VWXELDEAGULUPUMWPXGDMCLPYTBJQIKANRBXWKLHUDTIGEHKGVGJMVMBOGJTIFLPFXNFKMFEUZQDYWWTHKSLEZEQMXODZEZVARUPQRAYVSCJOCVDNDAOHYAZSWIHXQNPFFWYCFDSZHSYMOORLIJWGRQCKAHPCFZSQC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZLPKOVYFTKQBXXGQAOJCNXXCZJFVWPWQMNLUBZYAZZCDIJXNIBWRWMOESRRRNWPFZGBTMCGIYXUFDQOSUZLDEIVGTYMBVQKLLGPRKNJUIZDVHXGMUSIPNJPOHHIETWTLQHWRDSTRHOMBASWSEYAJUXUCLVYNVWAEBOFRMAGMXPASKRVCREPUVTKFICFZBHTQHJNNUKZIPIDNJPCSVMCB");
    tmp_msg_0.predicate.assign("AOERBXBQXKBMJCOUCWIGOWRMLRNICFVXLSEIZRFLPKDFWZSKMVOSDVZVGMUVYDSLKCJWSAMHLMTXXABJBIHLPKIFZYALAOBFQCPFRDNSQDYRFGWQPEAGXNEW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JZXTQAEUVPMMIBHQREIMVNSKDETFIIHFQRRTOZTSQWPPWQLPRZZXXMVGDTGRGMINFCQQHZAVUQNEDWUMJLDFJYDAOGWRBUTUYDKHABPRQITLJCMFBOVEXXAHAKYRYOJFYZOYTMLFOZHECMYNPTWKBFKSQSNUKOKAXABLGSLURJUVVCLZUNEGVSHJYDSGJILHBGZNCPSGNPJ");
    tmp_tmp_msg_0_0.attr_type = 73U;
    tmp_tmp_msg_0_0.min.assign("GBXAVFXMTDMONFHGGVRCRBXMETEQKQRPXBLNFAKUSIHAZRYCJMYNBPZVDPOMBJHRXPJHHAKZAZHWYZKWVIAYAQFZIAWMGMWOVIJFZSKYNSYDOFFOZKHMGPWRNMLVIWRQGBPIRTWSXOUALIVWUOQTSLVCAINEJEFUWUHSXECDTPELTJIDJUDDYEQGSLBBFUJJZPCRBKCLSNYLOBOSJFPGTCDTVHVCLUNXOKCEHCUQQQPKTYZK");
    tmp_tmp_msg_0_0.max.assign("SLBUNLASLVSWMMBKDATZNGQTKZFDSLWYIXOPFLRVOTWFKBRSXEDHSTENXPQGWVYCIWSCZLCJANEIPIYFVSYZJLXBAJPVZOOZEBWWDOHDKEHEXBTADTIMYXONTZCXQRAFFUAQUKJLECUROMATEWJYRZHGUGTAYHQCKIMVRBRNHVDY");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.26767298557708197);
    msg.setSource(2657U);
    msg.setSourceEntity(216U);
    msg.setDestination(1344U);
    msg.setDestinationEntity(223U);
    msg.reactor.assign("NCHHZCMHRMLFJBPWMREDU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RLPQTFWCFYWGNQMQAIBTWMHMPTVAIXKAEYJAAOZQPUOQXAUMUHKVNJQSIJZPXMIGXTGFBTXURGDENDTYDLWWUNHWELYSJHRIWKLCANQJZQVOTPJEMDVIYHKEFGQCVOXSSXFBUCGKXIGRLFLRSHSVZNPJPKIKR");
    tmp_msg_0.predicate.assign("PGYPSKZRATGTUPOHQXEJKEOIVEQWKHLYAXRAYBUDLQFBFNWFXGIEGSKTMSYZDTCMSEGSDUWCGZLBDMIZZDWFTAXHNKJVCTKCQBBUFVBOCIJFTXIDMVHWKNRAPGYVXJGJQYPA");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.5865194945860656);
    msg.setSource(11553U);
    msg.setSourceEntity(163U);
    msg.setDestination(43526U);
    msg.setDestinationEntity(202U);
    msg.reactor.assign("QDOFSMWMRASUYCFILHIPTTKPTATMNHCBDJDWZUDFLVLEUZGLVBYIRLEWFSGEOUCYQJWHQSLYPISCCSEOQYHANWMXJKNXKXDXZAEKKIGZBHBKACJVSNERNKUBTRTPVVGUCPVLMZHRTPYLXHBKHFHGMIDXBOXPOYMUTO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.7820672656281584);
    msg.setSource(575U);
    msg.setSourceEntity(175U);
    msg.setDestination(20453U);
    msg.setDestinationEntity(187U);
    msg.topic.assign("ZAGYVXWTUKTIGZNEHSWMCXGJFQJYDMYSHAAKFAUSLPXWFZEWSGYGLKLJROZRHYUWVFMBZEAVAZXPOHQLCQLELRCBCEDOOKBNUCDWJVSLHCXDXNMYAOGIIMEWIQPBSZFKIAIOQGATXGCPJQQUACRXSBJQRUXGDDSVFPUHCDIJMOTNTNDLNOVRUFEKZYMQ");
    msg.data.assign("DRVRNAWIIQVQPFWUWNAUGJTZMJUEJLWOXMTVECOYPZFDUFJDFKNGNOFLQHCRDIXANBHEUKPOIIJBXZXHFPEYNBOVPKRGLKOOTMMMTREBPBSMHJPVXHQQSDYUSWRUKWYLMULRNHSINKMCSKYWJADPUTOBZTVIZAUWKGSQLXBLSJKJYNZEEDBHGJEYYBRDDVPCSFAVACXAHICFGTGMVOTAZOGHNAICXWFYPXBREGLZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.5466132123812494);
    msg.setSource(46463U);
    msg.setSourceEntity(112U);
    msg.setDestination(37763U);
    msg.setDestinationEntity(111U);
    msg.topic.assign("BFVWBRDBUHOWPRTGWKVYCHVGUXSSIKLNEOXIAAGO");
    msg.data.assign("QSUYOANUVTDMQSXPGCYAJWFTTVBTZBQLIKNBZLRJQKDUWBFERBOFJSAQNXMQVMJHVCYNCJNVSDYYMVMZWTYRDDFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.15983207455333304);
    msg.setSource(59209U);
    msg.setSourceEntity(148U);
    msg.setDestination(10750U);
    msg.setDestinationEntity(175U);
    msg.topic.assign("SFJQBXNRVZXOE");
    msg.data.assign("UPZPUQUZICMXAFUFSDBTZBYMFQXIKHFFYBCKUQCRJOERTGEDJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.27007657744556335);
    msg.setSource(55863U);
    msg.setSourceEntity(212U);
    msg.setDestination(3283U);
    msg.setDestinationEntity(65U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {88, 45, -60, 56, -34, 0, -27, -105, -41, -47, 7, -62, -20, -23, -69, 101, -33, -30, -124, -43, 93, -67, 113, 62, -34, 42, -6, 19, -39, 90, 116, 48, -12, 61, -43, 70, -3, 99, -56, -50, 84, 47, -84, -43, 5, -19, -101, -50, -123, -102, 112, 95, 47, 50, 65, 52, 59, -40, 3, 123, -57, 37, 119, -94, -29, -97, 55, -89, -19, -128, 104, 19, -48, 121, -93, -109, -114, -90, -62, 17, -43, -93, -105, -95, 96, -93, 42, 115, 50, -20, -105, -72, -21, -88, -72, 25, -117, -85, -86, -97, -15, 110, 56, -51, -102, -48, 120, 61, 1, 77, 39, 6, -96, 63, 85, -32, -36, -94, 92, -95, -7, -80, 96, -8, -79, -57, 66, 112, -85, 6, -77, 66, -87, -38, 69, 26, -41, 81, 71, -52, -104, 124, -38, 32, 125, -9, 9, 76, -37, -79, -57, -24, -93, -106, -108, -8, -93, -25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.29104898688874414);
    msg.setSource(36982U);
    msg.setSourceEntity(130U);
    msg.setDestination(3096U);
    msg.setDestinationEntity(251U);
    msg.frameid = 87U;
    const char tmp_msg_0[] = {-57, -127, 56, -128, 97, 123, 94, 13, -101, 104, -108, -14, -82, -25, 37, 123, 68, 63, 96, -105, 34, -107, -105, -85, 1, 71, -90, -21, -44, 76, -95, 6, 16, 74, 125, -119, 17, 104, -113, -49, 90, 69, -27, -70, -46, 27, 36, 66, 118, 105, -34, 87, -77, -99, -61, 55, 103, -47, -54, -30, -29, -14, -109, 11, 13, -59, -127, 14, -18, -103, -127, 92, 84, 15, 48, -24, -44, -120, 90, 10, 65, 49, -16, -44, -34, -81, -69, 19, -18, -90, -84, 63, -44, -102, 116, 33, 31, -115, -111, 85, 40, -1, 75, -102, 49, -103, -93, -92, 107, 31, 125, 44, 1, 99, -63, 124, 111, 51, 35, 42, -71, 70, 106, -21, -44, -56, 93, -31, 24, -6, -127, -20, -14, -45, -16, -31, -83, -17, 3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.05327155391735661);
    msg.setSource(12816U);
    msg.setSourceEntity(0U);
    msg.setDestination(11863U);
    msg.setDestinationEntity(35U);
    msg.frameid = 77U;
    const char tmp_msg_0[] = {-60, -19, -38, 41, 52, 106, 13, -123, -101, 63, -25, 123, 111, 67, -116, 86, 39, 19, -13, 116, -49, 114, 19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.8882347453833523);
    msg.setSource(54719U);
    msg.setSourceEntity(235U);
    msg.setDestination(38667U);
    msg.setDestinationEntity(123U);
    msg.fps = 183U;
    msg.quality = 101U;
    msg.reps = 77U;
    msg.tsize = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.12680484545053872);
    msg.setSource(8729U);
    msg.setSourceEntity(23U);
    msg.setDestination(40045U);
    msg.setDestinationEntity(165U);
    msg.fps = 105U;
    msg.quality = 209U;
    msg.reps = 137U;
    msg.tsize = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.514814940267022);
    msg.setSource(37743U);
    msg.setSourceEntity(101U);
    msg.setDestination(13003U);
    msg.setDestinationEntity(108U);
    msg.fps = 149U;
    msg.quality = 3U;
    msg.reps = 236U;
    msg.tsize = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.3311001858254029);
    msg.setSource(34194U);
    msg.setSourceEntity(24U);
    msg.setDestination(63851U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.9599645288508756;
    msg.lon = 0.35573113732328154;
    msg.depth = 119U;
    msg.speed = 0.3617186331687521;
    msg.psi = 0.9581599497833355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.6362647400580432);
    msg.setSource(46272U);
    msg.setSourceEntity(226U);
    msg.setDestination(12788U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.44460161324415814;
    msg.lon = 0.055597094698786376;
    msg.depth = 2U;
    msg.speed = 0.47872332619544;
    msg.psi = 0.5103627319174346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.24564775052373966);
    msg.setSource(13812U);
    msg.setSourceEntity(155U);
    msg.setDestination(44362U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.2397800869996033;
    msg.lon = 0.13117655125022942;
    msg.depth = 3U;
    msg.speed = 0.5243917891897906;
    msg.psi = 0.3488694136250826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.609699420757403);
    msg.setSource(37423U);
    msg.setSourceEntity(16U);
    msg.setDestination(55202U);
    msg.setDestinationEntity(145U);
    msg.label.assign("AWFDQQCJNTTEYZNQRZLSDDOTSEUCSZXGTUCCRVENWRONOENITFWGHGOKEALHJZFDLIKZXQPZEUOLPHXVHFJAKGBVXBLDPSAOYZQMANBTBYIQUNITLUCMEDUHTNQJGYVXCJLGMGRJREQRNCFDHCGBPIWYZJIGKVBXFOJWVPFQTLAIRXHHXPUNSYYSSPRKBFHBXPEIWUFHVAAPKIWAOESDYJBWOYKMM");
    msg.lat = 0.3176878878819056;
    msg.lon = 0.6077304484488217;
    msg.z = 0.1608740405021415;
    msg.z_units = 84U;
    msg.cog = 0.9139666675893209;
    msg.sog = 0.9427125667737085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.7728744174891155);
    msg.setSource(44774U);
    msg.setSourceEntity(116U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(116U);
    msg.label.assign("IWFUAIXPPUKJJTZMEIFZPAGWCULXREYDGTZAPSNHNGGYOPHCBLSHVAKEKHNDAOZYCVXFPVXAKGINXRELPOTSLQMLWTITEXMLNVKKMFOBJZRUSGBZURBZEJSWXKGAHDMCDEU");
    msg.lat = 0.7353105492643865;
    msg.lon = 0.378196714455313;
    msg.z = 0.3037661104446927;
    msg.z_units = 174U;
    msg.cog = 0.3118780047775619;
    msg.sog = 0.848741115746488;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.6114279287944799);
    msg.setSource(41074U);
    msg.setSourceEntity(18U);
    msg.setDestination(49687U);
    msg.setDestinationEntity(184U);
    msg.label.assign("AEQPKACKXZBNBQNNPVHRIWONWHWDKRJCZJEDBWWHQFPERGKYVKLQTWUPASOZGCVK");
    msg.lat = 0.09301483968137092;
    msg.lon = 0.20030686744177484;
    msg.z = 0.5919229779139897;
    msg.z_units = 56U;
    msg.cog = 0.5773717963543136;
    msg.sog = 0.9258379276640007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.3115935006642335);
    msg.setSource(10779U);
    msg.setSourceEntity(146U);
    msg.setDestination(62989U);
    msg.setDestinationEntity(154U);
    msg.name.assign("UEHSQUVOOWCJGKPVHVWFTGHPOGCENPYWMZTLFMDVZRFOUXREVMVCSMDWXIIWXHMBNJKXLOJ");
    msg.value.assign("HBTJGERAUGMSZCULUEADVFSXSGTXEPWTVMKAZACZXSIHAJFDWMKTISEBGKEXSQIRPJYOBDGQFDFNYHQHQJLZMQPBXCJEOEYZZEOGACNKIXMXJDWANZSHASJCZBLYPDFMFCPDIOWHPEKYPZRTVQTLKTOFGOQWUYIA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.6737354670700713);
    msg.setSource(55540U);
    msg.setSourceEntity(172U);
    msg.setDestination(22251U);
    msg.setDestinationEntity(74U);
    msg.name.assign("OTJEVGGSOMQONTRAFMZSAWLVMXEPTNUDRPNCLHDARVXBCBWDSNLIGQHWKNMGOVSSAXVPRWFTNUJQEMKSEENOKCHJCEPURZQCEESYIIKFWLLWCDALIXYGOVLJSCZCQQPANDBOGOFPYVORZGAFXCIJYYBHWJIBZZQU");
    msg.value.assign("KQHIYEBEQXOUGPJVISVMDLOKRZGKXZHUYUAGQJOPVWVTPWHNABSPXKMJZXSKATMKGPCIAAIHVDQXBWZALMDUBYUYRAWCITDVTLWZVTIMTULFCSNCOUMYORBEZHOKQFSEKHNDIYGQPJNLYCTXFMEPFKNRLDRJWELFJTXNCENQXVZSBAPFXFDBSSHICRFOYCLWYTJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.5681751332395762);
    msg.setSource(60864U);
    msg.setSourceEntity(172U);
    msg.setDestination(44710U);
    msg.setDestinationEntity(183U);
    msg.name.assign("WCGMOCERMYTWUIPHBXDVSJTWVXFCQWRFZDA");
    msg.value.assign("BDMDJMKERSVGSXJSIYUYEYCPBRSJUAYGBRLDEXORNHBIVYNEKUWZIGPVMPWFMASWPIXPOHLUKICLTCTIEFUDXSXGCDQOOKCRRBCFSWFLWBWEFLTMGFJNKCFNJQTJZLYWVCNMBVZDRFLTAKPQQMOMHATHNHYFLXERDXUZAKOAYOQVYEFQUGQUHZAIGSVXQMOTWJWOIIJHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.3409850144115335);
    msg.setSource(57582U);
    msg.setSourceEntity(232U);
    msg.setDestination(20927U);
    msg.setDestinationEntity(82U);
    msg.name.assign("FAFBWHPAXCHSSUUUKTYZEYIZGSIUMMYDDGNLBRCYVPXEDPNIPFOAEDLCJBTGWQRJURVLUJVQDWJHTGKFSOQNQKBJRIHKZZUXVVTWAIJBFMGEMKMQQLNPLINEBTWURXYFUFLGCHJSHIAXCEOZCGQQCCNFYZPNYFMZYNZTBXSJZVFODQBPQVYLWSPMWVMNRIISMWIOKJYNOTMOWBEXTSTCDAPGAUTKKRRDDD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KBVPGFHSBFACQUEVYISFHGXZBBUXCXQBEOLQRCHIYNEPWTSMZJDBMESWCUFPIN");
    tmp_msg_0.value.assign("VMSNKTDPNTZIFFAXFZCNVFBZXAOPNNJTIRKWZLKDQAQVOIXBTHLWOEJBPCATNEYUZLSQDYWEOFYLAAQRWGFXXCDQHDHIOLSGW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.8402753588304934);
    msg.setSource(58711U);
    msg.setSourceEntity(29U);
    msg.setDestination(1571U);
    msg.setDestinationEntity(87U);
    msg.name.assign("UQABBLZLDHUVNXWBTHHXEZFSYKUEVJGPRVLJGIPMURAHOTWFNAVSPMCMXUFNFWDVAIKJSXEGOEAMHWIWMQRTCZYIAMCOXGKIEZGSZBTDDIUUSQLNHWOYNHQJSMTYWCWHFYFFWOPGLEOVJKRCKZVXZGDPAKDPTJTWQFLKXNELRFDUJBBSVOZCRLDQFIYBYMTTQIQYTAUJXJACAXOSMGIQICVNS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.7102347484335353);
    msg.setSource(47880U);
    msg.setSourceEntity(249U);
    msg.setDestination(300U);
    msg.setDestinationEntity(28U);
    msg.name.assign("VKCDBHOHTTTXGNMUENKWSXRGEFCOWIVCMBMMQFRNKWMDUPSMPHRLSLZGZIDLDAGYQXFHHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.5409289235204489);
    msg.setSource(10479U);
    msg.setSourceEntity(93U);
    msg.setDestination(5415U);
    msg.setDestinationEntity(98U);
    msg.name.assign("NBLQRQEUWBTHWZBCPNKFPXEMTQXYF");
    msg.visibility.assign("HQAGPIKTOUZGEMQENOQIRWFATYDJSZIWSYISNVHOBPVGXBJTUEULRAKNIWVEJFHJANFMIDNCBJBQIQIKJATRKBLDVKSHIPCYKHXTXPLEHMCKCYWBRQWMPDVPGLKOGXJRCATECWEDOJWYNRWYHFVHBQSTPCMXNMPCTLHVFLZSOMIQUYBRXANOMDSXFCVAFNEZVBXBGRAEDOLZJSGPMRYUYHCQX");
    msg.scope.assign("HMMUKYIPXDYDSACZFEKCPHCPJLBLLKNEYSLGIFCTMUCORENUJVWJZUHCPFFAIKAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.2533508107514798);
    msg.setSource(24511U);
    msg.setSourceEntity(129U);
    msg.setDestination(33823U);
    msg.setDestinationEntity(74U);
    msg.name.assign("GHBHDDFHWDPBIESQXXBKSPCXVQJQPGMAMERZRHKKNMRNUMSAWGZZJNXZPUJFLPYWHGZUDGYWTINNDOBZKEULPQYKSBFAVNURUUICATTIIWLLDTKODCDQVCULNHIPEMVTQGTCKLBUFMSBTTJEHQSGTLLARPXOKGOAAJSFGLZXOCJVBHEAPR");
    msg.visibility.assign("VMJJYHJXNODSPUAYZHMZPRAWQRQECVTVOLFAUGCGRCWAGVBJVVNUDLBCHNIQGKZLXTMGTCRCEBJPBKDGQVDBWEEOXCEXYYSGWWYL");
    msg.scope.assign("NANVIKWGYVICOTTDNWXLDKMCOLSFQYPARDGQIMYXVWUCULYUJITLRQMSDHDBUIRAZZZJGLEIMIJKOHOZBGQMCUATXHSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.3868638056254059);
    msg.setSource(42629U);
    msg.setSourceEntity(179U);
    msg.setDestination(55677U);
    msg.setDestinationEntity(14U);
    msg.name.assign("FYVLZFFGRPBLXIUNZWKCDBULCNQKGILYEVHZXWMQYPDJMHCFMZKXEHGDRURJNFIUPQXMDLGORLKZBNOSNXEUHQRSWNXSMSJPPGRCUYNMYMOLHSEXJCUAVWOYKHQXTGERCCNAJVSLMZRJSRGHDVTMWSUWGVTPBFFFDOOVWXBDYQTEWMAAHATTCAIKPSHBJGVCPTQRXBGZTAKVNTVFOJOEAEWKJDPUI");
    msg.visibility.assign("IZBUILMSAHXHTWZELAULCMUVJYRKRXGNWETTPUPTOXYLWEEUORSYBRLSNAZCDLOPEIDEHJYNMUJHBGZDWFPFDFDJXMKLZTGQKGWUCD");
    msg.scope.assign("AOTGGKSFIWFVNFPOKSFIQPIMXBQWPNAJLCGYVKKHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.06824128894690573);
    msg.setSource(8788U);
    msg.setSourceEntity(66U);
    msg.setDestination(63352U);
    msg.setDestinationEntity(44U);
    msg.name.assign("MHQERPVNYXXGLAQQDNYGYFPMBBFMEGNZAXRICRWCMKLOTNSUKSQBAFKRVGNAODVTPRIHKCZTGAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.19542548654797132);
    msg.setSource(58663U);
    msg.setSourceEntity(65U);
    msg.setDestination(33796U);
    msg.setDestinationEntity(39U);
    msg.name.assign("KIUOKTIUDHCMAJXJVICNUBEDKXSCLBHRWURIQZVNMAFQATHHYJOZGFXOVJZLRYSUHDDXXEFYUYGYNRNFTVRLZFGCKXEMMFEVLMLAZMPRVBGSCLXXBCYTNWRPCZPPLLCDIQDBPVDWPNBSMQABMKCESW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.6525211214545267);
    msg.setSource(60171U);
    msg.setSourceEntity(252U);
    msg.setDestination(2622U);
    msg.setDestinationEntity(195U);
    msg.name.assign("WIJQXLRMSUBPASSTUATMHMBWCJCXDHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.030453857951787233);
    msg.setSource(14937U);
    msg.setSourceEntity(232U);
    msg.setDestination(5648U);
    msg.setDestinationEntity(169U);
    msg.name.assign("CZNEJWOFAEQIGSAHSYACBKIDXBVMTTZKSYVQFPIPNCSUZVYJEEUOOILCIOFLMHKFHNCHXXKDGTKKAPXTOAVTCKYJQHFHLWWMVWEDHXBEJJDJPPARGVUCLUJMSRRYRSBOZNOUDWCLBJGQGHNBGLLIVZBWBMYXGRASLOZTIXJQRZNQFDTMEOHSQNUPHDRFMQSLZATXVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.044085322497500634);
    msg.setSource(19270U);
    msg.setSourceEntity(80U);
    msg.setDestination(23501U);
    msg.setDestinationEntity(52U);
    msg.name.assign("HAKSTVZNKZISMFXLHGBQFLHFXWJDAELIMHPPJHKRCRDQRNOHNPCWHIGOMOKIYHNLDTVTGRKXAFVBYKYYPONFBUGOCSOQXGSLEHWXSSIICUMUCUOYQIVUYGJTFWBEGMGRBGZDBUZKLAYFJIRMVIMJCVPDJOCJJLZXKBIRGZQSALLLQQYNTDVOPPWAQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.38568863928861263);
    msg.setSource(58543U);
    msg.setSourceEntity(171U);
    msg.setDestination(27236U);
    msg.setDestinationEntity(249U);
    msg.name.assign("NQATFYDCZBDFDFDKWFYPPVSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.28287846788970183);
    msg.setSource(54726U);
    msg.setSourceEntity(13U);
    msg.setDestination(41944U);
    msg.setDestinationEntity(143U);
    msg.timeout = 1620930767U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.5558239129560741);
    msg.setSource(57973U);
    msg.setSourceEntity(72U);
    msg.setDestination(11493U);
    msg.setDestinationEntity(40U);
    msg.timeout = 4148544047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.9026794818480794);
    msg.setSource(27711U);
    msg.setSourceEntity(210U);
    msg.setDestination(64043U);
    msg.setDestinationEntity(178U);
    msg.timeout = 917167244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.003003800274652968);
    msg.setSource(29698U);
    msg.setSourceEntity(67U);
    msg.setDestination(10425U);
    msg.setDestinationEntity(36U);
    msg.sessid = 3457361694U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.5195027960167533);
    msg.setSource(46358U);
    msg.setSourceEntity(49U);
    msg.setDestination(43488U);
    msg.setDestinationEntity(242U);
    msg.sessid = 2541555065U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.3802663265272891);
    msg.setSource(39507U);
    msg.setSourceEntity(129U);
    msg.setDestination(61967U);
    msg.setDestinationEntity(72U);
    msg.sessid = 167210457U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.1620567498739407);
    msg.setSource(47741U);
    msg.setSourceEntity(50U);
    msg.setDestination(35167U);
    msg.setDestinationEntity(247U);
    msg.sessid = 416156054U;
    msg.messages.assign("CAMYXIPGZVEJXBDFNHROCNOXBPCBUOVVJSQFMBXKQMLAUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.5837634432385178);
    msg.setSource(65120U);
    msg.setSourceEntity(231U);
    msg.setDestination(11883U);
    msg.setDestinationEntity(70U);
    msg.sessid = 3881037054U;
    msg.messages.assign("JGENDZXEFSLQLBKUNRSEUGGFDFZNYAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.9497538350575503);
    msg.setSource(40007U);
    msg.setSourceEntity(10U);
    msg.setDestination(29689U);
    msg.setDestinationEntity(98U);
    msg.sessid = 546983457U;
    msg.messages.assign("CGYJQZXZHJTTZUPEXSZIMDVPSHOSEAJELJQFRCYVORSDQDDNWZTYXLNMJBXRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.9849546478115123);
    msg.setSource(38584U);
    msg.setSourceEntity(105U);
    msg.setDestination(60103U);
    msg.setDestinationEntity(0U);
    msg.sessid = 3695391826U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.7297191520744793);
    msg.setSource(33807U);
    msg.setSourceEntity(32U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(237U);
    msg.sessid = 2320525508U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.4125172633087073);
    msg.setSource(59771U);
    msg.setSourceEntity(8U);
    msg.setDestination(20025U);
    msg.setDestinationEntity(78U);
    msg.sessid = 1442250164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.674916547147541);
    msg.setSource(31634U);
    msg.setSourceEntity(92U);
    msg.setDestination(42531U);
    msg.setDestinationEntity(80U);
    msg.sessid = 2895807240U;
    msg.status = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.7440203367405002);
    msg.setSource(16379U);
    msg.setSourceEntity(70U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(45U);
    msg.sessid = 2221705216U;
    msg.status = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.8832606532732846);
    msg.setSource(62680U);
    msg.setSourceEntity(181U);
    msg.setDestination(37106U);
    msg.setDestinationEntity(45U);
    msg.sessid = 2323297789U;
    msg.status = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.39322653538175967);
    msg.setSource(4854U);
    msg.setSourceEntity(26U);
    msg.setDestination(16082U);
    msg.setDestinationEntity(109U);
    msg.name.assign("BVDMBLELWOYIRXOGRIHIZSBCNCLVJBAUKCXPXJWQWOVAEWMYEUVQAATGHNQHLCGATYYIBXJVHSECBCMOXKZBHFKEJBJXBDOZDPUQTEOMWZLLVUJQVVZTFPJUKMRGDSRZKIZNRMRFQTEWHENGKDGLTUNTXYWKSCQPJMXAEWAGXARPFAPPOMKYNQLVKGKFQVSNFSSRHPUJSPFINWDSMDZMEXIFHFTLCYZHQNGRY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.5282845807224581);
    msg.setSource(37910U);
    msg.setSourceEntity(178U);
    msg.setDestination(28388U);
    msg.setDestinationEntity(146U);
    msg.name.assign("CIYKESQWJOZFOLJBREDUBMYFHQPPSLYOLVUWEEWMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.382690793417919);
    msg.setSource(47047U);
    msg.setSourceEntity(195U);
    msg.setDestination(43978U);
    msg.setDestinationEntity(225U);
    msg.name.assign("BMLBVRHPDSQOMDGGRNAHWQNZFSIIJVJBFOAFLUGSWHNLZILOJUMYXWTJSCJKONUFRCGCZVNSTXLDYTCZWDXKPLHHRCDXANHSWTWVTUOKWRRDNALQZVMTVEDKMAFAKKMPBWPEQGZAPYZAFEEGKUYEJSRTPPTXQZULECURVQBIYJBKIIJOBMVHVQYEXNWBYSGSZDFQJGJNDEXXCRUHAGPDVULNMCIQHWUMFFORY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.5456577629674693);
    msg.setSource(46384U);
    msg.setSourceEntity(123U);
    msg.setDestination(9716U);
    msg.setDestinationEntity(0U);
    msg.name.assign("GMPZRVKCPDPNWIXLRYKLTUIBMBZUHTXSRZVNVJANLRRAZYXUFPSUETCXGMMFXHIANASSIYTPKWCVGUGDISKMYNJQCHOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.7909300693674215);
    msg.setSource(11847U);
    msg.setSourceEntity(108U);
    msg.setDestination(35579U);
    msg.setDestinationEntity(144U);
    msg.name.assign("CIQFLTQYHEXYOPKTGPWUTRJZXODXYVQQNNBBNWPZBDHFBUREVKZEJDRWANMFSYESQTFAXMLYOASMNTPYOGMBGQZYGPIXASIEWZZXPAZULJMLUCLPWQHIJJCDXKZMLMSGIGAADHLBKHHBYIKOTUFRJERJKTCNVOUZRPUAHVCCWECLINGGNJUNVLOTSZFYNWRATDCFKMWRFTPWJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.624012189469012);
    msg.setSource(61830U);
    msg.setSourceEntity(214U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ESUQXRACFJOPZWCZUNIIVVCYKXSSHLJRLNDACFTSYSTKMEKBIODFBYXFYZJKKMETNJQRCRGCAVXUSSGIBLMRWXDMBUAPDMVAHKZNBHQIVHWRFGMLLMZYVKDVZAENSNZMJQDEBOPMPQGMTZTBIBJTYGNXBRELGAUKVRFCVPSDZOSQERQLIQJHWNFFWJDHPXWWHXJNUKTCPRJLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.3446511083052194);
    msg.setSource(62151U);
    msg.setSourceEntity(78U);
    msg.setDestination(2988U);
    msg.setDestinationEntity(140U);
    msg.type = 58U;
    msg.error.assign("IGERBMNNAFFSDRUFIOTTEVNEHZEFHOZUFBPTNCJSRGRVHHSEWOZYVJMUCKTVNCWPGAPFTZAJVCOOSOXCRSWABPKOBCLVIQQYLPYJZXYBTKKDYUPPALFYMIWJXNRSBXSYMDZCJIBIFMOGHXUMJTRVQXXZWGBLYQQWDNPXSIDDFBHRLBOUWTWEIRNZOLZDJQPUGCCKUALKUEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.6934489087519544);
    msg.setSource(20100U);
    msg.setSourceEntity(138U);
    msg.setDestination(5232U);
    msg.setDestinationEntity(216U);
    msg.type = 126U;
    msg.error.assign("BIBTPSIAUWMQDHZKPQXFCGFCJYOVVYNDRIDEHAWMFLOJUNQEWYJCUXXPDYGDXVNHVCKTMHUIQEFKDVVXQNNDLQZWZIGYQMULMEDTCOWRFAFLETGZBYORFBUAHYABCKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.0499428973454249);
    msg.setSource(33679U);
    msg.setSourceEntity(194U);
    msg.setDestination(28598U);
    msg.setDestinationEntity(34U);
    msg.type = 137U;
    msg.error.assign("XNKJRQPQXSLPKVIWGPAHUEFMRZUMLUEJQMDFLFAGVPQCCCFKBPDTZBVHYGWXXSMEAUKZVSOEDAFDIXSEAQIZNQEMAIVDABLWNOTDJAROCKPWBUJDYHINYXJGYARLJFLBXLIQVUEHCHEGQRTNSVTBZTRZBBNHRXGOMUKZNRJGZUYLJGEOFLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.14085626740428836);
    msg.setSource(7189U);
    msg.setSourceEntity(101U);
    msg.setDestination(34445U);
    msg.setDestinationEntity(154U);
    msg.seq = 31047U;
    msg.sys_dst.assign("FEKTXWATDRHBZWVWRJVLVOTBOQESFVMDWOHYUHQMFHUCNXHCAEMNCBMZXRPJKAZVAQPLJWIINLVOMYPOFSUJDYUPWILYKKVFTGKRZGAGKISVZWXUIEDTPXJTZSSJRSDLDTFJBORISFPLYRPHHEEQM");
    msg.flags = 233U;
    const char tmp_msg_0[] = {-81, -110, 6, 58, 12, -1, -28, -95, -55, -61, -26, 66, 60, 18, -43, 3, -39, -21, -59, 41, 15, -101, -26, -90, -66, 75, -14, -83, -114, 19, -2, 121, -92, -26, -79, 122, 74, -67, -47, -76, -64, -23, -82, -92, 63, 95, -122, -5, 34, -34, -123, -115, 70, 61, 110, -62, 63, -110, 21, -17, 107, 51, -98, 110, 115, 45, 96, 40, -119, 50, -25, 26, -123, 21, 93, 36, -64, 55, -20, -85, 100, -76, 115, -26, -43, 46, -105, 62, -36, 82, 103, 87, 42, -80, -88, -66, -127, -75, -44, -1, -47, 22, 108, 83, 88, 117, 13, -72, -55, -62, 57, -92, -39, 105, 88, -25, -50, -86, 31, 90, 58, 68, -51, -96, 41, -50, -62, 39, -94, -99, -14, -62, -25, 2, 73, -34, 75, 102, -115, -41, -12, 95, 47, 37, -23, 108, -53, 10, -68, 106, 15, 103, 6, -116, -36, -33, 64, -38, -80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.43420677766940763);
    msg.setSource(44056U);
    msg.setSourceEntity(85U);
    msg.setDestination(25300U);
    msg.setDestinationEntity(91U);
    msg.seq = 58545U;
    msg.sys_dst.assign("MKMOZDNDAMQGKVUKXWWJSMLELPNQXWCEZCCUKJJELETSZLVHWXGUSRPOBE");
    msg.flags = 90U;
    const char tmp_msg_0[] = {126, -64, -109, -19, 39, -78, 91, -9, 58, 64, 58, 90, 38, 55, -31, 70, 55, 101, 89, 68, 77, 54, -124, 54, 17, -16, -23, 99, 10, -41, 25, 37, 18, 56, 6, -53, -59, -35, -65, -114, -40, 119, -29, 120, 46, 119, 61, 44, -25, 46, -46, -82, -37, -114, 56, 40, -106, 60, 104, -86, 92, -71, 106, -107, -39, 34, -82, -70, 92, -3, 15, 38, 32, 122, -98, -13, 50, -3, -111, -107, 41, 59, 107, 118, 79, 45, -28, -110, 75, 126, -24, 106, -60, 72, 106, -19, 35, 50, 96, -112, -103, -3, -71, -81, -57, -47, -55, -16, 120, 104, -112, -1, 37, -100, 72, -90, 103, -115, 65, 42, 7, -13, -65, -24, 102, 23, 32, 8, -105, -104, 74, 99, -5, -83, -90, 26, 51, -7, 79, -61, 52, -103, -73, -16, 12, 50, -5, 31, 15, 12, 88, 79, -104, -15, -16, 45, 14, 45, -64, 23, 65, -63, 90, 54, -29, 12, 113, -39, -9, 85, -120, -43, -30, -36, -79, -79, -128, 3, 115, 52, 45, 76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.8896365179611614);
    msg.setSource(53828U);
    msg.setSourceEntity(181U);
    msg.setDestination(37824U);
    msg.setDestinationEntity(43U);
    msg.seq = 42215U;
    msg.sys_dst.assign("DOJFLRULNKMXZAIOIVKGTPKLYFHOPFLYWEYIZFOQVBFGVZTRSPZBHWZDCBBHABURGWTJCUTRXCBJ");
    msg.flags = 12U;
    const char tmp_msg_0[] = {-19, -43, -118, 109, -95, -116, 0, 89, 110, 40, 72, 112, -36, 70, -21, -92, 80, 107, 67, 65, 25, 123, 102, 5, 12, -96, -66, -115, 37, 110, 26, -80, -80, -15, 25, -68, -54, 81, 88, -37, -32, 103, 36, -109, 25, -5, 69, -119, 80, 36, 121, 73, -22, -13, 56, 72, 59, -65, -14, -83, 81, -19, 67, 4, -63, 6, -69, -84, 1, 17, -70, 75, 57, 112, 78, -78, -34, 108, 26, -43, 86, 17, 104, 112, -107, -50, -69, -26, 56, -8, 81, -5, -61, 61, -37, -94, -15, 114, 103, -24, 54, 115, 48, 87, 42, 91, -89, 126, -52, -102, -74, 97, 117, -7, -15, -105, 95, -89, -93, -119, 9, -17, -51, 62, 74, 115, -49, 108, 67, 38, 8, 99, 114, -52, 56, 30, 51, 70, -11, 92, -112, -77, 53, 65, 120, 61, -71, -106, 5, -127, -128, 26, 121, 82, 122, 61, 34, -104, -31, 53, 59, -60, -58, 73, -114, -127, 78, -61, -105, 86, -101, -83, -94, -75, 81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.4364762123142627);
    msg.setSource(64425U);
    msg.setSourceEntity(157U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("NLHNTFYPSTAZHHIOHBHBOTQZFJKMOEICCMPYMRBYKJFCAHKTRTPXSEGWPDBVTUWQLXPFYXLFPEWZFCCVXPQRCTJQDMVMZHMRCRGFMCYUPOJOXXEHWNEKNPERQBADUNLVBJDT");
    msg.sys_dst.assign("IVTLBAOEKKFZRKVTMBRMYSMXMVTFVVSNUEKJOEAXYBLUCPYPULRDDHLBZNYEJXBCCZRJHMNZNUDMAIIFZIARYWMDIOXDFNDMJFPVVAQNWEOELHWXSZNJTFNJULLQQOGGZSCWUXZPUPEEYOREBBBQTPFQCRJCGRTBAQYKCOYPPKHRWWMGHXZGJDHKETFVFLQQGUHZWGGHVSCVUGCSMARIQILIOHKKYUOYSQSBTODCAXKI");
    msg.flags = 171U;
    const char tmp_msg_0[] = {96, -28, -95, -45, -27, 74, -22, -5, 22, 93, 52, 76, 33, -8, -127, 67, 45, -82, 86, 106, -118, 59, 77, -8, 108, 46, 115, -123, 25, 18, 41, -6, 56, 81, 20, -83, -121, 106, 16, 58, -125, -48, -3, -76, -92, -100, 119, -46, -38, 61, 39, 47, -116, 99, -62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.9401380765241416);
    msg.setSource(43767U);
    msg.setSourceEntity(129U);
    msg.setDestination(49274U);
    msg.setDestinationEntity(40U);
    msg.sys_src.assign("IYUVMOMCJZXKPQXVLQOQWTMTCOHEQFGJSEWNLOGCSOXPEQGBUHCIQGETSWNEXDHQDKXNMKMIJ");
    msg.sys_dst.assign("QYPKFVICEBYXLUXMSNWJXFAACRFSCMRBANRJWJGDOQTRNXABMTLKSBOMEQDKFUJVQODJIVPENSWNJFZOEMFKMCEMPYCIUJHZMATQPIAGMLZDFSOMALFLDNIZARWGRCCHYEHZKDCLDRUAVGLNJCHZLOTFHEGHOIOSXVGRTUEBVUXIAVWKJEUVXZTXTJYYUHZQHKPVOLWYHPLPPCKIYWRYHSQBBUXWYZNQSPWQUENFSKISRTDITDKQDWO");
    msg.flags = 252U;
    const char tmp_msg_0[] = {-81, 59, -18, -46, -89, -127, 108, -30, 14, -54, -74, -102, 120, -39, 49, 16, -4, -17, -55, -127, -73, -73, -111, -119, 69, 42, -59, 3, -53, -46, -12, 11, 19, 114, -89, -108, -126, 54, -126, -92, -112, -37, 60, 92, -72, -109, 15, 86, 29, 47, 76, 43, 101, -64, -103, -13, 36, -67, 91, -43, 51, -46, 93, -94, 116, -107, -6, 31, -19, -96, 17, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.5944624868529008);
    msg.setSource(19131U);
    msg.setSourceEntity(148U);
    msg.setDestination(65222U);
    msg.setDestinationEntity(7U);
    msg.sys_src.assign("HBGPLRAEMYRJNDGKMAZEWYOHZZFZPRRVWGNZNKPQCFPVKWFVCZSUAJAWUKXNLNXOUUOHEWXBVXHHTLQETGZDMEDKDICWSCJBBGQ");
    msg.sys_dst.assign("SVKUALEMKZOLCMHWRHFUUUAYMKZNCHBNBPQVCXLNVRLNPDLOIRFWIAIXPBABSECWQCJASDJRCYJHASZTDGLQVFYWOJZEHCIFSPLISRNGYKGQCIESKPBBJPFXXGNRQVYWEKLSMOZWZKOVKUKPEAFIUZKFBEUQXWSXDGFOTMYTTHXMNNZRBZBPXAPPYQHJFVTZOVFNUGAIJUTXDEQMX");
    msg.flags = 89U;
    const char tmp_msg_0[] = {62, -17, -47, 123, -31, -11, 66, 28, 35, -18, -66, -43, -90, -107, 68, 74, 38, 126, -23, 93, -52, -67, -39, 63, 18, 110, -84, -19, -59, 1, 86, -15, -116, -55, 41, -42, 31, -24, -7, -62, 66, 81, 23, 36, 83, 117, -82, -39, -1, -6, 48, 30, -24, 38, 84, 17, 35, 30, 33, -28, 13, 67, 17, -94, -108, 66, 100, 29, 93, 58, -89, 0, -78, 58, -109, -11, 113, 109, -64, 93, -105, -62, 5, -112, 115, 116, 121, -116, 67, 42, -111, 51, 121, -11, 2, -112, -3, 71, 88, 44, -64, -7, 54, -13, -50, 70, -86, -83, -108, -49, -56, 113, 78, 74, 29, 10, 76, 51, 11, 104, 125, 79, -51, -2, 7, -13, -109, -7, 68, -16, -6, -69, -67, 82, 18, -63, -98, 110, 20, 85, 102, -69, 30, 119, 66, 69, 25, 80, -69, -68, 91, 22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.08159470370807398);
    msg.setSource(23909U);
    msg.setSourceEntity(21U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(238U);
    msg.seq = 22661U;
    msg.value = 166U;
    msg.error.assign("CUIAWVXRACLBANDYOEECLPOCUFMIFKFHFXWMDOFWRBVEOTFHIUNEDUDTBICQRPYPGGSAWUNOLYOZXRASMRGHBRUYYWAQLXYUQHABVUCELKSRWKGYZHPGOCMNFWMTPEKMVDDPNFZCBPCTJJWOVILFISSJJZJJBNGUBQIYMJKKYLFJVHLKZNSAEZGNRXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.2352927313104789);
    msg.setSource(1156U);
    msg.setSourceEntity(177U);
    msg.setDestination(41213U);
    msg.setDestinationEntity(233U);
    msg.seq = 3317U;
    msg.value = 184U;
    msg.error.assign("CHGRCLCNYLACGUAZLRMQQFHAERMXUSFYWTCEFGHAVKQSTMSQYJDXAQIIETTKEPNTQWRVUVDUNJKIXPCPXXPQSBZQYNZFHRCSGTUPMILFJQLVHLPHDRNPAEUXRSUXMTTNNSOZJDNIDMBHCBOAUVIBMKNJEFHEUGSIHOZUFRBKEMTWOGBGARGJAKCYLKJZWDDJMOKWI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.5245510574945064);
    msg.setSource(36459U);
    msg.setSourceEntity(213U);
    msg.setDestination(26124U);
    msg.setDestinationEntity(235U);
    msg.seq = 44252U;
    msg.value = 193U;
    msg.error.assign("LJBTMQYKZLNRBJWETAMWJCHGRYIMVHDKGJDQVRUOIXUSBWDJIWCTWTUXVINXFROVSLYJVFYOEOJARSBXKQIMFFGKUCLVSTOAYLGNBWXFPLYSIZSCWQNHPGCZZJHNHEGVUCMBLKOCAFMONHKCPDNJNRPAEXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.6353420587876719);
    msg.setSource(20807U);
    msg.setSourceEntity(202U);
    msg.setDestination(42194U);
    msg.setDestinationEntity(197U);
    msg.seq = 8962U;
    msg.sys.assign("SQRMUYTEWRITUJACGUWZWRTRUNRLVZBAUCDAVLGTHNOHQOMRUVMGGZJVWMQFPWKFBWCFWYDFOTGKBCGDPTFGHBFEXANZPPXHOKIIVOMDUMQNKMSEPIS");
    msg.value = 0.5693453680198458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.7576123968607931);
    msg.setSource(36428U);
    msg.setSourceEntity(83U);
    msg.setDestination(20422U);
    msg.setDestinationEntity(44U);
    msg.seq = 35034U;
    msg.sys.assign("DIDGTPKYZANGJVUNGQDKKDICZITFPOSXYVCLPLXPJEMUCWRQSMTQSMXJRVTQTEUBVWBCQGIWB");
    msg.value = 0.7372956719289154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.7529131692720399);
    msg.setSource(54946U);
    msg.setSourceEntity(199U);
    msg.setDestination(48886U);
    msg.setDestinationEntity(127U);
    msg.seq = 13759U;
    msg.sys.assign("ABRLQERPRSWSBQNLKISDAUYKPHWAEZIGTWDEHMSLCDWBKLWDNTFGAOXBZCAFLJURVHCACJDWGRQJQNFBFDUSATQNNIBLYZIXRRLMOECTUQCGUVSHDYWBQWIJFKRIMOJQICVPGMZXHPBKLHPVAQDVNPIFPOMHJEEYRMWFELAFM");
    msg.value = 0.191048282075585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.7363046559194938);
    msg.setSource(48475U);
    msg.setSourceEntity(196U);
    msg.setDestination(51426U);
    msg.setDestinationEntity(248U);
    msg.action = 106U;
    msg.longain = 0.572826620562124;
    msg.latgain = 0.5861384593648619;
    msg.bondthick = 1571458298U;
    msg.leadgain = 0.51351592377929;
    msg.deconflgain = 0.603548856910643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.4041140204106324);
    msg.setSource(62257U);
    msg.setSourceEntity(209U);
    msg.setDestination(3553U);
    msg.setDestinationEntity(159U);
    msg.action = 166U;
    msg.longain = 0.31425995065573986;
    msg.latgain = 0.8035268637446706;
    msg.bondthick = 4079964042U;
    msg.leadgain = 0.5905109167554548;
    msg.deconflgain = 0.7265084713882958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.49337645001711816);
    msg.setSource(22612U);
    msg.setSourceEntity(161U);
    msg.setDestination(53266U);
    msg.setDestinationEntity(245U);
    msg.action = 160U;
    msg.longain = 0.1293067111725552;
    msg.latgain = 0.3043127092164558;
    msg.bondthick = 1342782757U;
    msg.leadgain = 0.7367003229759068;
    msg.deconflgain = 0.9726004865100817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.34657750676759436);
    msg.setSource(53080U);
    msg.setSourceEntity(155U);
    msg.setDestination(15932U);
    msg.setDestinationEntity(35U);
    msg.err_mean = 0.34540619679958773;
    msg.dist_min_abs = 0.46689176964636625;
    msg.dist_min_mean = 0.49940818780938045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.39242775415524744);
    msg.setSource(59124U);
    msg.setSourceEntity(9U);
    msg.setDestination(11927U);
    msg.setDestinationEntity(5U);
    msg.err_mean = 0.5349581599180738;
    msg.dist_min_abs = 0.8675790221342243;
    msg.dist_min_mean = 0.4216827176655429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.2652489867467942);
    msg.setSource(53149U);
    msg.setSourceEntity(64U);
    msg.setDestination(54013U);
    msg.setDestinationEntity(161U);
    msg.err_mean = 0.8171974335773471;
    msg.dist_min_abs = 0.9614566981146389;
    msg.dist_min_mean = 0.6797315564044883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.440618876680164);
    msg.setSource(495U);
    msg.setSourceEntity(77U);
    msg.setDestination(61473U);
    msg.setDestinationEntity(147U);
    msg.action = 68U;
    msg.lon_gain = 0.6507205603873356;
    msg.lat_gain = 0.06165527319392228;
    msg.bond_thick = 0.7424527438468297;
    msg.lead_gain = 0.1870219890485212;
    msg.deconfl_gain = 0.3497547428487997;
    msg.accel_switch_gain = 0.002441315616480755;
    msg.safe_dist = 0.37375171037467636;
    msg.deconflict_offset = 0.009266975332142047;
    msg.accel_safe_margin = 0.6134243232041651;
    msg.accel_lim_x = 0.21431412629679614;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.057011226940355986);
    msg.setSource(23352U);
    msg.setSourceEntity(118U);
    msg.setDestination(23825U);
    msg.setDestinationEntity(186U);
    msg.action = 216U;
    msg.lon_gain = 0.38772475835215814;
    msg.lat_gain = 0.7319702699480909;
    msg.bond_thick = 0.4761183900329303;
    msg.lead_gain = 0.07653322212012037;
    msg.deconfl_gain = 0.8920171239282627;
    msg.accel_switch_gain = 0.635698413446568;
    msg.safe_dist = 0.21626288947856753;
    msg.deconflict_offset = 0.19065084263623433;
    msg.accel_safe_margin = 0.08358105300675389;
    msg.accel_lim_x = 0.11985133446101859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.8471266175953289);
    msg.setSource(33999U);
    msg.setSourceEntity(156U);
    msg.setDestination(29218U);
    msg.setDestinationEntity(40U);
    msg.action = 112U;
    msg.lon_gain = 0.7340242878639589;
    msg.lat_gain = 0.3230873053910872;
    msg.bond_thick = 0.34278764627555613;
    msg.lead_gain = 0.39836099021379423;
    msg.deconfl_gain = 0.3294553703750782;
    msg.accel_switch_gain = 0.6330014335170818;
    msg.safe_dist = 0.7995447352264183;
    msg.deconflict_offset = 0.5712675873811607;
    msg.accel_safe_margin = 0.3970278396865924;
    msg.accel_lim_x = 0.5170861475818815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.33425120434016375);
    msg.setSource(29519U);
    msg.setSourceEntity(20U);
    msg.setDestination(37717U);
    msg.setDestinationEntity(58U);
    msg.type = 18U;
    msg.op = 147U;
    msg.err_mean = 0.35976470750655565;
    msg.dist_min_abs = 0.1995150070434858;
    msg.dist_min_mean = 0.8201646451226685;
    msg.roll_rate_mean = 0.6067031772911621;
    msg.time = 0.42612657621911176;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 214U;
    tmp_msg_0.lon_gain = 0.11158133171987783;
    tmp_msg_0.lat_gain = 0.8260067908617169;
    tmp_msg_0.bond_thick = 0.927749340123529;
    tmp_msg_0.lead_gain = 0.14575483351793694;
    tmp_msg_0.deconfl_gain = 0.09480158337208422;
    tmp_msg_0.accel_switch_gain = 0.3980536864334263;
    tmp_msg_0.safe_dist = 0.34571875427589327;
    tmp_msg_0.deconflict_offset = 0.5297860262782851;
    tmp_msg_0.accel_safe_margin = 0.09524214118510899;
    tmp_msg_0.accel_lim_x = 0.04270186945782717;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.7883362019997205);
    msg.setSource(47880U);
    msg.setSourceEntity(19U);
    msg.setDestination(1184U);
    msg.setDestinationEntity(128U);
    msg.type = 129U;
    msg.op = 241U;
    msg.err_mean = 0.411731697697869;
    msg.dist_min_abs = 0.7925468105657091;
    msg.dist_min_mean = 0.7088029323524206;
    msg.roll_rate_mean = 0.18160420625594564;
    msg.time = 0.26743637054500846;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 49U;
    tmp_msg_0.lon_gain = 0.6535134437149376;
    tmp_msg_0.lat_gain = 0.9510507497482948;
    tmp_msg_0.bond_thick = 0.9680052593003415;
    tmp_msg_0.lead_gain = 0.3363481339451191;
    tmp_msg_0.deconfl_gain = 0.19489883029805433;
    tmp_msg_0.accel_switch_gain = 0.48395240994234134;
    tmp_msg_0.safe_dist = 0.6391600633579388;
    tmp_msg_0.deconflict_offset = 0.047628357733357385;
    tmp_msg_0.accel_safe_margin = 0.6308415588161375;
    tmp_msg_0.accel_lim_x = 0.9131603173385027;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.9813496223324074);
    msg.setSource(25549U);
    msg.setSourceEntity(88U);
    msg.setDestination(56958U);
    msg.setDestinationEntity(134U);
    msg.type = 253U;
    msg.op = 3U;
    msg.err_mean = 0.3293501223474945;
    msg.dist_min_abs = 0.0624914538057636;
    msg.dist_min_mean = 0.47159642476948493;
    msg.roll_rate_mean = 0.5612615406248334;
    msg.time = 0.2851657847789153;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 191U;
    tmp_msg_0.lon_gain = 0.44998293292281755;
    tmp_msg_0.lat_gain = 0.2981061901285982;
    tmp_msg_0.bond_thick = 0.7197558561224047;
    tmp_msg_0.lead_gain = 0.9912243940176173;
    tmp_msg_0.deconfl_gain = 0.524612663530402;
    tmp_msg_0.accel_switch_gain = 0.32592527028720264;
    tmp_msg_0.safe_dist = 0.3213841279106;
    tmp_msg_0.deconflict_offset = 0.5852739920330962;
    tmp_msg_0.accel_safe_margin = 0.1099710191417752;
    tmp_msg_0.accel_lim_x = 0.16115093023669846;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.8650550909881816);
    msg.setSource(31662U);
    msg.setSourceEntity(5U);
    msg.setDestination(65527U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.7580739248500399;
    msg.lon = 0.7498571785583067;
    msg.eta = 108579050U;
    msg.duration = 59337U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.8734056012588661);
    msg.setSource(59414U);
    msg.setSourceEntity(130U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.9646037270710477;
    msg.lon = 0.99929288259662;
    msg.eta = 713917320U;
    msg.duration = 28148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.4114086403196898);
    msg.setSource(28666U);
    msg.setSourceEntity(141U);
    msg.setDestination(9834U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.9942059892470455;
    msg.lon = 0.8737932899308344;
    msg.eta = 4168966805U;
    msg.duration = 18557U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.47742048773323975);
    msg.setSource(20460U);
    msg.setSourceEntity(182U);
    msg.setDestination(2569U);
    msg.setDestinationEntity(88U);
    msg.plan_id = 33015U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.17480871175631407;
    tmp_msg_0.lon = 0.2587817270605598;
    tmp_msg_0.eta = 2768608558U;
    tmp_msg_0.duration = 2484U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.41782504645034924);
    msg.setSource(36711U);
    msg.setSourceEntity(174U);
    msg.setDestination(38124U);
    msg.setDestinationEntity(157U);
    msg.plan_id = 7982U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5428403304428331;
    tmp_msg_0.lon = 0.9367462904543342;
    tmp_msg_0.eta = 2557939217U;
    tmp_msg_0.duration = 50709U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.9412547523453798);
    msg.setSource(24619U);
    msg.setSourceEntity(186U);
    msg.setDestination(49803U);
    msg.setDestinationEntity(120U);
    msg.plan_id = 18981U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.5120283904023697);
    msg.setSource(8834U);
    msg.setSourceEntity(250U);
    msg.setDestination(23315U);
    msg.setDestinationEntity(66U);
    msg.type = 46U;
    msg.command = 213U;
    msg.settings.assign("ARGGYXCXAEQUOGNBYTIZSWXZQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 47621U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DMJCIWHJWSTBYSMZGEUCBATFUEALFLVUOXHZRKFSXKJRNZDLJBTZFEQYJBAVFQRHLKYVWFJSMJVXNASEZYBCCHNEGKSHVDCENNZPGIDGEPQIDAOSIMYVZPYGLJYUENVGXSDJMLMRUWEUMOMXVLRWDTGUHKUDFPYGIVYCMQNFOXRGQKBWOAFUZRBLXPWTJOAHBRWCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.41540415333412894);
    msg.setSource(62641U);
    msg.setSourceEntity(46U);
    msg.setDestination(64192U);
    msg.setDestinationEntity(157U);
    msg.type = 33U;
    msg.command = 172U;
    msg.settings.assign("SHNQAVMEWSCCVQNHWRIHIOEJICKINDXVMTKTDYZONTKEUTA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5944U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.763352610021914;
    tmp_tmp_msg_0_0.lon = 0.13013489733382677;
    tmp_tmp_msg_0_0.eta = 1570819735U;
    tmp_tmp_msg_0_0.duration = 29454U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GKSCYSZAQCRIPTNKVHFOMDXDWDMSTNQNBTEDKIWBAILJOYXQZZGVCNKCVZOCLBVDTAWYPEROKLBIORDGANKJZLRCAMXMMJYQTZGWRCKGGASWVYZYFZSHDTYZVKWISOWFFEIIHPPURGDRFPEHWBAPUFEQUQJXQLFPMYHMGPOHELYXPMBUJLUNDFVNOUGINHWWTQXPQKEOCRRGLELJTXTHVCCOXSZKJLFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.4721652081468214);
    msg.setSource(26356U);
    msg.setSourceEntity(134U);
    msg.setDestination(48540U);
    msg.setDestinationEntity(110U);
    msg.type = 168U;
    msg.command = 158U;
    msg.settings.assign("IPOFOMQALEHM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52519U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KPONPXIEHDDLKJKAHWRKKYCZUQWMXGZZDUOOGHALWNVMOXNLDKOBYTFVPSQRDEANSTWHIAHQEOLH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.32707297370304655);
    msg.setSource(7766U);
    msg.setSourceEntity(71U);
    msg.setDestination(51165U);
    msg.setDestinationEntity(253U);
    msg.state = 141U;
    msg.plan_id = 38011U;
    msg.wpt_id = 222U;
    msg.settings_chk = 51763U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.0713551256902154);
    msg.setSource(48160U);
    msg.setSourceEntity(214U);
    msg.setDestination(42402U);
    msg.setDestinationEntity(183U);
    msg.state = 251U;
    msg.plan_id = 42964U;
    msg.wpt_id = 148U;
    msg.settings_chk = 38797U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.321777157343765);
    msg.setSource(59413U);
    msg.setSourceEntity(236U);
    msg.setDestination(35015U);
    msg.setDestinationEntity(220U);
    msg.state = 109U;
    msg.plan_id = 6558U;
    msg.wpt_id = 233U;
    msg.settings_chk = 61975U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.43683797547087855);
    msg.setSource(18338U);
    msg.setSourceEntity(146U);
    msg.setDestination(20801U);
    msg.setDestinationEntity(101U);
    msg.uid = 112U;
    msg.frag_number = 26U;
    msg.num_frags = 131U;
    const char tmp_msg_0[] = {-77, -121, 118, -49, -105, 103, -78, 112, -118, 11, 30, 99, -63, 30, 50, 14, 9, -117, 41, -54, 109, 21, -7, -14, 53, 49, 45, 40, -103, -67, 94, -82, -111, 101, 21, -54, -21, -24, 57, -107, 45, 72, 0, 15, -53, 125, 82, 32, -70, 50, 122, 10, 89, -81, -34, -113, 7, -67, 30, 1, -14, 9, -31, 5, 89, 17, 74, 64, -34, -107, -120, 116, 109, 87, 78, 71, -7, 46, 108, 38, -16, -15, 75, 109, 12, -99, -41, 83, -117, -71, 38, -78, 107, 53, -75, 97, 79, 89, -26, 96, -104, -125, -53, 126, -5, 69, -53, 65, -7, -119, -36, 25, -44, -86, -96, 39, 88, 72, -40, 59, 113, 94, -51, 56, -73, 29, -77, -122, 12, -4, -70, -36, 88, -89, -47, 101, -43, -20, -87, -79, -68, 85, 100, -14, -57, -81, 56, 72, 0, 59, -18, 60, -101, 30, 9, -58, -93, -55, -78, -118, -30, -74, 118, 55, 111, -69, 14, 58, -117, 101, 97, 122, 22, 49, 35, -11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.3575920235852815);
    msg.setSource(22589U);
    msg.setSourceEntity(107U);
    msg.setDestination(10292U);
    msg.setDestinationEntity(19U);
    msg.uid = 224U;
    msg.frag_number = 30U;
    msg.num_frags = 247U;
    const char tmp_msg_0[] = {116, -44, -10, 34, 30, 44, 97, -89, -50, -8, -81, 2, -125, 105, -4, 97, -118, 23, -94, -77, 6, 77, 121, -45, 103, 48, 70, -95, -67, -5, -82, -12, 124, 31, 23, 126, 52, -6, 120, -95, -63, 10, -102, -118, 84, -10, 89, -29, -84, 54, -65, 85, -48, 35, -36, 62, -8, 74, 43, -52, 69, 118, -75, -123, 81, 87, 84, 97, 86, -45, -54, 6, 118, 19, -57, -41, 26, 114, -20, 97, -54, 43, -56, 71, -119, -87, 93, -59, -97, 25, 122, 90, 98, -106, -63, 123, -12, 69, 29, -45, -121, 53, -68, 23, -89, -16, -106, 35, -4, 9, 102, -125, -57, -66, 3, 79, 66, 43, -29, 7, -27, -107, 6, -85, -122, 39, 16, -69, -78, -107, 14, 83, 28, -124, 100, 16, 114, -85, 38, -13, 22, 49, 38, 101, -18, 14, 0, -124, 100, 9, 38, 56, -77, -63, 8, 60, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.8510656729116489);
    msg.setSource(52538U);
    msg.setSourceEntity(108U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(187U);
    msg.uid = 169U;
    msg.frag_number = 28U;
    msg.num_frags = 101U;
    const char tmp_msg_0[] = {119, -103, 84, -84, 111, -59, -49, -101, 102, -80, 83, 95, -102, 111, -107, -3, 106, -80, -37, 74, 30, 123, 44, 102, 38, -105, -17, 27, 42, -124, 99, 34, 109, 89, 69, 50, 4, -23, -102, 38, -120, 63, -30, -38, -86, -23, 51, -107, 95, 31, 47, 38, -36, 121, 66, -118, 111, 86, -109, -37, -22, -110, 57, -38, 56, -71, -5, -69, -39, -103, 68, -56, -64, 119, -29, 33, 10, 81, 44, 103, -123, 91, 79, 94, 116, -124, -35, 45, -70, -47, 14, -95, 61, -35, -2, -66, 14, 84, -26, -77, 5, -54, -86, 92, -86, 48, -94, -118, 30, -62, -31, -7, -121, 109, -56, -128, -29, -62, 110, -95, -52, -30, -100, 49, 104, -104, 15, 5, 12, -1, 87, 74, 83, 15, -81, -42, 114, 109, -97, -86, 113, 67, 92, -54, -82, 116, -41, -16, 66, 62, -103, 60, 86, 74, 94, -41, 8, -38, -8, 0, 105, -30, -77, -24, 103, 10, 101, -86, -109, -72, 53, 6, -128, 121, -62, -72, 12, 6, 93, -3, 4, 58, 99, -38, -74, -112, 126, -118, -66, -120, 95, 72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.5815260730243184);
    msg.setSource(33047U);
    msg.setSourceEntity(151U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(174U);
    msg.content_type.assign("GNEASLHRATMBJEVYYUMHGERZLXXCMXDCXUOKXJKZKFMTUEKBETKWFULCOJCJTSWGYKKHBHVYMDRNSFWYDAVAKDDQIZRZMTDXKREMOPDTWGVIGFWUJRWQBLGSXXZAVAFQBCCUNCDFTPMOUJVCHIJPH");
    const char tmp_msg_0[] = {-114, -112, -124, -3, 103, 40, 94, -19, 40, 3, -119, -114, 9, -95};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.0794113751612362);
    msg.setSource(16530U);
    msg.setSourceEntity(154U);
    msg.setDestination(51505U);
    msg.setDestinationEntity(201U);
    msg.content_type.assign("FJEBHOIVQBTDTPUQKIYXHJRDQWPAXWSXGODOTZQMFLCKAMWAXGVSPZPHPLZLEXWRSTHXYWDXNIECRXAGOSFEPHGDGUZFBNKSMTULADIAJBZUTGVRPMREISQAJXJLVKITCHNJBRFKZGBCRYMHTDOKLOCJENVEWZAGNQCWPYNMUYYYNLULDJJEMMAHWZTVWNCNOOZFBRPYCKXWKQLMQSKIFDFUSVYNEHCDETAGUP");
    const char tmp_msg_0[] = {53, -123, 86, 79, -123, -20, 25, 84, -49, -115, 52, 31, -94, 79, -14, 62, 51, 11, -29, 52, 51, -47, -120, 7, -99, -40, -29, 34, 106, -88, -35, -57, 97, 70, -115, -37, 94, 72, -104, -97, 30, -21, -93, 51, -91, -101, -9, -17, -87, 55, -107, -80, -15, 57, -72, 29, 75, 108, 59, -20, -68, 27, -126, 64, -22, 78, -122, -107, 24, -87, 78, 79, 81, -119, -41};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.9715323727013139);
    msg.setSource(18677U);
    msg.setSourceEntity(18U);
    msg.setDestination(43563U);
    msg.setDestinationEntity(204U);
    msg.content_type.assign("TQXOTHPPNZBNVDRSUGCJMYRNUEQMYRMWVRBZGHJWXOIHQJSBVGKWTWAXGAILQEQOIOAODGLJYUNBQQTPEJZKJCATIDTAHVEENDILJWNKDVWOOYMSHPUXREPXFABNLSBLFKYMMUPSDHCKIRFAPJQNRAHGPJFAVKVCCMBBGYHCRXCYCZNDHXOKTQFKGYIUOZZNBYSXFLXEZZRGVWFFLSMPDMPXOQETWSWUGIWLIIRVEDUSVTKUYCCBEL");
    const char tmp_msg_0[] = {0, 61, 9, -13, -72, 90, -92, 121, 1, -16, 6, 26, -98, 21, -53, -5, -101, 111, -63, -72, 63, -15, 10, 6, 90, 106, -61, -63, -89, 119, 9, 24, -81, 113, -95, 104, 119, 84, 18, 50, 60, 100, -89, 59, -90, 121, -101, 97, -107, -81, 81, -41, 44, -97, 122, -109, -7, 116, 115, -117, 110, 62, -120, 107, 108, 15, 104, -21, -5, -20, 116, -64, 19, 70, 61, -65, 25, -15, -105, -34, 59, 120, -123, -51, 9, 9, -47, -119, -93, 19, 20, -59, -100, -79, -123, -126, 38, -42, 84, -109, 94, 48, -117, 10, 85, -111, -71, 18, 74, -82, -28, 49, -75};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.4295758206191632);
    msg.setSource(49362U);
    msg.setSourceEntity(100U);
    msg.setDestination(13505U);
    msg.setDestinationEntity(218U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.6750841456854988);
    msg.setSource(56377U);
    msg.setSourceEntity(52U);
    msg.setDestination(4236U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.0620514592472593);
    msg.setSource(43135U);
    msg.setSourceEntity(53U);
    msg.setDestination(63545U);
    msg.setDestinationEntity(5U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.553781679093461);
    msg.setSource(62754U);
    msg.setSourceEntity(61U);
    msg.setDestination(43807U);
    msg.setDestinationEntity(173U);
    msg.target = 29306U;
    msg.bearing = 0.39134137885639975;
    msg.elevation = 0.6194111712506449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.7618984568140089);
    msg.setSource(62419U);
    msg.setSourceEntity(50U);
    msg.setDestination(310U);
    msg.setDestinationEntity(252U);
    msg.target = 40704U;
    msg.bearing = 0.969241183081062;
    msg.elevation = 0.1891037839755637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.4241578937806505);
    msg.setSource(43918U);
    msg.setSourceEntity(12U);
    msg.setDestination(45356U);
    msg.setDestinationEntity(211U);
    msg.target = 60719U;
    msg.bearing = 0.16730782780427544;
    msg.elevation = 0.7533443521833653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.3434462800873439);
    msg.setSource(45644U);
    msg.setSourceEntity(49U);
    msg.setDestination(52723U);
    msg.setDestinationEntity(140U);
    msg.target = 20487U;
    msg.x = 0.35262728519838005;
    msg.y = 0.2934453257932388;
    msg.z = 0.6219317551993834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.8552118456340975);
    msg.setSource(62962U);
    msg.setSourceEntity(166U);
    msg.setDestination(31250U);
    msg.setDestinationEntity(248U);
    msg.target = 60749U;
    msg.x = 0.8828276598209999;
    msg.y = 0.7934577049385918;
    msg.z = 0.9743812964858036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.7850585581461346);
    msg.setSource(14288U);
    msg.setSourceEntity(211U);
    msg.setDestination(62211U);
    msg.setDestinationEntity(168U);
    msg.target = 8089U;
    msg.x = 0.2702840049635743;
    msg.y = 0.8350756705166874;
    msg.z = 0.22753707165548698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.6176936519573145);
    msg.setSource(181U);
    msg.setSourceEntity(69U);
    msg.setDestination(19155U);
    msg.setDestinationEntity(38U);
    msg.target = 43806U;
    msg.lat = 0.4005990222159669;
    msg.lon = 0.3428881600094138;
    msg.z_units = 7U;
    msg.z = 0.19212869002232202;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.5569692384157795);
    msg.setSource(47165U);
    msg.setSourceEntity(242U);
    msg.setDestination(19478U);
    msg.setDestinationEntity(250U);
    msg.target = 62085U;
    msg.lat = 0.8397164648405122;
    msg.lon = 0.7362301190952091;
    msg.z_units = 157U;
    msg.z = 0.9846789467459054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.4551130783580023);
    msg.setSource(3269U);
    msg.setSourceEntity(206U);
    msg.setDestination(39887U);
    msg.setDestinationEntity(71U);
    msg.target = 22369U;
    msg.lat = 0.016476579803836544;
    msg.lon = 0.41536076402657995;
    msg.z_units = 209U;
    msg.z = 0.05194841568663344;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.03789295723424746);
    msg.setSource(39825U);
    msg.setSourceEntity(165U);
    msg.setDestination(3450U);
    msg.setDestinationEntity(60U);
    msg.locale.assign("GQDKPDMUZWVUIAXSVGHSNLLRYROLXONTEVYFNAETHMKQAHOQBZSNYBOCMIRESWRUFTSKRPVXDBIYKHWHRWVRCPRHQSAGALAQUBKFKQCJTDIUFONLLQYDGDNXVOAHEDJZVPBXXTXGEPYXMFZCPVQJAXMJDIPSLMFZBCQKYTWFNMWZBYWSFXINUTOZPZRBSOVNEWPJLFRUJZLOETBMCZGTVAKHTQDOIGCPYWKWHCLJJGCJUBMIKNSFEUDGH");
    const char tmp_msg_0[] = {9, -12, 110, 112, -128, -24, -42, -88, 5, -2, -104, -49, -85, -119, -87, 70, -106, -66, -98, 119, -123, 78, 26, 126, -85, -93, 91, 97, -19, 11, 115, -68, -70, 6, 103, 82, 42, 50, -10, 100, -112, 86, 28, -65, -4, -47, -74, -98, 19, -73, -2, -23, 26, 112, -112, 41, -62, -96, -80, 117, -67, 47, -52, -115, -63, -70, 39, -20, 114, -18, -12, 19, -83, 1, -63, -45, 29, 120, -29, -45, -49, 31, 8, 109, -89, -28, -125, 110, -7, -46, 102, 62, -51, -17, 44, -45, -120, -50, -101, 20, -89, 89, 115, -6, 50, -71, -77, -67, 35, 58, -64, -30, 51, -10, -82, 73, 76, 120, -101, 9, -112, 20, -55, 38, -66, -99, -22, 78, 48, 94, -112, 34, 35, -28, -24, 26, -109, -68, -49, 22, -16, 26, 66, 103, -50, -55, 43, -31, -108, 66, -124, 77, 123, -61, 52, -108, 46, 105, 72, 98, 22, 87, 12, 83, -118, -21, 62, 126, -17, -44, -83, -32, -111, -54, -30, 85, 46, -76, -20, -101, 22, -27, -49, 57, -128, -32, -1, -52, -56, 63, -2, 34, -18, -38, -32, 28, -93, 101, -44, 120, -31, -40, 89, 105, -111, -57, 41, -51, 51, -2, -62, -15, -128, -47, -25, -39, -102, 74, -77, -59, -70, -62, 47, 113, 121, -45, 57, 54, 77, 113, -96, 38, -78, -44, 39, -58, 15, 12, -33, 109, 91, 120, 39, 57, 59, -37, 38, -119, 124, -122, -48, -1, -82, -49};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.9888032530496893);
    msg.setSource(12634U);
    msg.setSourceEntity(74U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(134U);
    msg.locale.assign("GZOLNLWCSKMVZPRRYUYDMKHXNQKSMOBOIXEXAQDJVHDM");
    const char tmp_msg_0[] = {32, -100, -97, 47, 90, 45, 76, 57, 51, 123, -56, 102, 79, -90, -80, 126, -79, 25, 106, -54, 13, 110, 73, 47, -16, -106, -3, -76, 95, -79, 6, -80, 93, 14, 108, -26, 22, -41, -30, 115, -44, 81, 118, 67, -79, -117, 116, 61, 124, 112, 91, 24, -19, -127, -41, 30, 73, 37, 36, -70, 34, 80, -80, 124, -38, -16, -70, -46, 20, -106, -68, 84, 111, 17, -82};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.19827644626165175);
    msg.setSource(9470U);
    msg.setSourceEntity(225U);
    msg.setDestination(10707U);
    msg.setDestinationEntity(125U);
    msg.locale.assign("FFIFENOJPQCCOZRPZNQTXAYWEJCIYVDRLRHKABAADZUJKWYSVMEZNOKAIUIHSASVYPBUQQOROLMPEDVLWYMWTEQCPGPGGDKKNUFKABNWXTUYDJFTBNQYHXAUHSSKRGUCSWTDWSHX");
    const char tmp_msg_0[] = {73, 94, -79, -41, -118, -39, 3, -21, 2, 2, -33, 14, 12, 36, 63, 38, -80, 44, 102, -28, -46, -89, 80, -108, 26, 94, -7, 52, -31, -64, -38, -63, -99, -94, 118, -103, 73, 81, 30, 112, -22, -45, 122, -42, -5, 54, 87, -39, -14, 93, 120, 114, 20, 117, -20, -56, -69, 118, -89, 65, -34, -59, 66, -128, 111, -81, -37, -3, -53, -115, -66, 73, 28, -49, 95, -110, 92, -117, 123, -127, 0, 62, -75, -24, 92, 0, -55, 119, -76, -124, -49, 1, -96, -62, 120, 55, 97, 48, 124, -48, 62, -36, -9, 93, -98, -6, -15, 79, 121, -59, 10, -78, 93, -114, 50, -90, -63, -2, 13, 11, 83, -6, 67, 27, -99, 59, 77, -66, -39, 124, 22, 47, -6, -35, -89, 67, -125, 78, -22, 102, 31, 23, -123, -105, -54, 77, -30, -59, -38, -33, -108, 9, -5, -104, 101, 32, -14, 11, -92, 82, 87, 73, -68, 12, -82, 7, 4, 0, 1, 33, -80, -6, 16, 2, -76, 50, -13, -32, 40, -110, -1, 60, -98, 1, -77, -83, -125, -25, 40, 2, -85, -112, 105, -111, 3, 88, -43, -67, 115, -96, 58, -11, 34, -104, -20, 74, 114, -36, 0, -24, -78, 19, 45, 106, 92, 68, -89, -127, -120, 45, -125, -127, -93, -124, -22, 62, -39, 14};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.31870735749853285);
    msg.setSource(15867U);
    msg.setSourceEntity(222U);
    msg.setDestination(44715U);
    msg.setDestinationEntity(145U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.8687515656894963);
    msg.setSource(1643U);
    msg.setSourceEntity(248U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.5349648372982737);
    msg.setSource(16444U);
    msg.setSourceEntity(231U);
    msg.setDestination(63147U);
    msg.setDestinationEntity(192U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.8915706202552451);
    msg.setSource(28803U);
    msg.setSourceEntity(62U);
    msg.setDestination(45169U);
    msg.setDestinationEntity(108U);
    msg.camid = 220U;
    msg.x = 29362U;
    msg.y = 22294U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.14964982265328963);
    msg.setSource(13086U);
    msg.setSourceEntity(4U);
    msg.setDestination(15998U);
    msg.setDestinationEntity(254U);
    msg.camid = 16U;
    msg.x = 28254U;
    msg.y = 35485U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.004916985537507301);
    msg.setSource(13243U);
    msg.setSourceEntity(153U);
    msg.setDestination(16195U);
    msg.setDestinationEntity(237U);
    msg.camid = 35U;
    msg.x = 6745U;
    msg.y = 14061U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.04155476226560262);
    msg.setSource(9699U);
    msg.setSourceEntity(61U);
    msg.setDestination(59506U);
    msg.setDestinationEntity(147U);
    msg.camid = 28U;
    msg.x = 11884U;
    msg.y = 58676U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.7948765943470895);
    msg.setSource(58249U);
    msg.setSourceEntity(238U);
    msg.setDestination(17165U);
    msg.setDestinationEntity(129U);
    msg.camid = 182U;
    msg.x = 5215U;
    msg.y = 414U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.2699897592628442);
    msg.setSource(2746U);
    msg.setSourceEntity(239U);
    msg.setDestination(24300U);
    msg.setDestinationEntity(129U);
    msg.camid = 104U;
    msg.x = 15173U;
    msg.y = 45352U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.9254223673848773);
    msg.setSource(3184U);
    msg.setSourceEntity(95U);
    msg.setDestination(24843U);
    msg.setDestinationEntity(212U);
    msg.tracking = 234U;
    msg.lat = 0.28062888358870663;
    msg.lon = 0.996319782317103;
    msg.x = 0.09009535961786186;
    msg.y = 0.36011141054804063;
    msg.z = 0.5637145228642979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.38583048910586537);
    msg.setSource(55038U);
    msg.setSourceEntity(33U);
    msg.setDestination(2296U);
    msg.setDestinationEntity(239U);
    msg.tracking = 145U;
    msg.lat = 0.8139384076459237;
    msg.lon = 0.28398956275321197;
    msg.x = 0.8751746496620868;
    msg.y = 0.44739356237188255;
    msg.z = 0.08386116744252847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.8270029439311233);
    msg.setSource(27728U);
    msg.setSourceEntity(55U);
    msg.setDestination(59269U);
    msg.setDestinationEntity(230U);
    msg.tracking = 237U;
    msg.lat = 0.26071934101942673;
    msg.lon = 0.5877538954199844;
    msg.x = 0.06684006495956041;
    msg.y = 0.8089350566439458;
    msg.z = 0.28705949890312454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.9273918691306984);
    msg.setSource(46193U);
    msg.setSourceEntity(11U);
    msg.setDestination(45917U);
    msg.setDestinationEntity(152U);
    msg.target.assign("ZZMILAVVODQHVPSNSCZPDMZJOGDOZFFMQTXUCKNHPSABSPTPZKFRHH");
    msg.lbearing = 0.2122098233924654;
    msg.lelevation = 0.7689167813414436;
    msg.bearing = 0.5272327319912955;
    msg.elevation = 0.8604170660830937;
    msg.phi = 0.7662906043934031;
    msg.theta = 0.8581057962528076;
    msg.psi = 0.27891648355508125;
    msg.accuracy = 0.779658951126345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.37530699690139646);
    msg.setSource(17680U);
    msg.setSourceEntity(91U);
    msg.setDestination(42979U);
    msg.setDestinationEntity(136U);
    msg.target.assign("SYEDTCNEIFVHYVXILFBJBQMPKIPUMCEVKUTUBQPYODEPPAHKHGEXFEIHMGIVURXSOQTFRQNESWBOYCQMKVA");
    msg.lbearing = 0.12047876142811031;
    msg.lelevation = 0.7136819952964889;
    msg.bearing = 0.784909765949995;
    msg.elevation = 0.8774533713011404;
    msg.phi = 0.7885292232456993;
    msg.theta = 0.5314390749168153;
    msg.psi = 0.41941762879905786;
    msg.accuracy = 0.0008197172120084639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.29393277261493633);
    msg.setSource(53465U);
    msg.setSourceEntity(188U);
    msg.setDestination(55687U);
    msg.setDestinationEntity(109U);
    msg.target.assign("LARFVTTOJXTHEZFLBMVHOYNBDNBISKPYPNSXZFIAWGRJEFLXPJHNHCNZFFBDAUCFZKHSXEPUSQGLWHHFILHGKMRHTQNCNYRKVLABKJCEATSUJDAKJIXYCRDEELJCZPIHGVWFKRGXGOZPARTZWQUZSJSJTXDKVRBMYMZIVCCVMDLAJKWMPXOQYMPECDWYUO");
    msg.lbearing = 0.05604052038437679;
    msg.lelevation = 0.09824741005716786;
    msg.bearing = 0.301666392143762;
    msg.elevation = 0.4431307036071963;
    msg.phi = 0.7178751151698254;
    msg.theta = 0.16116596993300336;
    msg.psi = 0.36965906944166693;
    msg.accuracy = 0.5602055774404298;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.2372693264539426);
    msg.setSource(25153U);
    msg.setSourceEntity(47U);
    msg.setDestination(7972U);
    msg.setDestinationEntity(83U);
    msg.target.assign("DJZICRASMVHSMPTBWOLZBLCQCJIXDSJFQHBFTNRGDBEIVNHEPNOAILEPSWYFMWRBKKYYDTZGWMUFYPKNFYPSVIXLCPOMFLAWXBLFXBRRRDTINYUAHRSWVEEMOOKTJKGHJMREZQMVAKLDGGRRNYNKNFJQEFMLGJXUIXOLQDCHJVBUXJNNACSWSEOIZTMDCTGUGGX");
    msg.x = 0.24301721803266074;
    msg.y = 0.017271246097448678;
    msg.z = 0.6569279990506036;
    msg.n = 0.41503389634311927;
    msg.e = 0.8179741952905064;
    msg.d = 0.8084446165415168;
    msg.phi = 0.9811206181635185;
    msg.theta = 0.12082851038496001;
    msg.psi = 0.10661605771273597;
    msg.accuracy = 0.9721744881590225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.33551352713574834);
    msg.setSource(26170U);
    msg.setSourceEntity(16U);
    msg.setDestination(48576U);
    msg.setDestinationEntity(29U);
    msg.target.assign("RROKYPXEBNHGOMSKIQ");
    msg.x = 0.44603964619440084;
    msg.y = 0.08233708175665433;
    msg.z = 0.8548041807303873;
    msg.n = 0.6685782892849238;
    msg.e = 0.7155914986251372;
    msg.d = 0.9666100239491353;
    msg.phi = 0.9500131337824442;
    msg.theta = 0.570247341881739;
    msg.psi = 0.1394921336327284;
    msg.accuracy = 0.30394390053353904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.14556349790873913);
    msg.setSource(44523U);
    msg.setSourceEntity(103U);
    msg.setDestination(23983U);
    msg.setDestinationEntity(181U);
    msg.target.assign("TGBIZSGPWRAFNPTVUXUPQDOKZBBPEQUWMNAOGVIFOJNKLZDROKGWMCNFONOIAMTZMQEKOZEWVDLLOEJXSGJIUKZEVCXIJYYUZEAHALXEXUZBIBVEFLSCKKHKKVC");
    msg.x = 0.30758990847710854;
    msg.y = 0.860857769220144;
    msg.z = 0.19976247928240287;
    msg.n = 0.7918720652289034;
    msg.e = 0.06279803151398478;
    msg.d = 0.43951846152535334;
    msg.phi = 0.8190898194026371;
    msg.theta = 0.9478244846834651;
    msg.psi = 0.3738020253569805;
    msg.accuracy = 0.670817725042644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.06020793974228089);
    msg.setSource(1237U);
    msg.setSourceEntity(221U);
    msg.setDestination(28436U);
    msg.setDestinationEntity(243U);
    msg.target.assign("VHQPPOOSSJAZBEWQWEVRAAYACHTLDQTPACMTPSHIGEZJCRKXNJKWWMQNCLDZFMGOLLUYNUUVAQIIJWSWPDFDAKECWJNR");
    msg.lat = 0.8013378899498375;
    msg.lon = 0.594994816398805;
    msg.z_units = 222U;
    msg.z = 0.3674835227258314;
    msg.accuracy = 0.12218575298730427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.46911050665774445);
    msg.setSource(59035U);
    msg.setSourceEntity(90U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(37U);
    msg.target.assign("VXIWECBKBZUFKFDTXWYYXTSBLIWPQCWJGOZMQNRHLZYBDGSCNCLCMNMEGHYFQTPJJPUDVXHQUNYLQWEIBVZP");
    msg.lat = 0.6184967043777805;
    msg.lon = 0.954587587446844;
    msg.z_units = 184U;
    msg.z = 0.5590956478400568;
    msg.accuracy = 0.1849370352683395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.330964751547453);
    msg.setSource(52856U);
    msg.setSourceEntity(132U);
    msg.setDestination(21619U);
    msg.setDestinationEntity(237U);
    msg.target.assign("LPVXAUNTISLTCDQYYALZDGQWYPOUPDFQSQJYRORETLAUVZITESJPRHEEJZAKIRZRINGYKURWFHHHVCGHGKYQBZXREQRXPFLFBXGMKAFWUMOIQJQMWGCCIRINXHVGUREDNKNMIOOODAIVALJCTMUBUTJQGC");
    msg.lat = 0.05084847139626991;
    msg.lon = 0.5021581301354524;
    msg.z_units = 112U;
    msg.z = 0.41600194427269277;
    msg.accuracy = 0.7277186350412723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.6352460806296261);
    msg.setSource(6779U);
    msg.setSourceEntity(252U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(72U);
    msg.name.assign("POTJKWXLUGDDZNBOMBYERMIXBYFKHLATFLCQPIZCQNVXQRATEFHICNIXJSPITUVJTGQYFPGPKVYGCAMAMHUJVYEUXCVRLPCFWRSVTRQPORSCODJYSDQFSBZFDSUBOHGOZOYJJXBWECABSOFRKMWQIJITDLKTZEVVNDVPAMWJIYNONUMBKPMGELSUCGNDNHQKZVPXA");
    msg.lat = 0.4121366496058808;
    msg.lon = 0.22596687876721566;
    msg.z = 0.3142941935950875;
    msg.z_units = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.7458946412092675);
    msg.setSource(8777U);
    msg.setSourceEntity(59U);
    msg.setDestination(47112U);
    msg.setDestinationEntity(176U);
    msg.name.assign("FAMJCUCKIZOQJMLGHYNOTYRXCVEEQPTUXJQUUOFGKLHWLLVQPOUJTDVUMYCUXSOIGTMHMIZFSDJZDCPWVZAPEWJBKEJWEEAANGPHGSTWVRRAMILACCPNZXXGSIHAVYBSFOKOYBANWIKZJOJPVGHTBNNDKDFSNATKVGAQXPNKRFQHWGLRQHRRCFBNXQTESQXMYYWJVTZYYFGFUCDPMZLVOTOPRKHIDQBKREIBWEDCSZBLZXLLBYDRXHUSUMIMN");
    msg.lat = 0.8685298353748864;
    msg.lon = 0.04093947214723159;
    msg.z = 0.8932420278356342;
    msg.z_units = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.3216416069281529);
    msg.setSource(5141U);
    msg.setSourceEntity(13U);
    msg.setDestination(17623U);
    msg.setDestinationEntity(44U);
    msg.name.assign("HAIVFLMBHDZZP");
    msg.lat = 0.5315473620791838;
    msg.lon = 0.9668084098627371;
    msg.z = 0.28355954888957013;
    msg.z_units = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.6436274467907744);
    msg.setSource(53526U);
    msg.setSourceEntity(122U);
    msg.setDestination(23565U);
    msg.setDestinationEntity(168U);
    msg.op = 91U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KSHNNVNTGQODMMISHVEGZRXKHZTOLJRAHQOHOVAOJYGMYCCFDSMFTHFZGYXENDSEUSVNVVWWKPUIBEZDPFZYOCDEUAPNQQEKSCQVTECTIKBXHASXUPRGUCNSROTZUDZUIIXRYPITZFVYOHTBKFAKGWQDBAEXBANQJVSGYLPIBMCJGLOIE");
    tmp_msg_0.lat = 0.46203866453270737;
    tmp_msg_0.lon = 0.9373230592690363;
    tmp_msg_0.z = 0.796104309301373;
    tmp_msg_0.z_units = 4U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.8259880726353449);
    msg.setSource(63213U);
    msg.setSourceEntity(87U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(28U);
    msg.op = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.4027687909618841);
    msg.setSource(32428U);
    msg.setSourceEntity(214U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(10U);
    msg.op = 184U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FSEOOAPLPAZYINYJHLDWBTAPMBCQOSNRNJOSDPLKWRZWXVMDLSXWTMGSVZFGHXKDPCFPOYKIXFBGGYJQCUOOWCAWOKQYVITCKKDXOVQTGZTLYQHRU");
    tmp_msg_0.lat = 0.7417943949496756;
    tmp_msg_0.lon = 0.12467202427197188;
    tmp_msg_0.z = 0.4652695749399024;
    tmp_msg_0.z_units = 136U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.594822640512085);
    msg.setSource(17997U);
    msg.setSourceEntity(42U);
    msg.setDestination(36849U);
    msg.setDestinationEntity(177U);
    msg.value = 0.8692894307483152;
    msg.type = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4335479344633376);
    msg.setSource(27492U);
    msg.setSourceEntity(1U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(49U);
    msg.value = 0.1684059157385216;
    msg.type = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.5043310196618518);
    msg.setSource(34044U);
    msg.setSourceEntity(90U);
    msg.setDestination(12480U);
    msg.setDestinationEntity(76U);
    msg.value = 0.792902042420961;
    msg.type = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.31681070287447144);
    msg.setSource(22621U);
    msg.setSourceEntity(37U);
    msg.setDestination(13891U);
    msg.setDestinationEntity(61U);
    msg.value = 0.9248041616659048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.5434664365074204);
    msg.setSource(26232U);
    msg.setSourceEntity(5U);
    msg.setDestination(18368U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9887959366265122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.8818078032360913);
    msg.setSource(32009U);
    msg.setSourceEntity(90U);
    msg.setDestination(49256U);
    msg.setDestinationEntity(124U);
    msg.value = 0.9901979097194826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.4878103028434453);
    msg.setSource(49534U);
    msg.setSourceEntity(109U);
    msg.setDestination(33644U);
    msg.setDestinationEntity(227U);
    msg.timestamp_last_service = 0.7187567353544835;
    msg.time_next_service = 0.2863971706399563;
    msg.time_motor_next_service = 0.21181140850180769;
    msg.time_idle_ground = 0.4657632282468752;
    msg.time_idle_air = 0.6056645567748231;
    msg.time_idle_water = 0.8320606020156022;
    msg.time_idle_underwater = 0.7219696147409399;
    msg.time_idle_unknown = 0.1600932237845244;
    msg.time_motor_ground = 0.048487587138337784;
    msg.time_motor_air = 0.010994454302986068;
    msg.time_motor_water = 0.5353412658861959;
    msg.time_motor_underwater = 0.6018749787774934;
    msg.time_motor_unknown = 0.048321004550040736;
    msg.rpm_min = -14209;
    msg.rpm_max = -22186;
    msg.depth_max = 0.9016957599520615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.8819721584011595);
    msg.setSource(35098U);
    msg.setSourceEntity(60U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(5U);
    msg.timestamp_last_service = 0.08380842574953473;
    msg.time_next_service = 0.18229022712507048;
    msg.time_motor_next_service = 0.9363256645134304;
    msg.time_idle_ground = 0.4897389051630182;
    msg.time_idle_air = 0.90863191091392;
    msg.time_idle_water = 0.9328977804407855;
    msg.time_idle_underwater = 0.7173777745100249;
    msg.time_idle_unknown = 0.15281185882175352;
    msg.time_motor_ground = 0.8177009340028742;
    msg.time_motor_air = 0.7311015335940777;
    msg.time_motor_water = 0.0071520465705516845;
    msg.time_motor_underwater = 0.7708085379999201;
    msg.time_motor_unknown = 0.5327672408133317;
    msg.rpm_min = 22555;
    msg.rpm_max = -6893;
    msg.depth_max = 0.9888051537052448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.20761284541798186);
    msg.setSource(50044U);
    msg.setSourceEntity(146U);
    msg.setDestination(58400U);
    msg.setDestinationEntity(250U);
    msg.timestamp_last_service = 0.9603731786769335;
    msg.time_next_service = 0.2597266142845688;
    msg.time_motor_next_service = 0.9611854388185055;
    msg.time_idle_ground = 0.41505264163815037;
    msg.time_idle_air = 0.931711724244878;
    msg.time_idle_water = 0.38204924780381233;
    msg.time_idle_underwater = 0.3693667395875424;
    msg.time_idle_unknown = 0.6985321182310519;
    msg.time_motor_ground = 0.7915871347480941;
    msg.time_motor_air = 0.14481396827730242;
    msg.time_motor_water = 0.34046223125304975;
    msg.time_motor_underwater = 0.05826668993395834;
    msg.time_motor_unknown = 0.24182569317715197;
    msg.rpm_min = -5526;
    msg.rpm_max = -27849;
    msg.depth_max = 0.269314975457986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.8512142051373048);
    msg.setSource(29993U);
    msg.setSourceEntity(149U);
    msg.setDestination(23379U);
    msg.setDestinationEntity(62U);
    msg.severity = 177U;
    msg.text.assign("UEGOELCMDJZFLJVNXHWPZOEWPYQCFJRGFNHXTSUGDOTTYNWILENUIPDYKFDZUZGIMMJQYODPHNOFHTOKAVAATVSKVQZBUFSQNOREKCUWLSFIJYXDJRLWEMMRVQBSBKCDVYOPGAHCISNMOSTGVCXBILCIRCBHJWBFBPJQXVFERGBDKNABRGGPFMXUAQGLYESPAVSULZTRWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.5608552355424492);
    msg.setSource(38983U);
    msg.setSourceEntity(212U);
    msg.setDestination(53513U);
    msg.setDestinationEntity(187U);
    msg.severity = 198U;
    msg.text.assign("LABVHRTCBNBQDCRUOEFXVAPWMJCVUKLIZWODWAMXYPOFZNCSHJGNFTPIIZZYYMCRBFLXBRJEXDCQWAPKETJCIOUDVVKCFTRJKQUMJJKESZQTBGXNZZZMRNLXNGONLNVWSVJPUFDMQYDEFZKMWEFNRTIUGHUXHUQOYSOPIPIMSUGYESWDWGXAVEYOHKQJOSRTBILBTHLKFKCKDMXSACSHZSENEAQTGXAWGUYBHHRIMPTQLO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.254043639099945);
    msg.setSource(10029U);
    msg.setSourceEntity(107U);
    msg.setDestination(42791U);
    msg.setDestinationEntity(156U);
    msg.severity = 226U;
    msg.text.assign("SSCFQJYGMDHPEZXEGINBLATVWOPQYDLGQAZCQZQYPNLOGFDAFPDRMUXFXIKUHBTRCEVHDFVSHNSPTIGFXMRIQVMDIJVXKWJAOOJTPSYUKRWLRJUKUTCBXQEMLKYWMQFTSBHPXWOKTWHRAIJLUKLFZHBMYNGZVACRXYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.6995337402410148);
    msg.setSource(16697U);
    msg.setSourceEntity(48U);
    msg.setDestination(17473U);
    msg.setDestinationEntity(139U);
    msg.channel = -115;
    msg.value = 472612288;
    msg.gain = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.7005103394342803);
    msg.setSource(16426U);
    msg.setSourceEntity(0U);
    msg.setDestination(16783U);
    msg.setDestinationEntity(96U);
    msg.channel = 100;
    msg.value = 33715949;
    msg.gain = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.32232506058143406);
    msg.setSource(25500U);
    msg.setSourceEntity(144U);
    msg.setDestination(26507U);
    msg.setDestinationEntity(196U);
    msg.channel = 20;
    msg.value = -1406764613;
    msg.gain = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
