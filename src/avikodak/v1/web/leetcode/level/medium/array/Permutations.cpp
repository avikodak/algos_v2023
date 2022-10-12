/****************************************************************************************************************************************************
 *  File Name                   : Permutations.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/Permutations.cpp
 *  Created on                  : Oct 3, 2022 :: 8:19:31 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/permutations/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void permuteUtil(std::vector<std::vector<int>> &result, std::vector<int> nums, int index) {
        if (index >= nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int counter = index; counter < nums.size(); counter++) {
            std::swap(nums[counter], nums[index]);
            permuteUtil(result, nums, index + 1);
            std::swap(nums[counter], nums[index]);
        }
    }
public:
    std::vector<std::vector<int>> permute(std::vector<int> &nums) {
        std::vector<std::vector<int>> result;
        permuteUtil(result, nums, 0);
        return result;
    }
};
