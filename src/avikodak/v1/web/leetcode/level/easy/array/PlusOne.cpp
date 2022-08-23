/****************************************************************************************************************************************************
 *  File Name                   : PlusOne.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/PlusOne.cpp
 *  Created on                  : Aug 22, 2022 :: 12:34:39 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> plusOne(std::vector<int> &digits) {
        int carry = 1;
        int index = digits.size() - 1;
        int sum = 0;
        while (carry && index >= 0) {
            sum = digits[index] + carry;
            digits[index] = sum % 10;
            carry = sum / 10;
            index--;
        }
        if (carry > 0) {
            digits.insert(digits.begin(), carry % 10);
            carry /= 10;
        }
    }
};
