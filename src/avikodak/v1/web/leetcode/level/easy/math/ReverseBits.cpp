/****************************************************************************************************************************************************
 *  File Name                   : ReverseBits.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/ReverseBits.cpp
 *  Created on                  : Aug 29, 2022 :: 5:19:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-bits/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    uint32_t reverseBits(uint32_t value) {
        value = (value >> 16) | (value << 16);
        value = ((value & 0xFF00FF00) >> 8 | (value & 0x00FF00FF) << 8);
        value = ((value & 0xF0F0F0F0) >> 4 | (value & 0x0F0F0F0F) << 4);
        value = ((value & 0xCCCCCCCC) >> 2 | (value & 0x33333333) << 2);
        value = ((value & 0xAAAAAAAA) >> 1 | (value & 0x55555555) << 1);
        return value;
    }
};
