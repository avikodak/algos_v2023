/****************************************************************************************************************************************************
 *  File Name                   : MaxAverageSubArrayI.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MaxAverageSubArrayI.cpp
 *  Created on                  : Sep 5, 2022 :: 8:11:45 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-average-subarray-i/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include <limits>

class Solution {
public:
    double findMaxAverage(std::vector<int> &nums, int k) {
        double sum = 0;
        double result;
        int counter = 0;
        for (; counter < k; counter++) {
            sum += nums[counter];
        }
        result = sum;
        while (counter < nums.size()) {
            sum -= nums[counter - k];
            sum += nums[counter];
            result = std::max(result, sum);
            counter++;
        }
        return (sum) / k;
    }
};

