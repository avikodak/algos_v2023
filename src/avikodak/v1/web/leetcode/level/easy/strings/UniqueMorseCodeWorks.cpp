/****************************************************************************************************************************************************
 *  File Name                   : UniqueMorseCodeWorks.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/UniqueMorseCodeWorks.cpp
 *  Created on                  : Sep 5, 2022 :: 7:22:35 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/unique-morse-code-words/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string> &words) {
        std::string morseRep[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
                ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--",
                "--.." };
        std::set<std::string> uniqueWords;
        for (int wordCounter = 0; wordCounter < words.size(); wordCounter++) {
            std::string result;
            for (int letterCounter = 0; letterCounter < words[wordCounter].size(); letterCounter++) {
                result += morseRep[words[wordCounter][letterCounter] - 'a'];
            }
            uniqueWords.insert(result);
        }
        return uniqueWords.size();
    }
};
