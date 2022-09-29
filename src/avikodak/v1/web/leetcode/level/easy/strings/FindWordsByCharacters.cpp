/****************************************************************************************************************************************************
 *  File Name                   : FindWordsByCharacters.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/FindWordsByCharacters.cpp
 *  Created on                  : Sep 28, 2022 :: 8:55:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int countCharacters(std::vector<std::string> &words, std::string chars) {
        int charFrequency[26] = { };
        memset(charFrequency, 0, 26);
        for (int counter = 0; counter < chars.size(); counter++) {
            charFrequency[chars[counter] - 'a']++;
        }
        int currentChar;
        int isFormed;
        int totalSum = 0;
        for (int wordsCounter = 0; wordsCounter < words.size(); wordsCounter++) {
            int wordFrequency[26] = { };
            isFormed = true;
            for (int letterCounter = 0; letterCounter < words[wordsCounter].size(); letterCounter++) {
                currentChar = words[wordsCounter][letterCounter];
                wordFrequency[currentChar - 'a']++;
                if (wordFrequency[currentChar - 'a'] > charFrequency[currentChar - 'a']) {
                    isFormed = false;
                    break;
                }
            }
            if (isFormed) {
                totalSum += words[wordsCounter].size();
            }
        }
        return totalSum;
    }
};

