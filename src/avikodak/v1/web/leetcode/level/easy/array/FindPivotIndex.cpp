/****************************************************************************************************************************************************
 *  File Name                   : FindPivotIndex.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FindPivotIndex.cpp
 *  Created on                  : Sep 5, 2022 :: 8:33:03 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-pivot-index/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int pivotIndex(std::vector<int> &nums) {
        int sum = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            sum += nums[counter];
        }
        int leftSum = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            if (leftSum == sum - leftSum - nums[counter]) {
                return counter;
            }
            leftSum += nums[counter];
        }
        return -1;
    }
};
