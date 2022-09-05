/****************************************************************************************************************************************************
 *  File Name                   : SetMismatch.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/SetMismatch.cpp
 *  Created on                  : Sep 4, 2022 :: 8:12:09 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/set-mismatch/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int> &nums) {
        int xorResult = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            xorResult ^= nums[counter];
            xorResult ^= (counter + 1);
        }
        int rightmostSetBit = xorResult & ~(xorResult - 1);
        int xorLeft = 0, xorRight = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            if (nums[counter] & rightmostSetBit) {
                xorRight ^= nums[counter];
            } else {
                xorLeft ^= nums[counter];
            }
            if ((counter + 1) & rightmostSetBit) {
                xorRight ^= (counter + 1);
            } else {
                xorLeft ^= (counter + 1);
            }
        }
        for(int counter = 0;counter < nums.size();counter++) {
            if(nums[counter] == xorLeft) {
                return {xorLeft, xorRight};
            } else if(nums[counter] == xorRight){
                return {xorRight, xorLeft};
            }
        }
        return {};
    }
};
