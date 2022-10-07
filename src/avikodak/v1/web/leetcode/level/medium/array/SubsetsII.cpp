/****************************************************************************************************************************************************
 *  File Name                   : SubsetsII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/SubsetsII.cpp
 *  Created on                  : Oct 3, 2022 :: 6:47:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/subsets-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void subsetsUtil(std::vector<std::vector<int>> &result, std::vector<int> &nums, std::vector<int> &currentSubset,
            int index) {
        result.push_back(currentSubset);
        if (index >= nums.size()) {
            return;
        }
        for (int counter = index; counter < nums.size(); counter++) {
            if (counter > index && nums[counter] == nums[counter - 1]) {
                continue;
            }
            currentSubset.push_back(nums[counter]);
            subsetsUtil(result, nums, currentSubset, counter + 1);
            currentSubset.pop_back();
        }
    }
public:
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> result;
        std::vector<int> currentSubset;
        subsetsUtil(result, nums, currentSubset, 0);
        return result;
    }
};

