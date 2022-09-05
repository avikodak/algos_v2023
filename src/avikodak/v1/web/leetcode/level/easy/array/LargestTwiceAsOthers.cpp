/****************************************************************************************************************************************************
 *  File Name                   : LargestTwiceAsOthers.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/LargestTwiceAsOthers.cpp
 *  Created on                  : Sep 4, 2022 :: 9:55:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int dominantIndex(std::vector<int> &nums) {
        int firstMax = -1;
        int secondMax = -1;
        for (int counter = 0; counter < nums.size(); counter++) {
            if (firstMax == -1 || nums[firstMax] < nums[counter]) {
                secondMax = firstMax;
                firstMax = counter;
            } else if (secondMax == -1 || nums[secondMax] < nums[counter]) {
                secondMax = counter;
            }
        }
        if (nums[firstMax] >= 2 * nums[secondMax]) {
            return firstMax;
        } else {
            return -1;
        }
    }
};
