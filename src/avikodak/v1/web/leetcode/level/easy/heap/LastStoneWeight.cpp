/****************************************************************************************************************************************************
 *  File Name                   : LastStoneWeight.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/heap/LastStoneWeight.cpp
 *  Created on                  : Sep 28, 2022 :: 8:47:59 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/last-stone-weight/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int lastStoneWeight(std::vector<int> &stones) {
        std::priority_queue<int> maxHeap;
        for (int counter = 0; counter < stones.size(); counter++) {
            maxHeap.push(stones[counter]);
        }
        while (maxHeap.size() > 1) {
            int firstStone = maxHeap.top();
            maxHeap.pop();
            int secondStone = maxHeap.top();
            maxHeap.pop();
            if (firstStone != secondStone) {
                maxHeap.push(firstStone - secondStone);
            }
        }
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};

