/****************************************************************************************************************************************************
 *  File Name                   : 01KnapsackProblem.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/bootcamp/dp/knapsack/01KnapsackProblem.cpp
 *  Created on                  : Sep 22, 2022 :: 8:13:05 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int zeroOneKnapsackProblem(std::vector<int> weights, std::vector<int> prices, int maxWeight, int size) {
    if (index == 0 || maxWeight == 0) {
        return 0;
    }
    if (weights[size - 1] > maxWeight) {
        return zeroOneKnapsackProblem(weights, prices, maxWeight, size - 1);
    } else {
        return std::max(zeroOneKnapsackProblem(weights, prices, maxWeight, size - 1),
                prices[size - 1] + zeroOneKnapsackProblem(weights, prices, maxWeight - weights[size - 1], size - 1));
    }
}
