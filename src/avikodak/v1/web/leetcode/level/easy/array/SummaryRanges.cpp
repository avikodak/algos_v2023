/****************************************************************************************************************************************************
 *  File Name                   : SummaryRanges.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/SummaryRanges.cpp
 *  Created on                  : Sep 3, 2022 :: 9:35:44 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/summary-ranges/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int> &userInput) {
        std::vector<std::string> result;
        int outerCrawler = 0;
        int innerCrawler;
        while (outerCrawler < userInput.size()) {
            innerCrawler = outerCrawler;
            while (innerCrawler < userInput.size() && innerCrawler + 1 < userInput.size()
                    && userInput[innerCrawler + 1] == 1 + userInput[innerCrawler]) {
                innerCrawler++;
            }
            std::string temp;
            temp = std::to_string(userInput[outerCrawler]);
            if (outerCrawler != innerCrawler) {
                temp += "->";
                temp += std::to_string(userInput[innerCrawler]);
                outerCrawler = innerCrawler + 1;
            } else {
                outerCrawler++;
            }
            result.push_back(temp);
        }
        return result;
    }
};

