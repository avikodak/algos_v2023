/****************************************************************************************************************************************************
 *  File Name                   : MaxNumberOfWordsType.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/MaxNumberOfWordsType.cpp
 *  Created on                  : Oct 1, 2022 :: 1:13:59 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-number-of-words-you-can-type/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int canBeTypedWords(std::string text, std::string brokenLetters) {
        int outerCrawler = 0;
        int count = 0;
        std::map<char, bool> brokenLetterMap;
        for (int counter = 0; counter < brokenLetters.size(); counter++) {
            brokenLetterMap[brokenLetters[counter]] = true;
        }
        while (outerCrawler < text.size()) {
            int innerCrawler = outerCrawler;
            bool canBeTyped = true;
            while (innerCrawler < text.size() && text[innerCrawler] != ' ') {
                if (brokenLetterMap.find(text[innerCrawler]) != brokenLetterMap.end()) {
                    canBeTyped = false;
                }
                innerCrawler++;
            }
            if (canBeTyped) {
                count++;
            }
            outerCrawler = innerCrawler + 1;
        }
        return count;
    }
};
