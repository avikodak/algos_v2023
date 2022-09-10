/****************************************************************************************************************************************************
 *  File Name                   : BackspaceStringCompare.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/BackspaceStringCompare.cpp
 *  Created on                  : Sep 6, 2022 :: 11:15:08 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/backspace-string-compare/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool backspaceCompare(std::string source, std::string target) {
        std::stack<char> sourceAuxSpace, targetAuxSpace;
        for (int counter = 0; counter < source.size(); counter++) {
            if (source[counter] == '#') {
                if (!sourceAuxSpace.empty()) {
                    sourceAuxSpace.pop();
                }
            } else {
                sourceAuxSpace.push(source[counter]);
            }
        }
        for (int counter = 0; counter < target.size(); counter++) {
            if (target[counter] == '#') {
                if (!targetAuxSpace.empty()) {
                    targetAuxSpace.pop();
                }
            } else {
                targetAuxSpace.push(target[counter]);
            }
        }
        while (!sourceAuxSpace.empty() && !targetAuxSpace.empty()) {
            if (sourceAuxSpace.top() != targetAuxSpace.top()) {
                return false;
            }
            sourceAuxSpace.pop();
            targetAuxSpace.pop();
        }
        return sourceAuxSpace.empty() && targetAuxSpace.empty();
    }

};

