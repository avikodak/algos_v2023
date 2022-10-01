/****************************************************************************************************************************************************
 *  File Name                   : ReplaceGreatestRight.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/ReplaceGreatestRight.cpp
 *  Created on                  : Sep 28, 2022 :: 10:53:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> replaceElements(std::vector<int> &userInput) {
        int maxValue = userInput[userInput.size() - 1];
        userInput[userInput.size() - 1] = -1;
        int temp;
        for (int counter = userInput.size() - 2; counter >= 0; counter--) {
            temp = maxValue;
            maxValue = std::max(maxValue, userInput[counter]);
            userInput[counter] = temp;
        }
        return userInput;
    }
};

