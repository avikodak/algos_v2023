/****************************************************************************************************************************************************
 *  File Name                   : TransposeMatrix.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/TransposeMatrix.cpp
 *  Created on                  : Sep 20, 2022 :: 7:10:49 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>> &matrix) {
        std::vector<std::vector<int>> result;
        for (int columnCounter = 0; columnCounter < matrix[0].size(); columnCounter++) {
            std::vector<int> temp;
            for (int rowCounter = 0; rowCounter < matrix.size(); rowCounter++) {
                temp.push_back(matrix[rowCounter][columnCounter]);
            }
            result.push_back(temp);
        }
        return result;
    }
};
