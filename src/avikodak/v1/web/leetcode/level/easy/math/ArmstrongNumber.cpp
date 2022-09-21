/****************************************************************************************************************************************************
 *  File Name                   : ArmstrongNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/ArmstrongNumber.cpp
 *  Created on                  : Sep 21, 2022 :: 10:33:02 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/armstrong-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isArmstrong(int n) {
        int value = n;
        int sum = 0;
        int remainder;
        int numberOfDigits = log(n) / log(10) + 1;
        while (value) {
            remainder = value % 10;
            sum += pow(remainder, numberOfDigits);
            value /= 10;
        }
        return sum == n;
    }
};
