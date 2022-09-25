/****************************************************************************************************************************************************
 *  File Name                   : ConfusingNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/ConfusingNumber.cpp
 *  Created on                  : Sep 25, 2022 :: 1:05:33 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/confusing-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool confusingNumber(int n) {
        int confusingDigit[10];
        std::fill_n(confusingDigit, 10, -1);
        int origValue = n;
        confusingDigit[0] = 0;
        confusingDigit[1] = 1;
        confusingDigit[6] = 9;
        confusingDigit[8] = 8;
        confusingDigit[9] = 6;
        int rotatedValue = 0;
        while(n) {
            if(confusingDigit[n%10] == -1) {
                return false;
            }
            rotatedValue = (rotatedValue * 10) + confusingDigit[n%10];
            n /= 10;
        }
        return origValue != rotatedValue;
    }
};

