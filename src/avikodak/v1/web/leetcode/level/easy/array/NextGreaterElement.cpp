/****************************************************************************************************************************************************
 *  File Name                   : NextGreaterElement.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/NextGreaterElement.cpp
 *  Created on                  : Sep 10, 2022 :: 11:13:07 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/next-greater-element-i/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int> &firstInput, std::vector<int> &secondInput) {
        std::map<int, int> valueIndex;
        std::vector<int> greater(secondInput.size(), -1);
        std::stack<int> nextValues;
        for (int counter = secondInput.size() - 1; counter >= 0; counter--) {
            valueIndex[secondInput[counter]] = counter;
            while (!nextValues.empty() && secondInput[nextValues.top()] < secondInput[counter]) {
                nextValues.pop();
            }
            if (!nextValues.empty()) {
                greater[counter] = nextValues.top();
            }
            nextValues.push(counter);
        }
        std::vector<int> result(firstInput.size(), -1);
        for (int counter = 0; counter < firstInput.size(); counter++) {
            if (greater[valueIndex[counter]] != -1) {
                result[counter] = (secondInput[greater[valueIndex[counter]]]);
            }
        }
        return result;
    }
};
