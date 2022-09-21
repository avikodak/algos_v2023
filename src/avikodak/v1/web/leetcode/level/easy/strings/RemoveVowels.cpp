/****************************************************************************************************************************************************
 *  File Name                   : RemoveVowels.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/RemoveVowels.cpp
 *  Created on                  : Sep 21, 2022 :: 10:47:28 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-vowels-from-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isVowel(char ch) {
        switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        }
        return false;
    }
public:
    std::string removeVowels(std::string userInput) {
        int fillCounter = -1;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (!isVowel(userInput[counter])) {
                userInput[++fillCounter] = userInput[counter];
            }
        }
        return userInput.substr(0, fillCounter + 1);
    }
};
