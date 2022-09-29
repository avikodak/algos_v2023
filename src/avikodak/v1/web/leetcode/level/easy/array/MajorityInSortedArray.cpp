/****************************************************************************************************************************************************
 *  File Name                   : MajorityInSortedArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MajorityInSortedArray.cpp
 *  Created on                  : Sep 27, 2022 :: 8:42:49 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isMajorityElement(std::vector<int> &nums, int target) {
        auto lower = std::lower_bound(nums.begin(), nums.end(), target);
        if (*lower != target) {
            return false;
        }
        auto upper = std::upper_bound(nums.begin(), nums.end(), target);
        return (upper - lower) > nums.size() / 2;
    }
};
