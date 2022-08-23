/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicatesSortedArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/RemoveDuplicatesSortedArray.cpp
 *  Created on                  : Aug 22, 2022 :: 11:58:55 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int removeDuplicates(std::vector<int> &userInput) {
        int crawler = 0;
        int fillIndex = -1;
        while (crawler < userInput.size()) {
            while (crawler + 1 < userInput.size() && userInput[crawler] == userInput[crawler + 1]) {
                crawler++;
            }
            userInput[++fillIndex] = userInput[crawler];
            crawler++;
        }
        return fillIndex + 1;
    }
};

