/****************************************************************************************************************************************************
 *  File Name                   : HappyNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/HappyNumber.cpp
 *  Created on                  : Aug 27, 2022 :: 11:15:26 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/happy-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isHappy(int n) {
        std::set<int> seenValues;
        int sum;
        while (n != 1) {
            if (seenValues.find(n) != seenValues.end()) {
                return false;
            }
            seenValues.insert(n);
            sum = 0;
            while (n) {
                sum += ((n % 10) * (n % 10));
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};

