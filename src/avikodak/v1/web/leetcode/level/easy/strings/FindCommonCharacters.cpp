/****************************************************************************************************************************************************
 *  File Name                   : FindCommonCharacters.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/FindCommonCharacters.cpp
 *  Created on                  : Sep 11, 2022 :: 7:10:18 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-common-characters/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    std::vector<int> getCharactersFrequency(std::string &userInput) {
        std::vector<int> frequency(26, 0);
        for (int counter = 0; counter < userInput.size(); counter++) {
            frequency[userInput[counter] - 'a']++;
        }
        return frequency;
    }
public:
    std::vector<std::string> commonChars(std::vector<std::string> &words) {
        std::vector<int> resultFrequency = getCharactersFrequency(words[0]);
        for (int counter = 1; counter < words.size(); counter++) {
            auto temp = getCharactersFrequency(words[counter]);
            for (int letterCounter = 0; letterCounter < 26; letterCounter++) {
                resultFrequency[letterCounter] = std::min(resultFrequency[letterCounter], temp[letterCounter]);
            }
        }
        std::vector<std::string> result;
        for (int counter = 0; counter < 26; counter++) {
            while (result[counter]--) {
                std::string temp(1, 'a' + counter);
                result.push_back(temp);
            }
        }
        return result;
    }
};
