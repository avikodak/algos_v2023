/****************************************************************************************************************************************************
 *  File Name                   : ToLowerCase.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ToLowerCase.cpp
 *  Created on                  : Sep 4, 2022 :: 10:14:36 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/to-lower-case/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string toLowerCase(std::string userInput) {
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (islower(userInput[counter])) {
                userInput[counter] = userInput[counter] - 'a' + 'A';
            }
        }
        return userInput;
    }
};

