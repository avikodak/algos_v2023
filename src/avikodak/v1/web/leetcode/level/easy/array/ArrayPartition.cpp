/****************************************************************************************************************************************************
 *  File Name                   : ArrayPartition.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/ArrayPartition.cpp
 *  Created on                  : Sep 3, 2022 :: 11:52:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/array-partition/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int arrayPairSum(std::vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        int sum = 0;
        for (int counter = 0; counter < nums.size(); counter += 2) {
            sum += nums[counter];
        }
        return sum;
    }
};

