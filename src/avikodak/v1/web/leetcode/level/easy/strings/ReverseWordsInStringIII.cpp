/****************************************************************************************************************************************************
 *  File Name                   : ReverseWordsInStringIII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseWordsInStringIII.cpp
 *  Created on                  : Sep 5, 2022 :: 11:37:44 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-words-in-a-string-iii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void reverse(std::string &userInput, int startIndex, int endIndex) {
        while (startIndex < endIndex) {
            std::swap(userInput[startIndex++], userInput[endIndex--]);
        }
    }
public:
    std::string reverseWords(std::string userInput) {
        int startCrawler = 0;
        int endCrawler;
        while (startCrawler < userInput.size()) {
            while (startCrawler < userInput.size() && userInput[startCrawler] == ' ') {
                startCrawler++;
            }
            endCrawler = startCrawler;
            while (endCrawler < userInput.size() && userInput[endCrawler] != ' ') {
                endCrawler++;
            }
            reverse(userInput, startCrawler, endCrawler - 1);
            startCrawler = endCrawler;
        }
        return userInput;
    }
};
