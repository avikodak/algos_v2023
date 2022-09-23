/****************************************************************************************************************************************************
 *  File Name                   : NRepeatedElement.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/NRepeatedElement.cpp
 *  Created on                  : Sep 21, 2022 :: 1:18:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int repeatedNTimes(std::vector<int> &nums) {
        std::map<int, int> seenValues;
        for (int counter = 0; counter < nums.size(); counter++) {
            if (seenValues.find(nums[counter]) != seenValues.end()) {
                return nums[counter];
            }
            seenValues[nums[counter]] = 1;
        }
        return INT_MAX;
    }
};
