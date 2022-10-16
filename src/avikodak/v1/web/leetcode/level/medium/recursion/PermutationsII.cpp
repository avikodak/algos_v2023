/****************************************************************************************************************************************************
 *  File Name                   : PermutationsII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/recursion/PermutationsII.cpp
 *  Created on                  : Oct 14, 2022 :: 5:56:18 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/permutations-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void permuteUniqueUtil(std::vector<int> &nums, std::vector<std::vector<int>> &result, int index) {
        if (nums.size() == index) {
            result.push_back(nums);
            return;
        }
        std::set<int> seenValues;
        for (int outerCounter = index; outerCounter < nums.size(); outerCounter++) {
            if (seenValues.find(nums[outerCounter]) == seenValues.end()) {
                std::swap(nums[outerCounter], nums[index]);
                permuteUniqueUtil(nums, result, index + 1);
                std::swap(nums[outerCounter], nums[index]);
                seenValues.insert(nums[outerCounter]);
            }
        }
    }
public:
    std::vector<std::vector<int>> permuteUnique(std::vector<int> &nums) {
        std::vector<std::vector<int>> result;
        permuteUniqueUtil(nums, result, 0);
        return result;
    }
};

