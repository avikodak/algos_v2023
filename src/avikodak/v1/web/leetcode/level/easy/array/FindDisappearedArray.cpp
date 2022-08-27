/****************************************************************************************************************************************************
 *  File Name                   : FindDisappearedArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FindDisappearedArray.cpp
 *  Created on                  : Aug 27, 2022 :: 1:21:20 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int> &nums) {
        std::vector<int> result;
        for (int counter = 0; counter < nums.size(); counter++) {
            if(nums[abs(nums[counter])-1] > 0) {
                nums[abs(nums[counter])-1] *= -1;
            }
        }
        for (int counter = 0; counter < nums.size(); counter++) {
            if (nums[counter] > 0) {
                result.push_back(counter + 1);
            }
        }
        return result;
    }
};
