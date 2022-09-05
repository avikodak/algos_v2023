/****************************************************************************************************************************************************
 *  File Name                   : ConstructRectangle.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/ConstructRectangle.cpp
 *  Created on                  : Sep 4, 2022 :: 6:47:08 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/construct-the-rectangle/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        std::vector<int> result;
        std::pair<int, int> minPair;
        int minDiff = area;
        for (int counter = sqrt(area); counter >= 1; counter--) {
            if (area % counter == 0) {
                if(minDiff > abs(counter - (area/counter))) {
                    minPair = std::make_pair(counter, area/counter);
                    minDiff = abs(counter - (area/counter));
                }
            }
        }
        result.push_back(std::max(minPair.first, minPair.second));
        result.push_back(std::min(minPair.first, minPair.second));
        return result;
    }
};
