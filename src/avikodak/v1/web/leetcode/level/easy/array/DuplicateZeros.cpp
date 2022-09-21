/****************************************************************************************************************************************************
 *  File Name                   : DuplicateZeros.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/DuplicateZeros.cpp
 *  Created on                  : Sep 21, 2022 :: 10:55:33 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/duplicate-zeros/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    void duplicateZeros(std::vector<int> &userInput) {
        std::vector<int> result;
        for (int counter = 0; counter < userInput.size() && result.size() < userInput.size(); counter++) {
            result.push_back(userInput[counter]);
            if (userInput[counter] == 0 && result.size() < userInput.size()) {
                result.push_back(userInput[counter]);
            }
        }
        userInput = result;
    }
};

