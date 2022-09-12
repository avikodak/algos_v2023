/****************************************************************************************************************************************************
 *  File Name                   : TeemoAttacking.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/TeemoAttacking.cpp
 *  Created on                  : Sep 10, 2022 :: 12:26:26 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/teemo-attacking/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findPoisonedDuration(std::vector<int> &timeSeries, int duration) {
        int total = 0;
        for (int counter = 0; counter < timeSeries.size() - 1; counter++) {
            total += std::min(duration, timeSeries[counter + 1] - timeSeries[counter]);
        }
        total += duration;
        return total;
    }
};
