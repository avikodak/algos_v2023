/****************************************************************************************************************************************************
 *  File Name                   : RangeSumQueryImmutable.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/RangeSumQueryImmutable.cpp
 *  Created on                  : Oct 6, 2022 :: 9:03:46 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/range-sum-query-immutable/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class NumArray {
private:
    std::vector<int> cummulativeSums;
public:
    NumArray(std::vector<int> &nums) {
        cummulativeSums.push_back(nums[0]);
        for (int counter = 1; counter < nums.size(); counter++) {
            cummulativeSums.push_back(nums[counter] + cummulativeSums[counter - 1]);
        }
    }

    int sumRange(int left, int right) {
        int rangeSum = cummulativeSums[right];
        if (left != 0) {
            rangeSum -= cummulativeSums[left - 1];
        }
        return rangeSum;
    }
};

