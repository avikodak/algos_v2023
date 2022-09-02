/****************************************************************************************************************************************************
 *  File Name                   : ReverseOnlyLetters.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseOnlyLetters.cpp
 *  Created on                  : Sep 2, 2022 :: 11:38:57 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-only-letters
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string reverseOnlyLetters(std::string userInput) {
        int frontCrawler = 0;
        int rearCrawler = userInput.size();
        while (frontCrawler < rearCrawler) {
            while (frontCrawler < rearCrawler && !isalpha(userInput[frontCrawler])) {
                frontCrawler++;
            }
            while (rearCrawler > frontCrawler && !isalpha(userInput[rearCrawler])) {
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

