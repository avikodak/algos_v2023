/****************************************************************************************************************************************************
 *  File Name                   : CombinationSumII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/CombinationSumII.cpp
 *  Created on                  : Oct 3, 2022 :: 3:36:06 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/combination-sum-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void combinationSum2Util(std::vector<std::vector<int>> &result, std::vector<int> &candidates,
            std::vector<int> &currentCombination, int index, int target) {
        if (target == 0) {
            result.push_back(currentCombination);
            return;
        }
        if (index >= candidates.size()) {
            return;
        }
        if (target < 0) {
            return;
        }
        for (int counter = index; counter < candidates.size(); counter++) {
            if (counter > index && candidates[counter] == candidates[counter - 1]) {
                continue;
            }
            if (candidates[counter] > target) {
                break;
            }
            currentCombination.push_back(candidates[counter]);
            combinationSum2Util(result, candidates, currentCombination, counter + 1, target - candidates[counter]);
            currentCombination.pop_back();
        }
    }
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int> &candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int>> result;
        std::vector<int> currentCombination;
        combinationSum2Util(result, candidates, currentCombination, 0, target);
        return result;
    }
};
