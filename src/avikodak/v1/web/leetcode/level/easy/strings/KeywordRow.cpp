/****************************************************************************************************************************************************
 *  File Name                   : KeywordRow.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/KeywordRow.cpp
 *  Created on                  : Sep 2, 2022 :: 9:16:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/keyboard-row/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::string> findWords(std::vector<std::string> &words) {
        std::string keyword[3] = { "qwertyuiop", "asdfghjkl", "zxcvbnm" };
        std::map<char, int> keywordRow;
        for (int outerCounter = 0; outerCounter < 3; outerCounter++) {
            for (int innerCounter = 0; innerCounter < keyword[outerCounter].size(); innerCounter++) {
                keywordRow[keyword[outerCounter][innerCounter]] = outerCounter;
            }
        }
        std::vector<std::string> result;
        for (int outerCounter = 0; outerCounter < words.size(); outerCounter++) {
            if (words[outerCounter].size() != 0) {
                int row = keywordRow[tolower(words[outerCounter][0])];
                bool allInOneRow = true;
                for (int innerCounter = 1; innerCounter < words[outerCounter].size(); innerCounter++) {
                    if (row != keywordRow[tolower(words[outerCounter][innerCounter])]) {
                        allInOneRow = false;
                        break;
                    }
                }
                if (allInOneRow) {
                    result.push_back(words[outerCounter]);
                }
            }
        }
        return result;
    }
};


