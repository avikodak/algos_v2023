/****************************************************************************************************************************************************
 *  File Name                   : FindDifference.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/FindDifference.cpp
 *  Created on                  : Aug 30, 2022 :: 3:53:51 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-the-difference/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    char findTheDifference(std::string source, std::string target) {
        int xorResult = 0;
        for (unsigned int counter = 0; counter < source.size(); counter++) {
            xorResult ^= source[counter];
            xorResult ^= target[counter];
        }
        xorResult ^= target[source.size()];
        return (char) xorResult;
    }
};
