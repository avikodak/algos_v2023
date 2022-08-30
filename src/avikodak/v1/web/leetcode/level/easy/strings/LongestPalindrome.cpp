/****************************************************************************************************************************************************
 *  File Name                   : LongestPalindrome.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/LongestPalindrome.cpp
 *  Created on                  : Aug 29, 2022 :: 9:46:58 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-palindrome/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int longestPalindrome(std::string userInput) {
        std::map<char, int> frequencyMap;
        std::map<char, int>::iterator itToFrequency;
        for (int counter = 0; counter < userInput.size(); counter++) {
            itToFrequency = frequencyMap.find(userInput[counter]);
            if (itToFrequency == frequencyMap.end()) {
                frequencyMap[userInput[counter]] = 1;
            } else {
                frequencyMap[userInput[counter]]++;
            }
        }
        int length = 0;
        bool hasOddFrequency = false;
        for (itToFrequency = frequencyMap.begin(); itToFrequency != frequencyMap.end(); itToFrequency++) {
            length += itToFrequency->second / 2;
            if (itToFrequency->second % 2 == 1) {
                hasOddFrequency = true;
            }
        }
        return hasOddFrequency ? (length * 2) + 1 : length * 2;
    }
};

