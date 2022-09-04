/****************************************************************************************************************************************************
 *  File Name                   : LicenseKeyFormatting.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/LicenseKeyFormatting.cpp
 *  Created on                  : Sep 3, 2022 :: 11:17:58 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/license-key-formatting/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string licenseKeyFormatting(std::string userInput, int k) {
        std::string result;
        int fill = k;
        for (int counter = userInput.size() - 1; counter >= 0; counter--) {
            if (userInput[counter] != '-') {
                if (fill == 0) {
                    fill = k;
                    result.push_back('-');
                }

                if (isalpha(userInput[counter])) {
                    result.push_back(isupper(userInput[counter]) ? userInput[counter] : toupper(userInput[counter]));
                } else {
                    result.push_back(userInput[counter]);
                }
                fill--;

            }
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};
