/****************************************************************************************************************************************************
 *  File Name                   : ReverseVowels.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseVowels.cpp
 *  Created on                  : Aug 30, 2022 :: 3:47:23 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-vowels-of-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isVowel(char ch) {
        switch (tolower(ch)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
        }
    }
public:
    std::string reverseVowels(std::string userInput) {
        int frontCrawler = 0;
        int rearCrawler = userInput.size() - 1;
        while (frontCrawler < rearCrawler) {
            while (frontCrawler < userInput.size() && !isVowel(userInput[frontCrawler])) {
                frontCrawler++;
            }
            while (rearCrawler >= 0 && !isVowel(userInput[rearCrawler])) {
                rearCrawler--;
            }
            if (frontCrawler < rearCrawler) {
                std::swap(userInput[frontCrawler], userInput[rearCrawler]);
            }
            frontCrawler++;
            rearCrawler--;
        }
        return userInput;
    }
};
