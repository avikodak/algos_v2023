/****************************************************************************************************************************************************
 *  File Name                   : NthTribonacciNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/dp/easy/NthTribonacciNumber.cpp
 *  Created on                  : Aug 27, 2022 :: 6:36:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/n-th-tribonacci-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int tribonacci(int n) {
        if (n < 2) {
            return n;
        }
        if (n == 2) {
            return 1;
        }
        int prev1 = 0;
        int prev2 = 1;
        int prev3 = 1;
        int next;
        for (int counter = 3; counter <= n; counter++) {
            next = prev1 + prev2 + prev3;
            prev1 = prev2;
            prev2 = prev3;
            prev3 = next;
        }
        return prev3;
    }
};
