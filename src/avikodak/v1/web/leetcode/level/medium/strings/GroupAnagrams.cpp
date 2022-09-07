/****************************************************************************************************************************************************
 *  File Name                   : GroupAnagrams.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/strings/GroupAnagrams.cpp
 *  Created on                  : Sep 6, 2022 :: 8:40:32 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/group-anagrams/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &userInput) {
        std::map<std::string, std::vector<std::string>> anagramMapping;
        std::map<std::string, std::vector<std::string>>::iterator itToAnagramMapping;
        std::string currentInput;
        for (int counter = 0; counter < userInput.size(); counter++) {
            currentInput = userInput[counter];
            std::sort(currentInput.begin(), currentInput.end());
            itToAnagramMapping = anagramMapping.find(currentInput);
            if (itToAnagramMapping == anagramMapping.end()) {
                std::vector tmpResult;
                tmpResult.push_back(userInput[counter]);
                anagramMapping[currentInput] = tmpResult;
            } else {
                itToAnagramMapping->second.push_back(userInput[counter]);
            }
        }
        std::vector<std::vector<std::string>> result;
        for (itToAnagramMapping = anagramMapping.begin(); itToAnagramMapping != anagramMapping.end();
                itToAnagramMapping++) {
            result.push_back(itToAnagramMapping->second);
        }
        return result;
    }
};
