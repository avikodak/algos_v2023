/****************************************************************************************************************************************************
 *  File Name                   : FibonacciNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/dp/easy/FibonacciNumber.cpp
 *  Created on                  : Aug 27, 2022 :: 6:40:19 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/fibonacci-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        long long int prevValue = 0;
        long long int currentValue = 1;
        long long int nextValue = 0;
        for (int counter = 2; counter <= n; counter++) {
            nextValue = prevValue + currentValue;
            prevValue = currentValue;
            currentValue = nextValue;
        }
        return currentValue;
    }
};

