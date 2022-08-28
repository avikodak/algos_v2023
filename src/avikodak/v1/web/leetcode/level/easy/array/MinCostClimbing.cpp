/****************************************************************************************************************************************************
 *  File Name                   : MinCostClimbing.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/dp/easy/MinCostClimbing.cpp
 *  Created on                  : Aug 27, 2022 :: 9:58:01 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/min-cost-climbing-stairs/submissions/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int minCostClimbingStairs(std::vector<int> &cost) {
        if (cost.size() == 2) {
            return std::min(cost[0], cost[1]);
        }
        std::vector<int> minCost;
        minCost.push_back(cost[0]);
        minCost.push_back(cost[1]);
        for (int counter = 2; counter < cost.size(); counter++) {
            minCost.push_back(cost[counter] + std::min(minCost[counter - 1], minCost[counter - 2]));
        }
        return std::min(minCost[cost.size() - 2], minCost[cost.size() - 1]);
    }
};
