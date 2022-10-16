/****************************************************************************************************************************************************
 *  File Name                   : CheckIfStraightLine.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/CheckIfStraightLine.cpp
 *  Created on                  : Oct 14, 2022 :: 3:18:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/check-if-it-is-a-straight-line/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool checkStraightLine(std::vector<std::vector<int>> &coordinates) {
        int y0 = (coordinates[1][1] - coordinates[0][1]);
        int x0 = (coordinates[1][0] - coordinates[0][0]);
        int dy, dx;
        for (int counter = 2; counter < coordinates.size(); counter++) {
            dy = coordinates[counter][1] - coordinates[counter - 1][1];
            dx = coordinates[counter][0] - coordinates[counter - 1][0];
            if (dy * x0 != dx * y0) {
                return false;
            }
        }
        return true;
    }
};
