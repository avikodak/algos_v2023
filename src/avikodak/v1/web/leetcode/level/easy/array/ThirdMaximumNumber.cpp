/****************************************************************************************************************************************************
 *  File Name                   : ThirdMaximumNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/ThirdMaximumNumber.cpp
 *  Created on                  : Aug 30, 2022 :: 5:36:18 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/third-maximum-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int thirdMax(std::vector<int> &userInput) {
        std::priority_queue<int, std::vector<int>, std::greater<int> > minHeap;
        std::set<int> seenValues;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (seenValues.find(userInput[counter]) == seenValues.end()) {
                if (minHeap.size() < 3) {
                    minHeap.push(userInput[counter]);
                } else if (minHeap.top() < userInput[counter]) {
                    minHeap.pop();
                    minHeap.push(userInput[counter]);
                }
                seenValues.insert(userInput[counter]);
            }
        }
        if (minHeap.size() == 3) {
            return minHeap.top();
        } else {
            int maxValue;
            while (!minHeap.empty()) {
                maxValue = minHeap.top();
                minHeap.pop();
            }
            return maxValue;
        }
    }
};
