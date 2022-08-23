/****************************************************************************************************************************************************
 *  File Name                   : SingleNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/SingleNumber.cpp
 *  Created on                  : Aug 22, 2022 :: 8:45:17 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/single-number
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int singleNumber(std::vector<int> &userInput) {
        int result = 0;
        for (int counter = 0; counter < userInput.size(); counter++) {
            result ^= userInput[counter];
        }
        return result;
    }
};
