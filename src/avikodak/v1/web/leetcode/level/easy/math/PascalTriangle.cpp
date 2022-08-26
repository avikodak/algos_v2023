/****************************************************************************************************************************************************
 *  File Name                   : PascalTriangle.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/PascalTriangle.cpp
 *  Created on                  : Aug 25, 2022 :: 10:30:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/pascals-triangle/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;
        std::vector<int> temp;
        temp.push_back(1);
        result.push_back(temp);
        numRows--;
        for (int outerCounter = 0; outerCounter < numRows; outerCounter++) {
            std::vector<int> temp;
            temp.push_back(1);
            for (int innerCounter = 0; innerCounter < result[outerCounter].size() - 1; innerCounter++) {
                temp.push_back(result[outerCounter][innerCounter] + result[outerCounter][innerCounter + 1]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }
};
