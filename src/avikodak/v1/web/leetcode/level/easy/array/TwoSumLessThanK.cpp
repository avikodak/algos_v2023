/****************************************************************************************************************************************************
 *  File Name                   : TwoSumLessThanK.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/TwoSumLessThanK.cpp
 *  Created on                  : Sep 27, 2022 :: 7:39:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/two-sum-less-than-k/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int twoSumLessThanK(std::vector<int> &userInput, int k) {
        std::sort(userInput.begin(), userInput.end());
        int start = 0, end = userInput.size() - 1;
        int maxSum = -1;
        while (start < end) {
            if (userInput[start] + userInput[end] < k) {
                maxSum = std::max(userInput[start] + userInput[end], maxSum);
                start++;
            } else {
                end--;
            }
        }
        return maxSum;
    }
};
