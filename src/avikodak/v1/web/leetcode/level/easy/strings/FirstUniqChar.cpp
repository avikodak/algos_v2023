/****************************************************************************************************************************************************
 *  File Name                   : FirstUniqChar.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/FirstUniqChar.cpp
 *  Created on                  : Aug 28, 2022 :: 12:44:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/first-unique-character-in-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int firstUniqChar(std::string s) {
        std::map<char, int> frequencyMap;
        std::map<char, int>::iterator itToFrequencyMap;
        for (int counter = 0; counter < s.size(); counter++) {
            itToFrequencyMap = frequencyMap.find(s[counter]);
            if (itToFrequencyMap != frequencyMap.end()) {
                itToFrequencyMap->second++;
            } else {
                frequencyMap[s[counter]] = 1;
            }
        }
        for (int counter = 0; counter < s.size(); counter++) {
            itToFrequencyMap = frequencyMap.find(s[counter]);
            if(itToFrequencyMap->second == 1) {
                return counter;
            }
        }
        return -1;
    }
};
