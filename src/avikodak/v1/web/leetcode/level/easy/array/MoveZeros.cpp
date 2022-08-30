/****************************************************************************************************************************************************
 *  File Name                   : MoveZeros.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MoveZeros.cpp
 *  Created on                  : Aug 30, 2022 :: 3:44:43 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/move-zeroes/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    void moveZeroes(std::vector<int> &userInput) {
        if (userInput.size() < 2) {
            return;
        }
        int fillCounter = -1;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (userInput[counter] != 0) {
                userInput[++fillCounter] = userInput[counter];
            }
        }
        while (++fillCounter < userInput.size()) {
            userInput[fillCounter] = 0;
        }
    }
};

