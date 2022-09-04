/****************************************************************************************************************************************************
 *  File Name                   : RelativeRanks.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/RelativeRanks.cpp
 *  Created on                  : Sep 3, 2022 :: 10:55:26 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/relative-ranks/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int> &score) {
        std::priority_queue<std::pair<int, int>> maxHeap;
        std::vector<std::string> result;
        result.assign(score.size(), "");
        for (int counter = 0; counter < score.size(); counter++) {
            maxHeap.push(std::make_pair(score[counter], counter));
        }
        int counter = 1;
        while (!maxHeap.empty()) {
            auto temp = maxHeap.top();
            if (counter == 1) {
                result[temp.second] = "Gold Medal";
            } else if (counter == 2) {
                result[temp.second] = "Silver Medal";
            } else if (counter == 3) {
                result[temp.second] = "Bronze Medal";
            } else {
                result[temp.second] = std::to_string(counter);
            }
            maxHeap.pop();
            counter++;
        }
        return result;
    }
};
