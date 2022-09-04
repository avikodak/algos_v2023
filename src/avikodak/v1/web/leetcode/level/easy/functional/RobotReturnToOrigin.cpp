/****************************************************************************************************************************************************
 *  File Name                   : RobotReturnToOrigin.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/RobotReturnToOrigin.cpp
 *  Created on                  : Sep 4, 2022 :: 9:36:17 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/robot-return-to-origin/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool judgeCircle(std::string moves) {
        int x = 0, y = 0;
        for (int counter = 0; counter < moves.size(); counter++) {
            if (moves[counter] == 'U') {
                y++;
            } else if (moves[counter] == 'D') {
                y--;
            } else if (moves[counter] == 'L') {
                x--;
            } else {
                x++;
            }
        }
        return x == 0 && y == 0;
    }
};

