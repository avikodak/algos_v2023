/****************************************************************************************************************************************************
 *  File Name                   : RotateString.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/RotateString.cpp
 *  Created on                  : Sep 5, 2022 :: 1:27:13 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/rotate-string
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        return (s + s).find(goal) != std::string::npos;
    }
};
