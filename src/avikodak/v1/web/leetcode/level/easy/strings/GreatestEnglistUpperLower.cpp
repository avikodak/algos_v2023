/****************************************************************************************************************************************************
 *  File Name                   : GreatestEnglistUpperLower.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/GreatestEnglistUpperLower.cpp
 *  Created on                  : Oct 12, 2022 :: 11:22:14 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string greatestLetter(std::string userInput) {
        std::string result;
        bool upperFlags[26];
        bool lowerFlags[26];
        memset(upperFlags, false, 26);
        memset(lowerFlags, false, 26);
        char resultCh = '\0';
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (islower(userInput[counter])) {
                if (upperFlags[userInput[counter] - 'a']) {
                    if (resultCh == '\0' || resultCh < userInput[counter] - 'a' + 'A') {
                        resultCh = userInput[counter] - 'a' + 'A';
                    }
                }
                lowerFlags[userInput[counter] - 'a'] = true;
            } else {
                if (lowerFlags[userInput[counter] - 'A']) {
                    if (resultCh == '\0' || resultCh < userInput[counter]) {
                        resultCh = userInput[counter];
                    }
                }
                upperFlags[userInput[counter] - 'A'] = true;
            }
        }
        if (resultCh != '\0') {
            result += resultCh;
        }
        return result;
    }
};
