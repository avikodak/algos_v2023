/****************************************************************************************************************************************************
 *  File Name                   : HeightChecker.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/HeightChecker.cpp
 *  Created on                  : Sep 28, 2022 :: 9:13:25 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int heightChecker(std::vector<int> &heights) {
        std::vector<int> expected;
        expected = heights;
        std::sort(expected.begin(), expected.end());
        int nonMatchingCount = 0;
        for (int counter = 0; counter < heights.size(); counter++) {
            if (heights[counter] != expected[counter]) {
                nonMatchingCount++;
            }
        }
        return nonMatchingCount;
    }
};
