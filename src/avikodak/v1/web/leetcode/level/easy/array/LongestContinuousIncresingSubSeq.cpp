/****************************************************************************************************************************************************
 *  File Name                   : LongestContinuousIncresingSubSeq.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/LongestContinuousIncresingSubSeq.cpp
 *  Created on                  : Sep 5, 2022 :: 8:23:20 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-continuous-increasing-subsequence/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findLengthOfLCIS(std::vector<int> &nums) {
        int maxLength = 1;
        int currentLength = 1;
        for (int counter = 1; counter < nums.size(); counter++) {
            if (nums[counter] > nums[counter - 1]) {
                currentLength++;
            } else {
                maxLength = std::max(maxLength, currentLength);
                currentLength = 1;
            }
        }
        maxLength = std::max(maxLength, currentLength);
        return maxLength;
    }
};
