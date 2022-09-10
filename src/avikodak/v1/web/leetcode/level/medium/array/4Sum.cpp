/****************************************************************************************************************************************************
 *  File Name                   : 4Sum.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/4Sum.cpp
 *  Created on                  : Sep 6, 2022 :: 8:37:10 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/4sum/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

struct pair {
public:
    int firstValue;
    int secondValue;
    int sum;

    pair(int firstValue, int secondValue) :
            firstValue(firstValue), secondValue(secondValue) {
        sum = firstValue + secondValue;
    }
}

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int> &nums, int target) {

    }
};
