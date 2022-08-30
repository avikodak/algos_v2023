/****************************************************************************************************************************************************
 *  File Name                   : RepeatedSubString.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/RepeatedSubString.cpp
 *  Created on                  : Aug 30, 2022 :: 4:07:24 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/repeated-substring-pattern
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool repeatedSubstringPattern(std::string userInput) {
        std::string originalInput = userInput;
        userInput += userInput;
        userInput = userInput.substr(1, userInput.size() - 2);
        return userInput.find(originalInput) != std::string::npos;
    }
};
