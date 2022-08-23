/****************************************************************************************************************************************************
 *  File Name                   : RemoveElement.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/RemoveElement.cpp
 *  Created on                  : Aug 22, 2022 :: 12:04:15 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-element/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int removeElement(std::vector<int> &userInput, int val) {
        int crawler = 0;
        int fillIndex = -1;
        while (crawler < userInput.size()) {
            if (userInput[crawler] != val) {
                userInput[++fillIndex] = userInput[crawler];
            }
            crawler++;
        }
        return fillIndex + 1;
    }
};
