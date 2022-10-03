/****************************************************************************************************************************************************
 *  File Name                   : SmallestEvenMultiple.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/SmallestEvenMultiple.cpp
 *  Created on                  : Oct 1, 2022 :: 11:51:36 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/smallest-even-multiple/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : 2 * n;
    }
};
