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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/TransitionStorageClass.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_S3_API Transition
  {
  public:
    Transition();
    Transition(const Aws::Utils::Xml::XmlNode& xmlNode);
    Transition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /*
     Indicates at what date the object is to be moved or deleted. Should be in GMT ISO 8601 Format.
    */
    inline double GetDate() const{ return m_date; }

    /*
     Indicates at what date the object is to be moved or deleted. Should be in GMT ISO 8601 Format.
    */
    inline void SetDate(double value) { m_dateHasBeenSet = true; m_date = value; }

    /*
     Indicates at what date the object is to be moved or deleted. Should be in GMT ISO 8601 Format.
    */
    inline Transition& WithDate(double value) { SetDate(value); return *this;}

    /*
     Indicates the lifetime, in days, of the objects that are subject to the rule. The value must be a non-zero positive integer.
    */
    inline long GetDays() const{ return m_days; }

    /*
     Indicates the lifetime, in days, of the objects that are subject to the rule. The value must be a non-zero positive integer.
    */
    inline void SetDays(long value) { m_daysHasBeenSet = true; m_days = value; }

    /*
     Indicates the lifetime, in days, of the objects that are subject to the rule. The value must be a non-zero positive integer.
    */
    inline Transition& WithDays(long value) { SetDays(value); return *this;}

    /*
     The class of storage used to store the object.
    */
    inline const TransitionStorageClass& GetStorageClass() const{ return m_storageClass; }

    /*
     The class of storage used to store the object.
    */
    inline void SetStorageClass(const TransitionStorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /*
     The class of storage used to store the object.
    */
    inline void SetStorageClass(TransitionStorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /*
     The class of storage used to store the object.
    */
    inline Transition& WithStorageClass(const TransitionStorageClass& value) { SetStorageClass(value); return *this;}

    /*
     The class of storage used to store the object.
    */
    inline Transition& WithStorageClass(TransitionStorageClass&& value) { SetStorageClass(value); return *this;}

  private:
    double m_date;
    bool m_dateHasBeenSet;
    long m_days;
    bool m_daysHasBeenSet;
    TransitionStorageClass m_storageClass;
    bool m_storageClassHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
