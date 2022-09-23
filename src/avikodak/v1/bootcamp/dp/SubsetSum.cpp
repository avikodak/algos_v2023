/****************************************************************************************************************************************************
 *  File Name                   : SubsetSum.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/bootcamp/dp/subsetsum/SubsetSum.cpp
 *  Created on                  : Sep 22, 2022 :: 8:26:27 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool isSubsetSumPresent(std::vector<int> userInput, int sum, int size) {
    if (sum == 0) {
        return true;
    }
    if (size == 0) {
        return sum == 0;
    }
    if (userInput[size - 1] > sum) {
        return isSubsetSumPresent(userInput, sum, size - 1);
    } else {
        return isSubsetSumPresent(userInput, sum, size - 1)
                || isSubsetSumPresent(userInput, sum - userInput[size - 1], size - 1);
    }
}
