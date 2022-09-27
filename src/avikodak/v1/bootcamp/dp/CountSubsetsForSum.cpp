/****************************************************************************************************************************************************
 *  File Name                   : CountSubsetsForSum.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/bootcamp/dp/CountSubsetsForSum.cpp
 *  Created on                  : Sep 25, 2022 :: 7:06:43 PM
 *  Author                      : avikodak
 *  URL                         : https://www.youtube.com/watch?v=F7wqWbqYn9g
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int countSubsetsForSum(std::vector<int> userInput, int sum, int size) {
    if (sum == 0) {
        return 1;
    }
    if (size == 0) {
        return 0;
    }
    if (userInput[size - 1] > sum) {
        return countSubsetsForSum(userInput, sum, size - 1);
    } else {
        return countSubsetsForSum(userInput, sum, size - 1)
                + countSubsetsForSum(userInput, sum - userInput[size - 1], size);
    }
}

