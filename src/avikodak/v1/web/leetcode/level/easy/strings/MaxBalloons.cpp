/****************************************************************************************************************************************************
 *  File Name                   : MaxBalloons.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/MaxBalloons.cpp
 *  Created on                  : Oct 2, 2022 :: 8:07:30 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-number-of-balloons/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        int frequency[26];
        memset(frequency, 0, sizeof(frequency));
        int keyFrequency[26];
        memset(keyFrequency, 0, sizeof(keyFrequency));
        std::string key = "balloon";
        for (int counter = 0; counter < key.size(); counter++) {
            keyFrequency[key[counter] - 'a']++;
        }
        for (int counter = 0; counter < text.size(); counter++) {
            frequency[text[counter] - 'a']++;
        }
        int maxValue = INT_MAX;
        for (int counter = 0; counter < 26; counter++) {
            if(keyFrequency[counter] != 0){
                maxValue = std::min(maxValue, frequency[counter] / keyFrequency[counter]);
            }
        }
        return maxValue;
    }
};

