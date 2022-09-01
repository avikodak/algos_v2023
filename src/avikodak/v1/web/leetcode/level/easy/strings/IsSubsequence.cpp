/****************************************************************************************************************************************************
 *  File Name                   : IsSubsequence.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/IsSubsequence.cpp
 *  Created on                  : Aug 30, 2022 :: 8:25:07 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/is-subsequence/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isSubsequence(std::string source, std::string target) {
        int sourceIndex = 0;
        int targetIndex = 0;
        while (sourceIndex < source.size() && targetIndex < target.size()) {
            if (source[sourceIndex] == target[targetIndex]) {
                sourceIndex++;
                targetIndex++;
            } else {
                targetIndex++;
            }
        }
        return sourceIndex >= source.size();
    }
};
