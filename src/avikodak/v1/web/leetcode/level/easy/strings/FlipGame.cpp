/****************************************************************************************************************************************************
 *  File Name                   : FlipGame.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/FlipGame.cpp
 *  Created on                  : Sep 3, 2022 :: 7:39:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/flip-game/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::string> generatePossibleNextMoves(std::string currentState) {
        std::vector<std::string> result;
        for (int counter = 0; counter < currentState.size(); counter++) {
            if (currentState[counter] == '+' && currentState[counter + 1] == '+') {
                std::string tmp = currentState;
                tmp[counter] = '-';
                tmp[counter + 1] = '-';
                result.push_back(tmp);
            }
        }
        return result;
    }
};
