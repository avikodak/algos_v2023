/****************************************************************************************************************************************************
 *  File Name                   : LongestHarmoniousSequence.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/LongestHarmoniousSequence.cpp
 *  Created on                  : Sep 2, 2022 :: 7:43:02 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-harmonious-subsequence/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findLHS(std::vector<int> &userInput) {
        std::map<int, int> frequencyMap;
        std::map<int, int>::iterator itToFrequencyMap, itToDifference;
        for (int counter = 0; counter < userInput.size(); counter++) {
            itToFrequencyMap = frequencyMap.find(userInput[counter]);
            if (itToFrequencyMap == frequencyMap.end()) {
                frequencyMap[userInput[counter]] = 1;
            } else {
                frequencyMap[userInput[counter]]++;
            }
        }
        int maxLength = 0;
        for (itToFrequencyMap = frequencyMap.begin(); itToFrequencyMap != frequencyMap.end(); itToFrequencyMap++) {
            itToDifference = frequencyMap.find(itToFrequencyMap->first - 1);
            if (itToDifference != frequencyMap.end()) {
                maxLength = std::max(maxLength, itToDifference->second + itToFrequencyMap->second);
            }
        }
        return maxLength;
    }
};
