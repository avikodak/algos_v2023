/****************************************************************************************************************************************************
 *  File Name                   : ValidPalindromeII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ValidPalindromeII.cpp
 *  Created on                  : Sep 4, 2022 :: 10:19:40 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-palindrome-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    std::vector<int> findFirstMismatch(std::string userInput, int startIndex, int endIndex) {
        while (startIndex < endIndex) {
            if (userInput[startIndex] != userInput[endIndex]) {
                return {startIndex, endIndex};
            }
            startIndex++;
            endIndex--;
        }
        return {};
    }
public:
    bool validPalindrome(std::string userInput) {
        auto firstMismatch = findFirstMismatch(userInput, 0, userInput.size() - 1);
        if (firstMismatch.size() == 0) {
            return true;
        }
        auto secondMismatch = findFirstMismatch(userInput, firstMismatch[0] + 1, firstMismatch[1]);
        if (secondMismatch.size() == 0) {
            return true;
        }
        auto thirdMismatch = findFirstMismatch(userInput, firstMismatch[0], firstMismatch[1] - 1);
        if (thirdMismatch.size() == 0) {
            return true;
        }
        return false;
    }
};
