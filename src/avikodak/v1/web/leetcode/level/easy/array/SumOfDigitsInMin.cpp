/****************************************************************************************************************************************************
 *  File Name                   : SumOfDigitsInMin.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/SumOfDigitsInMin.cpp
 *  Created on                  : Sep 26, 2022 :: 9:19:30 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int sumOfDigits(std::vector<int> &userInput) {
        int minValue = INT_MAX;
        for (int counter = 0; counter < userInput.size(); counter++) {
            minValue = std::min(minValue, userInput[counter]);
        }
        int sumOfDigits = 0;
        while (minValue) {
            sumOfDigits += (minValue % 10);
            minValue /= 10;
        }
        return sumOfDigits % 2 != 1;
    }
};
