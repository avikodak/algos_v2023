/****************************************************************************************************************************************************
 *  File Name                   : FindAnagramMappings.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FindAnagramMappings.cpp
 *  Created on                  : Sep 4, 2022 :: 9:51:47 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> anagramMappings(std::vector<int> &firstInput, std::vector<int> &secondInput) {
        std::vector<int> result;
        std::map<int, int> mappingIndex;
        for (int counter = 0; counter < secondInput.size(); counter++) {
            mappingIndex[secondInput[counter]] = counter;
        }
        for (int counter = 0; counter < secondInput.size(); counter++) {
            result.push_back(mappingIndex[firstInput[counter]]);
        }
        return result;
    }
};
