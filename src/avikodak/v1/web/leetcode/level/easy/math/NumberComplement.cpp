/****************************************************************************************************************************************************
 *  File Name                   : NumberComplement.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/NumberComplement.cpp
 *  Created on                  : Sep 3, 2022 :: 11:38:28 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findComplement(int num) {
        long long int result = 0;
        long long int multiplier = 1;
        while (num) {
            result = result + (!(num % 2) * multiplier);
            multiplier *= 2;
            num /= 2;
        }
        return result;
    }
};
