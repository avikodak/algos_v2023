/****************************************************************************************************************************************************
 *  File Name                   : UglyNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/UglyNumber.cpp
 *  Created on                  : Aug 29, 2022 :: 6:12:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/ugly-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isUgly(int n) {
        if(n == 0) {
            return false;
        }
        int primeFactors[3] = { 2, 3, 5 };
        for (int counter = 0; counter < 3; counter++) {
            while (n % primeFactors[counter] == 0) {
                n /= primeFactors[counter];
            }
        }
        return n == 1;
    }
};
