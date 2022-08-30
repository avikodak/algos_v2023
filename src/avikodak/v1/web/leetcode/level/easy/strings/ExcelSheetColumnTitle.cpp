/****************************************************************************************************************************************************
 *  File Name                   : ExcelSheetColumnTitle.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ExcelSheetColumnTitle.cpp
 *  Created on                  : Aug 29, 2022 :: 6:20:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/excel-sheet-column-title/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string result;
        while (columnNumber >= 1) {
            result += ((columnNumber - 1) % 26) + 'A';
            columnNumber = (columnNumber - 1) / 26;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};

