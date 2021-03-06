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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{
  /*
    <p>The details of an Amazon ECS service deployment.</p>
  */
  class AWS_ECS_API Deployment
  {
  public:
    Deployment();
    Deployment(const Aws::Utils::Json::JsonValue& jsonValue);
    Deployment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The ID of the deployment.</p>
    */
    inline const Aws::String& GetId() const{ return m_id; }

    /*
     <p>The ID of the deployment.</p>
    */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /*
     <p>The ID of the deployment.</p>
    */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /*
     <p>The ID of the deployment.</p>
    */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /*
     <p>The ID of the deployment.</p>
    */
    inline Deployment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /*
     <p>The ID of the deployment.</p>
    */
    inline Deployment& WithId(Aws::String&& value) { SetId(value); return *this;}

    /*
     <p>The ID of the deployment.</p>
    */
    inline Deployment& WithId(const char* value) { SetId(value); return *this;}

    /*
     <p>The status of the deployment. Valid values are <code>PRIMARY</code> (for the most recent deployment), <code>ACTIVE</code> (for previous deployments that still have tasks running, but are being replaced with the <code>PRIMARY</code> deployment), and <code>INACTIVE</code> (for deployments that have been completely replaced).</p>
    */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /*
     <p>The status of the deployment. Valid values are <code>PRIMARY</code> (for the most recent deployment), <code>ACTIVE</code> (for previous deployments that still have tasks running, but are being replaced with the <code>PRIMARY</code> deployment), and <code>INACTIVE</code> (for deployments that have been completely replaced).</p>
    */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p>The status of the deployment. Valid values are <code>PRIMARY</code> (for the most recent deployment), <code>ACTIVE</code> (for previous deployments that still have tasks running, but are being replaced with the <code>PRIMARY</code> deployment), and <code>INACTIVE</code> (for deployments that have been completely replaced).</p>
    */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p>The status of the deployment. Valid values are <code>PRIMARY</code> (for the most recent deployment), <code>ACTIVE</code> (for previous deployments that still have tasks running, but are being replaced with the <code>PRIMARY</code> deployment), and <code>INACTIVE</code> (for deployments that have been completely replaced).</p>
    */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /*
     <p>The status of the deployment. Valid values are <code>PRIMARY</code> (for the most recent deployment), <code>ACTIVE</code> (for previous deployments that still have tasks running, but are being replaced with the <code>PRIMARY</code> deployment), and <code>INACTIVE</code> (for deployments that have been completely replaced).</p>
    */
    inline Deployment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /*
     <p>The status of the deployment. Valid values are <code>PRIMARY</code> (for the most recent deployment), <code>ACTIVE</code> (for previous deployments that still have tasks running, but are being replaced with the <code>PRIMARY</code> deployment), and <code>INACTIVE</code> (for deployments that have been completely replaced).</p>
    */
    inline Deployment& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /*
     <p>The status of the deployment. Valid values are <code>PRIMARY</code> (for the most recent deployment), <code>ACTIVE</code> (for previous deployments that still have tasks running, but are being replaced with the <code>PRIMARY</code> deployment), and <code>INACTIVE</code> (for deployments that have been completely replaced).</p>
    */
    inline Deployment& WithStatus(const char* value) { SetStatus(value); return *this;}

    /*
     <p>The most recent task definition that was specified for the service to use.</p>
    */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /*
     <p>The most recent task definition that was specified for the service to use.</p>
    */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /*
     <p>The most recent task definition that was specified for the service to use.</p>
    */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /*
     <p>The most recent task definition that was specified for the service to use.</p>
    */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /*
     <p>The most recent task definition that was specified for the service to use.</p>
    */
    inline Deployment& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /*
     <p>The most recent task definition that was specified for the service to use.</p>
    */
    inline Deployment& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(value); return *this;}

    /*
     <p>The most recent task definition that was specified for the service to use.</p>
    */
    inline Deployment& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

    /*
     <p>The most recent desired count of tasks that was specified for the service to deploy and/or maintain.</p>
    */
    inline long GetDesiredCount() const{ return m_desiredCount; }

    /*
     <p>The most recent desired count of tasks that was specified for the service to deploy and/or maintain.</p>
    */
    inline void SetDesiredCount(long value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /*
     <p>The most recent desired count of tasks that was specified for the service to deploy and/or maintain.</p>
    */
    inline Deployment& WithDesiredCount(long value) { SetDesiredCount(value); return *this;}

    /*
     <p>The number of tasks in the deployment that are in the <code>PENDING</code> status.</p>
    */
    inline long GetPendingCount() const{ return m_pendingCount; }

    /*
     <p>The number of tasks in the deployment that are in the <code>PENDING</code> status.</p>
    */
    inline void SetPendingCount(long value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }

    /*
     <p>The number of tasks in the deployment that are in the <code>PENDING</code> status.</p>
    */
    inline Deployment& WithPendingCount(long value) { SetPendingCount(value); return *this;}

    /*
     <p>The number of tasks in the deployment that are in the <code>RUNNING</code> status.</p>
    */
    inline long GetRunningCount() const{ return m_runningCount; }

    /*
     <p>The number of tasks in the deployment that are in the <code>RUNNING</code> status.</p>
    */
    inline void SetRunningCount(long value) { m_runningCountHasBeenSet = true; m_runningCount = value; }

    /*
     <p>The number of tasks in the deployment that are in the <code>RUNNING</code> status.</p>
    */
    inline Deployment& WithRunningCount(long value) { SetRunningCount(value); return *this;}

    /*
     <p>The Unix time in seconds and milliseconds when the service was created.</p>
    */
    inline double GetCreatedAt() const{ return m_createdAt; }

    /*
     <p>The Unix time in seconds and milliseconds when the service was created.</p>
    */
    inline void SetCreatedAt(double value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /*
     <p>The Unix time in seconds and milliseconds when the service was created.</p>
    */
    inline Deployment& WithCreatedAt(double value) { SetCreatedAt(value); return *this;}

    /*
     <p>The Unix time in seconds and milliseconds when the service was last updated.</p>
    */
    inline double GetUpdatedAt() const{ return m_updatedAt; }

    /*
     <p>The Unix time in seconds and milliseconds when the service was last updated.</p>
    */
    inline void SetUpdatedAt(double value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /*
     <p>The Unix time in seconds and milliseconds when the service was last updated.</p>
    */
    inline Deployment& WithUpdatedAt(double value) { SetUpdatedAt(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;
    long m_desiredCount;
    bool m_desiredCountHasBeenSet;
    long m_pendingCount;
    bool m_pendingCountHasBeenSet;
    long m_runningCount;
    bool m_runningCountHasBeenSet;
    double m_createdAt;
    bool m_createdAtHasBeenSet;
    double m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
