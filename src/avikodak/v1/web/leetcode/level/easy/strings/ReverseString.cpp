/****************************************************************************************************************************************************
 *  File Name                   : ReverseString.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseString.cpp
 *  Created on                  : Aug 29, 2022 :: 9:55:20 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    void reverseString(std::vector<char> &userInput) {
        int startCrawler = 0;
        int endCrawler = userInput.size() - 1;
        while (startCrawler < endCrawler) {
            std::swap(userInput[startCrawler], userInput[endCrawler]);
            startCrawler++;
            endCrawler--;
        }
    }
};

