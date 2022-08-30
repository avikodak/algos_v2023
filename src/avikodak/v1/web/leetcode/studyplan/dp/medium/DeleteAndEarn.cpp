/****************************************************************************************************************************************************
 *  File Name                   : DeleteAndEarn.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/dp/medium/DeleteAndEarn.cpp
 *  Created on                  : Aug 28, 2022 :: 9:54:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/delete-and-earn/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

// Not Completed
class Solution {
public:
    int deleteAndEarn(std::vector<int> &userInput) {
        int maxSumIncl = userInput[0];
        int maxSumExcl = 0;
        int counter = 0;
        while (counter < userInput.size() && userInput[0] == userInput[counter]) {
            maxSumIncl += userInput[counter];
        }
        int innerCounter;
        int temp;
        while (counter < userInput.size()) {
            temp = maxSumExcl;
            while (innerCounter < userInput.size() && userInput[innerCounter] == userInput[counter]) {
                temp += userInput[innerCounter];
            }
            maxSumExcl = std::max(maxSumExcl, maxSumIncl);
            maxSumIncl = temp;
            counter = innerCounter;
        }
        return std::max(maxSumExcl, maxSumIncl);
    }
};
