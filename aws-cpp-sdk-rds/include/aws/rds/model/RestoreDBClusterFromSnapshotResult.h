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
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBCluster.h>
#include <aws/rds/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_RDS_API RestoreDBClusterFromSnapshotResult
  {
  public:
    RestoreDBClusterFromSnapshotResult();
    RestoreDBClusterFromSnapshotResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RestoreDBClusterFromSnapshotResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const DBCluster& GetDBCluster() const{ return m_dBCluster; }

    
    inline void SetDBCluster(const DBCluster& value) { m_dBCluster = value; }

    
    inline void SetDBCluster(DBCluster&& value) { m_dBCluster = value; }

    
    inline RestoreDBClusterFromSnapshotResult& WithDBCluster(const DBCluster& value) { SetDBCluster(value); return *this;}

    
    inline RestoreDBClusterFromSnapshotResult& WithDBCluster(DBCluster&& value) { SetDBCluster(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline RestoreDBClusterFromSnapshotResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RestoreDBClusterFromSnapshotResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    DBCluster m_dBCluster;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws