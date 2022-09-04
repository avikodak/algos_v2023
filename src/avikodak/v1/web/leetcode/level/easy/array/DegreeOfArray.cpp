/****************************************************************************************************************************************************
 *  File Name                   : DegreeOfArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/DegreeOfArray.cpp
 *  Created on                  : Sep 3, 2022 :: 11:07:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/degree-of-an-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findShortestSubArray(std::vector<int> &userInput) {
        int maxFrequency = 0;
        int maxElement;
        std::map<int, int> frequencyMap;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto it = frequencyMap.find(userInput[counter]);
            if (it == frequencyMap.end()) {
                frequencyMap[userInput[counter]] = 1;
            } else {
                frequencyMap[userInput[counter]]++;
            }
            if (it->second > maxFrequency) {
                maxElement = userInput[counter];
                maxFrequency = it->second;
            }
        }
        if (maxFrequency == 1) {
            return userInput.size();
        }
        int start;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (userInput[counter] == maxElement) {
                start = counter;
                break;
            }
        }
        int end;
        for (int counter = userInput.size() - 1; counter >= 0; counter--) {
            if (userInput[counter] == maxElement) {
                end = counter;
                break;
            }
        }
        return end - start + 1;
    }
};
