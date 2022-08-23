/****************************************************************************************************************************************************
 *  File Name                   : ValidPalindrome.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ValidPalindrome.cpp
 *  Created on                  : Aug 22, 2022 :: 8:07:49 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-palindrome/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isPalindrome(std::string userInput) {
        int startCrawler = 0;
        int endCrawler = userInput.size() - 1;
        while (startCrawler < endCrawler) {
            while (startCrawler < endCrawler && !isalnum(userInput[startCrawler])) {
                startCrawler++;
            }
            while (startCrawler < endCrawler && !isalnum(userInput[endCrawler])) {
                endCrawler--;
            }
            if (startCrawler >= endCrawler) {
                return true;
            }
            char startCh = userInput[startCrawler];
            char endCh = userInput[endCrawler];
            if (isupper(startCh)) {
                startCh = startCh - 'A' + 'a';
            }
            if (isupper(endCh)) {
                endCh = endCh - 'A' + 'a';
            }
            if (startCh != endCh) {
                return false;
            }
            startCrawler++;
            endCrawler--;
        }
        return true;
    }
};
