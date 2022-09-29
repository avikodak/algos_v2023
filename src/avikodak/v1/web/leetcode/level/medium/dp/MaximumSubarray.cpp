/****************************************************************************************************************************************************
 *  File Name                   : MaximumSubarray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/dp/MaximumSubarray.cpp
 *  Created on                  : Sep 27, 2022 :: 10:55:50 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-subarray/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int maxSubArray(std::vector<int> &userInput) {
        int currentSum = userInput[0];
        int maxSum = currentSum;
        for (int counter = 1; counter < userInput.size(); counter++) {
            currentSum = std::max(userInput[counter] + currentSum, userInput[counter]);
            maxSum = std::max(maxSum, currentSum);
        }
        return maxSum;
    }
};
