/****************************************************************************************************************************************************
 *  File Name                   : NumberOfLines.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/NumberOfLines.cpp
 *  Created on                  : Sep 5, 2022 :: 7:32:11 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/number-of-lines-to-write-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> numberOfLines(std::vector<int> &widths, std::string userInput) {
        int lineWidth = 0;
        int totalLines = 1;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (lineWidth + widths[userInput[counter] - 'a'] > 100) {
                totalLines++;
                lineWidth = 0;
            }
            lineWidth += widths[userInput[counter] - 'a'];
        }
        return {totalLines, lineWidth};
    }
};
