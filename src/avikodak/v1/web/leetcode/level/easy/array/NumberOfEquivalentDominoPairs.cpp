/****************************************************************************************************************************************************
 *  File Name                   : NumberOfEquivalentDominoPairs.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/NumberOfEquivalentDominoPairs.cpp
 *  Created on                  : Oct 1, 2022 :: 12:13:17 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/number-of-equivalent-domino-pairs/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool sortFunc(std::vector<int> &first, std::vector<int> &second) {
    if (first[0] > first[1]) {
        std::swap(first[0], first[1]);
    }
    if (second[0] > second[1]) {
        std::swap(second[0], second[1]);
    }
    return first[0] < second[0];
}

class Solution {
public:
    int numEquivDominoPairs(std::vector<std::vector<int>> &dominoes) {
        std::sort(dominoes.begin(), dominoes.end(), sortFunc);
        int outerCounter = 0;
        int innerCounter = 0;
        int result = 0;
        while (outerCounter < dominoes.size()) {
            innerCounter = 0;
            while (innerCounter < dominoes.size() && dominoes[outerCounter][0] == dominoes[innerCounter][0]
                    && dominoes[outerCounter][1] == dominoes[innerCounter][1]) {
                result++;
                outerCounter++;
            }
            innerCounter = outerCounter;
        }
        return result;
    }
};

