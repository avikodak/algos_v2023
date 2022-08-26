/****************************************************************************************************************************************************
 *  File Name                   : ValidAnagram.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ValidAnagram.cpp
 *  Created on                  : Aug 25, 2022 :: 10:27:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-anagram/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isAnagram(std::string first, std::string second) {
        std::sort(first.begin(), first.end());
        std::sort(second.begin(), second.end());
        return first == second;
    }
};
