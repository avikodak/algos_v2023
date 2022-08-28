/****************************************************************************************************************************************************
 *  File Name                   : ContainsDuplicate.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/ContainsDuplicate.cpp
 *  Created on                  : Aug 28, 2022 :: 10:36:20 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/contains-duplicate/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool containsDuplicate(std::vector<int> &nums) {
        if (nums.size() < 2) {
            return false;
        }
        std::set<int> seenValues;
        for (int counter = 0; counter < nums.size(); counter++) {
            if (seenValues.find(nums[counter]) != seenValues.end()) {
                return true;
            }
            seenValues.insert(nums[counter]);
        }
        return false;
    }
};
