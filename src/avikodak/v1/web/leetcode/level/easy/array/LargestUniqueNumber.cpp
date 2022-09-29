/****************************************************************************************************************************************************
 *  File Name                   : LargestUniqueNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/LargestUniqueNumber.cpp
 *  Created on                  : Sep 27, 2022 :: 9:10:12 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int largestUniqueNumber(std::vector<int> &userInput) {
        std::map<int, int> frequency;
        std::map<int, int>::iterator itToFrequency;
        for (int counter = 0; counter < userInput.size(); counter++) {
            itToFrequency = frequency.find(userInput[counter]);
            if (itToFrequency == frequency.end()) {
                frequency[userInput[counter]] = 1;
            } else {
                frequency[userInput[counter]]++;
            }
        }
        int maxValue = -1;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (frequency[userInput[counter]] == 1 && userInput[counter] > maxValue) {
                maxValue = userInput[counter];
            }
        }
        return maxValue;
    }
};
