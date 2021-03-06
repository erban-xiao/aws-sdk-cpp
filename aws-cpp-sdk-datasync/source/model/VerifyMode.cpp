﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/datasync/model/VerifyMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace VerifyModeMapper
      {

        static const int POINT_IN_TIME_CONSISTENT_HASH = HashingUtils::HashString("POINT_IN_TIME_CONSISTENT");
        static const int ONLY_FILES_TRANSFERRED_HASH = HashingUtils::HashString("ONLY_FILES_TRANSFERRED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        VerifyMode GetVerifyModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POINT_IN_TIME_CONSISTENT_HASH)
          {
            return VerifyMode::POINT_IN_TIME_CONSISTENT;
          }
          else if (hashCode == ONLY_FILES_TRANSFERRED_HASH)
          {
            return VerifyMode::ONLY_FILES_TRANSFERRED;
          }
          else if (hashCode == NONE_HASH)
          {
            return VerifyMode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifyMode>(hashCode);
          }

          return VerifyMode::NOT_SET;
        }

        Aws::String GetNameForVerifyMode(VerifyMode enumValue)
        {
          switch(enumValue)
          {
          case VerifyMode::POINT_IN_TIME_CONSISTENT:
            return "POINT_IN_TIME_CONSISTENT";
          case VerifyMode::ONLY_FILES_TRANSFERRED:
            return "ONLY_FILES_TRANSFERRED";
          case VerifyMode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifyModeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
