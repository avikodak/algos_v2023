/****************************************************************************************************************************************************
 *  File Name                   : RansomNote.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/RansomNote.cpp
 *  Created on                  : Aug 28, 2022 :: 11:52:55 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/ransom-note/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::map<char, int> frequencyMap;
        for (int counter = 0; counter < magazine.size(); counter++) {
            auto itToFrequencyMap = frequencyMap.find(magazine[counter]);
            if (itToFrequencyMap == frequencyMap.end()) {
                frequencyMap[magazine[counter]] = 1;
            } else {
                frequencyMap[magazine[counter]]++;
            }
        }
        for (int counter = 0; counter < ransomNote.size(); counter++) {
            auto itToFrequencyMap = frequencyMap.find(ransomNote[counter]);
            if (itToFrequencyMap == frequencyMap.end() || itToFrequencyMap->second <= 0) {
                return false;
            }
            frequencyMap[ransomNote[counter]]--;
        }
        return true;
    }
};
