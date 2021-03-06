/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/rds/model/DBCluster.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DBCluster::DBCluster() : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterParameterGroupHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentProgressHasBeenSet(false),
    m_earliestRestorableTime(0.0),
    m_earliestRestorableTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTime(0.0),
    m_latestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBClusterOptionGroupMembershipsHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_dBClusterMembersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
}

DBCluster::DBCluster(const XmlNode& xmlNode) : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterParameterGroupHasBeenSet(false),
    m_dBSubnetGroupHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentProgressHasBeenSet(false),
    m_earliestRestorableTime(0.0),
    m_earliestRestorableTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_latestRestorableTime(0.0),
    m_latestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dBClusterOptionGroupMembershipsHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_dBClusterMembersHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
  *this = xmlNode;
}

DBCluster& DBCluster::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(allocatedStorageNode.IsNull())
    {
      allocatedStorageNode = resultNode;
    }

    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(allocatedStorageNode.GetText().c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(StringUtils::Trim(availabilityZonesMember.GetText().c_str()));
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(backupRetentionPeriodNode.IsNull())
    {
      backupRetentionPeriodNode = resultNode;
    }

    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(backupRetentionPeriodNode.GetText().c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode characterSetNameNode = resultNode.FirstChild("CharacterSetName");
    if(characterSetNameNode.IsNull())
    {
      characterSetNameNode = resultNode;
    }

    if(!characterSetNameNode.IsNull())
    {
      m_characterSetName = StringUtils::Trim(characterSetNameNode.GetText().c_str());
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if(databaseNameNode.IsNull())
    {
      databaseNameNode = resultNode;
    }

    if(!databaseNameNode.IsNull())
    {
      m_databaseName = StringUtils::Trim(databaseNameNode.GetText().c_str());
      m_databaseNameHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(dBClusterIdentifierNode.IsNull())
    {
      dBClusterIdentifierNode = resultNode;
    }

    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = StringUtils::Trim(dBClusterIdentifierNode.GetText().c_str());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterParameterGroupNode = resultNode.FirstChild("DBClusterParameterGroup");
    if(dBClusterParameterGroupNode.IsNull())
    {
      dBClusterParameterGroupNode = resultNode;
    }

    if(!dBClusterParameterGroupNode.IsNull())
    {
      m_dBClusterParameterGroup = StringUtils::Trim(dBClusterParameterGroupNode.GetText().c_str());
      m_dBClusterParameterGroupHasBeenSet = true;
    }
    XmlNode dBSubnetGroupNode = resultNode.FirstChild("DBSubnetGroup");
    if(dBSubnetGroupNode.IsNull())
    {
      dBSubnetGroupNode = resultNode;
    }

    if(!dBSubnetGroupNode.IsNull())
    {
      m_dBSubnetGroup = StringUtils::Trim(dBSubnetGroupNode.GetText().c_str());
      m_dBSubnetGroupHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(statusNode.IsNull())
    {
      statusNode = resultNode;
    }

    if(!statusNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(percentProgressNode.IsNull())
    {
      percentProgressNode = resultNode;
    }

    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::Trim(percentProgressNode.GetText().c_str());
      m_percentProgressHasBeenSet = true;
    }
    XmlNode earliestRestorableTimeNode = resultNode.FirstChild("EarliestRestorableTime");
    if(earliestRestorableTimeNode.IsNull())
    {
      earliestRestorableTimeNode = resultNode;
    }

    if(!earliestRestorableTimeNode.IsNull())
    {
      m_earliestRestorableTime = StringUtils::ConvertToDouble(StringUtils::Trim(earliestRestorableTimeNode.GetText().c_str()).c_str());
      m_earliestRestorableTimeHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(endpointNode.IsNull())
    {
      endpointNode = resultNode;
    }

    if(!endpointNode.IsNull())
    {
      m_endpoint = StringUtils::Trim(endpointNode.GetText().c_str());
      m_endpointHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(engineNode.IsNull())
    {
      engineNode = resultNode;
    }

    if(!engineNode.IsNull())
    {
      m_engine = StringUtils::Trim(engineNode.GetText().c_str());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(engineVersionNode.IsNull())
    {
      engineVersionNode = resultNode;
    }

    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = StringUtils::Trim(engineVersionNode.GetText().c_str());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode latestRestorableTimeNode = resultNode.FirstChild("LatestRestorableTime");
    if(latestRestorableTimeNode.IsNull())
    {
      latestRestorableTimeNode = resultNode;
    }

    if(!latestRestorableTimeNode.IsNull())
    {
      m_latestRestorableTime = StringUtils::ConvertToDouble(StringUtils::Trim(latestRestorableTimeNode.GetText().c_str()).c_str());
      m_latestRestorableTimeHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(portNode.IsNull())
    {
      portNode = resultNode;
    }

    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(masterUsernameNode.IsNull())
    {
      masterUsernameNode = resultNode;
    }

    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = StringUtils::Trim(masterUsernameNode.GetText().c_str());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode dBClusterOptionGroupMembershipsNode = resultNode.FirstChild("DBClusterOptionGroupMemberships");
    if(!dBClusterOptionGroupMembershipsNode.IsNull())
    {
      XmlNode dBClusterOptionGroupMembershipsMember = dBClusterOptionGroupMembershipsNode.FirstChild("DBClusterOptionGroup");
      while(!dBClusterOptionGroupMembershipsMember.IsNull())
      {
        m_dBClusterOptionGroupMemberships.push_back(dBClusterOptionGroupMembershipsMember);
        dBClusterOptionGroupMembershipsMember = dBClusterOptionGroupMembershipsMember.NextNode("DBClusterOptionGroup");
      }

      m_dBClusterOptionGroupMembershipsHasBeenSet = true;
    }
    XmlNode preferredBackupWindowNode = resultNode.FirstChild("PreferredBackupWindow");
    if(preferredBackupWindowNode.IsNull())
    {
      preferredBackupWindowNode = resultNode;
    }

    if(!preferredBackupWindowNode.IsNull())
    {
      m_preferredBackupWindow = StringUtils::Trim(preferredBackupWindowNode.GetText().c_str());
      m_preferredBackupWindowHasBeenSet = true;
    }
    XmlNode preferredMaintenanceWindowNode = resultNode.FirstChild("PreferredMaintenanceWindow");
    if(preferredMaintenanceWindowNode.IsNull())
    {
      preferredMaintenanceWindowNode = resultNode;
    }

    if(!preferredMaintenanceWindowNode.IsNull())
    {
      m_preferredMaintenanceWindow = StringUtils::Trim(preferredMaintenanceWindowNode.GetText().c_str());
      m_preferredMaintenanceWindowHasBeenSet = true;
    }
    XmlNode dBClusterMembersNode = resultNode.FirstChild("DBClusterMembers");
    if(!dBClusterMembersNode.IsNull())
    {
      XmlNode dBClusterMembersMember = dBClusterMembersNode.FirstChild("DBClusterMember");
      while(!dBClusterMembersMember.IsNull())
      {
        m_dBClusterMembers.push_back(dBClusterMembersMember);
        dBClusterMembersMember = dBClusterMembersMember.NextNode("DBClusterMember");
      }

      m_dBClusterMembersHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupsNode = resultNode.FirstChild("VpcSecurityGroups");
    if(!vpcSecurityGroupsNode.IsNull())
    {
      XmlNode vpcSecurityGroupsMember = vpcSecurityGroupsNode.FirstChild("VpcSecurityGroupMembership");
      while(!vpcSecurityGroupsMember.IsNull())
      {
        m_vpcSecurityGroups.push_back(vpcSecurityGroupsMember);
        vpcSecurityGroupsMember = vpcSecurityGroupsMember.NextNode("VpcSecurityGroupMembership");
      }

      m_vpcSecurityGroupsHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(hostedZoneIdNode.IsNull())
    {
      hostedZoneIdNode = resultNode;
    }

    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = StringUtils::Trim(hostedZoneIdNode.GetText().c_str());
      m_hostedZoneIdHasBeenSet = true;
    }
  }

  return *this;
}

void DBCluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_databaseNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_dBClusterParameterGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterParameterGroup=" << StringUtils::URLEncode(m_dBClusterParameterGroup.c_str()) << "&";
  }
  if(m_dBSubnetGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroup=" << StringUtils::URLEncode(m_dBSubnetGroup.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentProgress=" << StringUtils::URLEncode(m_percentProgress.c_str()) << "&";
  }
  if(m_earliestRestorableTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EarliestRestorableTime=" << m_earliestRestorableTime << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestRestorableTime=" << m_latestRestorableTime << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_dBClusterOptionGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_dBClusterOptionGroupMemberships)
      {
        Aws::StringStream dBClusterOptionGroupMembershipsSs;
        dBClusterOptionGroupMembershipsSs << location << index << locationValue << ".DBClusterOptionGroup";
        item.OutputToStream(oStream, dBClusterOptionGroupMembershipsSs.str().c_str());
      }
  }
  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_dBClusterMembersHasBeenSet)
  {
      for(auto& item : m_dBClusterMembers)
      {
        Aws::StringStream dBClusterMembersSs;
        dBClusterMembersSs << location << index << locationValue << ".DBClusterMember";
        item.OutputToStream(oStream, dBClusterMembersSs.str().c_str());
      }
  }
  if(m_vpcSecurityGroupsHasBeenSet)
  {
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location << index << locationValue << ".VpcSecurityGroupMembership";
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }
  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
}

void DBCluster::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_databaseNameHasBeenSet)
  {
      oStream << location << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_dBClusterParameterGroupHasBeenSet)
  {
      oStream << location << ".DBClusterParameterGroup=" << StringUtils::URLEncode(m_dBClusterParameterGroup.c_str()) << "&";
  }
  if(m_dBSubnetGroupHasBeenSet)
  {
      oStream << location << ".DBSubnetGroup=" << StringUtils::URLEncode(m_dBSubnetGroup.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << ".PercentProgress=" << StringUtils::URLEncode(m_percentProgress.c_str()) << "&";
  }
  if(m_earliestRestorableTimeHasBeenSet)
  {
      oStream << location << ".EarliestRestorableTime=" << m_earliestRestorableTime << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_latestRestorableTimeHasBeenSet)
  {
      oStream << location << ".LatestRestorableTime=" << m_latestRestorableTime << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_dBClusterOptionGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_dBClusterOptionGroupMemberships)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".DBClusterOptionGroup";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_preferredBackupWindowHasBeenSet)
  {
      oStream << location << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
      oStream << location << ".PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_dBClusterMembersHasBeenSet)
  {
      for(auto& item : m_dBClusterMembers)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".DBClusterMember";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_vpcSecurityGroupsHasBeenSet)
  {
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".VpcSecurityGroupMembership";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
}
