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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API ListGroupsRequest : public IAMRequest
  {
  public:
    ListGroupsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The path prefix for filtering the results. For example, the prefix <code>/division_abc/subdivision_xyz/</code> gets all groups whose path starts with <code>/division_abc/subdivision_xyz/</code>. </p> <p> This parameter is optional. If it is not included, it defaults to a slash (/), listing all groups. </p>
    */
    inline const Aws::String& GetPathPrefix() const{ return m_pathPrefix; }

    /*
     <p> The path prefix for filtering the results. For example, the prefix <code>/division_abc/subdivision_xyz/</code> gets all groups whose path starts with <code>/division_abc/subdivision_xyz/</code>. </p> <p> This parameter is optional. If it is not included, it defaults to a slash (/), listing all groups. </p>
    */
    inline void SetPathPrefix(const Aws::String& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /*
     <p> The path prefix for filtering the results. For example, the prefix <code>/division_abc/subdivision_xyz/</code> gets all groups whose path starts with <code>/division_abc/subdivision_xyz/</code>. </p> <p> This parameter is optional. If it is not included, it defaults to a slash (/), listing all groups. </p>
    */
    inline void SetPathPrefix(Aws::String&& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /*
     <p> The path prefix for filtering the results. For example, the prefix <code>/division_abc/subdivision_xyz/</code> gets all groups whose path starts with <code>/division_abc/subdivision_xyz/</code>. </p> <p> This parameter is optional. If it is not included, it defaults to a slash (/), listing all groups. </p>
    */
    inline void SetPathPrefix(const char* value) { m_pathPrefixHasBeenSet = true; m_pathPrefix.assign(value); }

    /*
     <p> The path prefix for filtering the results. For example, the prefix <code>/division_abc/subdivision_xyz/</code> gets all groups whose path starts with <code>/division_abc/subdivision_xyz/</code>. </p> <p> This parameter is optional. If it is not included, it defaults to a slash (/), listing all groups. </p>
    */
    inline ListGroupsRequest& WithPathPrefix(const Aws::String& value) { SetPathPrefix(value); return *this;}

    /*
     <p> The path prefix for filtering the results. For example, the prefix <code>/division_abc/subdivision_xyz/</code> gets all groups whose path starts with <code>/division_abc/subdivision_xyz/</code>. </p> <p> This parameter is optional. If it is not included, it defaults to a slash (/), listing all groups. </p>
    */
    inline ListGroupsRequest& WithPathPrefix(Aws::String&& value) { SetPathPrefix(value); return *this;}

    /*
     <p> The path prefix for filtering the results. For example, the prefix <code>/division_abc/subdivision_xyz/</code> gets all groups whose path starts with <code>/division_abc/subdivision_xyz/</code>. </p> <p> This parameter is optional. If it is not included, it defaults to a slash (/), listing all groups. </p>
    */
    inline ListGroupsRequest& WithPathPrefix(const char* value) { SetPathPrefix(value); return *this;}

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListGroupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListGroupsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListGroupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /*
     <p>Use this only when paginating results to indicate the maximum number of items you want in the response. If there are additional items beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>.</p> <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline long GetMaxItems() const{ return m_maxItems; }

    /*
     <p>Use this only when paginating results to indicate the maximum number of items you want in the response. If there are additional items beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>.</p> <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /*
     <p>Use this only when paginating results to indicate the maximum number of items you want in the response. If there are additional items beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>.</p> <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline ListGroupsRequest& WithMaxItems(long value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_pathPrefix;
    bool m_pathPrefixHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
