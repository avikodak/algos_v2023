/****************************************************************************************************************************************************
 *  File Name                   : PalindromePermutation.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/PalindromePermutation.cpp
 *  Created on                  : Sep 3, 2022 :: 12:03:22 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/palindrome-permutation/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool canPermutePalindrome(std::string userInput) {
        std::map<char, int> frequencyMap;
        std::map<char, int>::iterator itToFrequencyMap;
        for (int counter = 0; counter < userInput.size(); counter++) {
            itToFrequencyMap = frequencyMap.find(userInput[counter]);
            if (itToFrequencyMap == frequencyMap.end()) {
                frequencyMap[userInput[counter]] = 1;
            } else {
                frequencyMap[userInput[counter]]++;
            }
        }
        int oddFrequency = 0;
        for (itToFrequencyMap = frequencyMap.begin(); itToFrequencyMap != frequencyMap.end(); itToFrequencyMap++) {
            if (itToFrequencyMap->second & 1) {
                oddFrequency++;
            }
        }
        return oddFrequency <= 1;
    }
};
