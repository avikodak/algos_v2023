/****************************************************************************************************************************************************
 *  File Name                   : DetectCapital.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/DetectCapital.cpp
 *  Created on                  : Sep 2, 2022 :: 9:43:10 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

#include <ctype.h>
class Solution {
private:
    bool isLowerCase(char ch) {
        return 'a' <= ch && ch <= 'z';
    }

public:
    bool detectCapitalUse(std::string word) {
        if (word.size() == 1) {
            return true;
        }
        bool isLower = isLowerCase(word[1]);
        if (!isLower && isLowerCase(word[0])) {
            return false;
        }
        for (int counter = 2; counter < word.size(); counter++) {
            if (isLower != isLowerCase(word[counter])) {
                return false;
            }
        }
        return true;
    }
};
