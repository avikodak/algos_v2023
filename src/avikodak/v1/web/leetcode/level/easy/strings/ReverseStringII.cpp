/****************************************************************************************************************************************************
 *  File Name                   : ReverseStringII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseStringII.cpp
 *  Created on                  : Sep 5, 2022 :: 11:29:10 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-string-ii/
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
    std::string reverseStr(std::string userInput, int k) {
        if (k == 1) {
            return userInput;
        }
        int startCrawler = 0;
        while (startCrawler < userInput.size()) {
            int endIndex = std::min(startCrawler + k, (int) userInput.size()) - 1;
            reverse(userInput, startCrawler, endIndex);
            startCrawler = endIndex + 1;
            startCrawler += k;
        }
        return userInput;
    }
};
