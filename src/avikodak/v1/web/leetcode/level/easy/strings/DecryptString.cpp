/****************************************************************************************************************************************************
 *  File Name                   : DecryptString.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/DecryptString.cpp
 *  Created on                  : Sep 22, 2022 :: 6:16:59 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string freqAlphabets(std::string userInput) {
        int value;
        std::string result;
        for (int counter = 0; counter < userInput.size();) {
            if (counter + 2 < userInput.size() && userInput[counter] == '#') {
                value = userInput[counter] - '0';
                value += userInput[counter + 1] - '0';
                counter += 3;
            } else {
                value = userInput[counter] - '0';
                counter++;
            }
            result += value + 'a';
        }
        return result;
    }
};
