/****************************************************************************************************************************************************
 *  File Name                   : RemoveAllAdjacentDuplicates.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/RemoveAllAdjacentDuplicates.cpp
 *  Created on                  : Sep 28, 2022 :: 9:05:09 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string removeDuplicates(std::string userInput) {
        std::stack<char> auxSpace;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (auxSpace.empty() || auxSpace.top() != userInput[counter]) {
                auxSpace.push(userInput[counter]);
            } else {
                auxSpace.pop();
            }
        }
        std::string result(auxSpace.size(), 'a');
        int fillCounter = auxSpace.size() - 1;
        while (!auxSpace.empty()) {
            result[fillCounter--] = auxSpace.top();
            auxSpace.pop();
        }
        return result;
    }
};
