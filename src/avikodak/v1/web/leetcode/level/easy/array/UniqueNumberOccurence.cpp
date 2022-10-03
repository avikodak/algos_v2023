/****************************************************************************************************************************************************
 *  File Name                   : UniqueNumberOccurence.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/UniqueNumberOccurence.cpp
 *  Created on                  : Oct 2, 2022 :: 7:41:27 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/unique-number-of-occurrences/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool uniqueOccurrences(std::vector<int> &userInput) {
        std::map<int, int> frequency;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (frequency.find(userInput[counter]) == frequency.end()) {
                frequency[userInput[counter]] = 1;
            } else {
                frequency[userInput[counter]]++;
            }
        }
        std::set<int> seenFrequency;
        for(auto it = frequency.begin(); it != frequency.end();it++) {
            if(seenFrequency.find(it->second) != seenFrequency.end()) {
                return false;
            }
            seenFrequency.insert(it->second);
        }
        return true;
    }
};
