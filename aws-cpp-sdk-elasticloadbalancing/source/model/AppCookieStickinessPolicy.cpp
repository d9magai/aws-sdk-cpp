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
#include <aws/elasticloadbalancing/model/AppCookieStickinessPolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

AppCookieStickinessPolicy::AppCookieStickinessPolicy() : 
    m_policyNameHasBeenSet(false),
    m_cookieNameHasBeenSet(false)
{
}

AppCookieStickinessPolicy::AppCookieStickinessPolicy(const XmlNode& xmlNode) : 
    m_policyNameHasBeenSet(false),
    m_cookieNameHasBeenSet(false)
{
  *this = xmlNode;
}

AppCookieStickinessPolicy& AppCookieStickinessPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if(policyNameNode.IsNull())
    {
      policyNameNode = resultNode;
    }

    if(!policyNameNode.IsNull())
    {
      m_policyName = StringUtils::Trim(policyNameNode.GetText().c_str());
      m_policyNameHasBeenSet = true;
    }
    XmlNode cookieNameNode = resultNode.FirstChild("CookieName");
    if(cookieNameNode.IsNull())
    {
      cookieNameNode = resultNode;
    }

    if(!cookieNameNode.IsNull())
    {
      m_cookieName = StringUtils::Trim(cookieNameNode.GetText().c_str());
      m_cookieNameHasBeenSet = true;
    }
  }

  return *this;
}

void AppCookieStickinessPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_cookieNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CookieName=" << StringUtils::URLEncode(m_cookieName.c_str()) << "&";
  }
}

void AppCookieStickinessPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_cookieNameHasBeenSet)
  {
      oStream << location << ".CookieName=" << StringUtils::URLEncode(m_cookieName.c_str()) << "&";
  }
}
