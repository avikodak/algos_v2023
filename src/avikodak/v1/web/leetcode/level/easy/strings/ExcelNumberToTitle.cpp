/****************************************************************************************************************************************************
 *  File Name                   : ExcelNumberToTitle.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ExcelNumberToTitle.cpp
 *  Created on                  : Aug 28, 2022 :: 7:19:05 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/excel-sheet-column-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        long int result = 0;
        long long int multiplier = 1;
        for (int counter = columnTitle.size() - 1; counter >= 0; counter--) {
            result += (columnTitle[counter]- 'A'+1) * multiplier;
            multiplier *= 26;
        }
        return result;
    }
};
