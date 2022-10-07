/****************************************************************************************************************************************************
 *  File Name                   : CombinationSum.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/CombinationSum.cpp
 *  Created on                  : Oct 2, 2022 :: 9:36:33 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void combinationSumUtil(std::vector<std::vector<int>> &result, std::vector<int> userInput, int index,
            std::vector<int> &generatedSubseqeunce, int target) {
        if (index >= userInput.size()) {
            if (target == 0) {
                result.push_back(generatedSubseqeunce);
            }
            return;
        }
        if (target == 0) {
            result.push_back(generatedSubseqeunce);
            return;
        }
        if (target >= userInput[index]) {
            generatedSubseqeunce.push_back(userInput[index]);
            combinationSumUtil(result, userInput, index, generatedSubseqeunce, target - userInput[index]);
            generatedSubseqeunce.pop_back();
        }
        combinationSumUtil(result, userInput, index + 1, generatedSubseqeunce, target);
    }
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int> &candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> subsequence;
        subsequence.reserve(candidates.size());
        combinationSumUtil(result, candidates, 0, subsequence, target);
        return result;
    }
};

