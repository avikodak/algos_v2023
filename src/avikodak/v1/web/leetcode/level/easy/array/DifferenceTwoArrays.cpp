/****************************************************************************************************************************************************
 *  File Name                   : DifferenceTwoArrays.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/DifferenceTwoArrays.cpp
 *  Created on                  : Oct 12, 2022 :: 10:59:55 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-the-difference-of-two-arrays/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::vector<int>> findDifference(std::vector<int> &firstInput, std::vector<int> &secondInput) {
        std::set<int> firstSet(firstInput.begin(), firstInput.end());
        std::set<int> secondSet(secondInput.begin(), secondInput.end());
        std::vector<int> firstUnique(firstInput.size());
        std::vector<int> secondUnique(secondInput.size());
        auto it = std::set_difference(firstSet.begin(), firstSet.end(), secondSet.begin(), secondSet.end(),
                firstUnique.begin());
        firstUnique.resize(it - firstUnique.begin());
        auto it2 = std::set_difference(secondSet.begin(), secondSet.end(), firstSet.begin(), firstSet.end(),
                secondUnique.begin());
        secondUnique.resize(it2 - secondUnique.begin());
        return {firstUnique, secondUnique};
    }
};
