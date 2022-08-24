/****************************************************************************************************************************************************
 *  File Name                   : BestTimeToBuyAndSell.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/BestTimeToBuyAndSell.cpp
 *  Created on                  : Aug 23, 2022 :: 7:59:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int maxProfit(std::vector<int> &prices) {
        if (prices.size() < 2) {
            return 0;
        }
        int maxPrice = prices[prices.size() - 1];
        int index = prices.size() - 2;
        int maxDiff = 0;
        while (index >= 0) {
            if (prices[index] > maxPrice) {
                maxPrice = prices[index];
            } else {
                maxDiff = std::max(maxDiff, maxPrice - prices[index]);
            }
            index--;
        }
        return maxDiff;
    }
};
