/****************************************************************************************************************************************************
 *  File Name                   : MaximumProductThreeNumbers.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/MaximumProductThreeNumbers.cpp
 *  Created on                  : Sep 5, 2022 :: 12:23:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-product-of-three-numbers/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int maximumProduct(std::vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        return std::max(nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3],
                nums[0] * nums[1] * nums[nums.size() - 1]);
    }
};
