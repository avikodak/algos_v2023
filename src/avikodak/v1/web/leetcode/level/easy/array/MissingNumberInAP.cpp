/****************************************************************************************************************************************************
 *  File Name                   : MissingNumberInAP.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MissingNumberInAP.cpp
 *  Created on                  : Sep 29, 2022 :: 9:05:27 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/missing-number-in-arithmetic-progression
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int missingNumber(std::vector<int> &userInput) {
        int d;
        if(userInput[userInput.size() - 1] > userInput[0]) {
            d = (userInput[userInput.size() - 1] - userInput[0]) / userInput.size();
        } else {
            d = (userInput[0] - userInput[userInput.size() - 1]) / userInput.size();
            d *= -1;
        }
        for (int counter = 1; counter < userInput.size(); counter++) {
            if (userInput[counter - 1] + d != userInput[counter]) {
                return userInput[counter - 1] + d;
            }
        }
        return userInput[userInput.size() - 1] + d;
    }
};
