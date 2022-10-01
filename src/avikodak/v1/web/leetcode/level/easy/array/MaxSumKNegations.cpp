/****************************************************************************************************************************************************
 *  File Name                   : MaxSumKNegations.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MaxSumKNegations.cpp
 *  Created on                  : Sep 29, 2022 :: 7:33:37 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int largestSumAfterKNegations(std::vector<int> &userInput, int k) {
        std::priority_queue<int, std::vector<int>, std::greater<int> > minHeap(userInput.begin(), userInput.end());
        while (k) {
            int value = minHeap.top();
            minHeap.pop();
            minHeap.push(-1 * value);
            k--;
        }
        int sum = 0;
        while (!minHeap.empty()) {
            sum += minHeap.top();
            minHeap.pop();
        }
        return sum;
    }
};
