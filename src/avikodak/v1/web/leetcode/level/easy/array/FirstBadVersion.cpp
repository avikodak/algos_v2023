/****************************************************************************************************************************************************
 *  File Name                   : FirstBadVersion.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FirstBadVersion.cpp
 *  Created on                  : Aug 30, 2022 :: 6:48:09 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/first-bad-version
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int mid;
        bool result;
        while (start <= end) {
            mid = (end - start) / 2 + start;
            result = isBadVersion(mid);
            if (result) {
                if (mid - 1 > 0) {
                    if (!isBadVersion(mid - 1)) {
                        return mid;
                    }
                } else if (mid - 1 <= 0) {
                    return mid;
                }
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }
};

