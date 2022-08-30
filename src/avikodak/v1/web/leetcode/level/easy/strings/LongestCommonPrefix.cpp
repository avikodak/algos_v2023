/****************************************************************************************************************************************************
 *  File Name                   : LongestCommonPrefix.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/LongestCommonPrefix.cpp
 *  Created on                  : Aug 29, 2022 :: 6:00:37 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-common-prefix/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string> &userInput) {
        if (userInput.size() == 0) {
            return "";
        }

        bool maxCommonFound = false;
        int charCounter = 0;
        for (; charCounter < userInput[0].size();) {
            for (int wordCounter = 1; wordCounter < userInput.size(); wordCounter++) {
                if (userInput[wordCounter].size() < charCounter
                        || userInput[wordCounter][charCounter] != userInput[0][charCounter]) {
                    maxCommonFound = true;
                    break;
                }
            }
            if (maxCommonFound) {
                break;
            }
            charCounter++;
        }
        return userInput[0].substr(0, charCounter);
    }
};
