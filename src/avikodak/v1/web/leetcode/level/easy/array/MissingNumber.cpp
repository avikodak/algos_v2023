/****************************************************************************************************************************************************
 *  File Name                   : MissingNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MissingNumber.cpp
 *  Created on                  : Aug 29, 2022 :: 8:11:49 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/missing-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int missingNumber(std::vector<int> &nums) {
        int sumOfInput = 0;
        int targetSum = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            sumOfInput += nums[counter];
            targetSum += (counter + 1);
        }
        return targetSum - sumOfInput;
    }
};
