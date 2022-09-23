/****************************************************************************************************************************************************
 *  File Name                   : EqualSumPartition.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/bootcamp/dp/EqualSumPartition.cpp
 *  Created on                  : Sep 22, 2022 :: 8:53:15 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool isSubsetSum(std::vector<int> &userInput, int sum, int size) {
    if (sum == 0) {
        return true;
    }
    if (size == 0) {
        return sum == 0;
    }
    if (userInput[size - 1] > sum) {
        return isSubsetSum(userInput, sum, size - 1);
    } else {
        return isSubsetSum(userInput, sum, size - 1) || isSubsetSum(userInput, sum - userInput[size - 1], size - 1);
    }
}

bool equalParitionsSum(std::vector<int> userInput) {
    if (userInput.size() == 0) {
        return true;
    }
    int sum = 0;
    for (int counter = 0; counter < userInput.size(); counter++) {
        sum += userInput[counter];
    }
    if (sum & 1) {
        return false;
    }
    return isSubsetSum(userInput, sum / 2, userInput.size());
}

