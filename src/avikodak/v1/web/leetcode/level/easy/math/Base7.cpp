/****************************************************************************************************************************************************
 *  File Name                   : Base7.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/Base7.cpp
 *  Created on                  : Aug 29, 2022 :: 8:52:01 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/base-7
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string convertToBase7(int num) {
        if(num == 0) {
            return "0";
        }
        bool isNeg = num < 0;
        num = abs(num);
        std::string result;
        while (num) {
            result+= (num % 7) + '0';
            num /= 7;
        }
        if (isNeg) {
            result.append("-");
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};
