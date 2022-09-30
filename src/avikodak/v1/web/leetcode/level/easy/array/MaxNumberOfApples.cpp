/****************************************************************************************************************************************************
 *  File Name                   : MaxNumberOfApples.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MaxNumberOfApples.cpp
 *  Created on                  : Sep 28, 2022 :: 9:16:59 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/how-many-apples-can-you-put-into-the-basket/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int maxNumberOfApples(std::vector<int> &weights) {
        std::sort(weights.begin(), weights.end());
        int appleCount = 0;
        int maxWeight = 5000;
        for (int counter = 0; counter < weights.size() && (maxWeight - weights[counter]) >= 0; counter++) {
            maxWeight = maxWeight - weights[counter];
            appleCount++;
        }
        return appleCount;
    }
};
