/****************************************************************************************************************************************************
 *  File Name                   : MonotonicArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MonotonicArray.cpp
 *  Created on                  : Sep 6, 2022 :: 9:00:14 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isMonotonic(std::vector<int> &nums) {
        if (nums.size() < 2) {
            return true;
        }
        bool shouldBeIncreasing = nums[nums.size() - 1] >= nums[0];
        for (int counter = 0; counter < nums.size() - 1; counter++) {
            if (shouldBeIncreasing) {
                if (nums[counter + 1] < nums[counter]) {
                    return false;
                }
            } else {
                if (nums[counter + 1] > nums[counter]) {
                    return false;
                }
            }
        }
        return true;
    }
};
