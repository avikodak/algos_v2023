/****************************************************************************************************************************************************
 *  File Name                   : MissingRange.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MissingRange.cpp
 *  Created on                  : Oct 14, 2022 :: 10:31:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/missing-ranges/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    std::string getMissingRange(int lower, int upper) {
        if (upper == lower) {
            return std::to_string(upper);
        } else {
            return std::to_string(lower) + "->" + std::to_string(upper);
        }
    }
public:
    std::vector<std::string> findMissingRanges(std::vector<int> &userInput, int lower, int upper) {
        std::vector<std::string> result;
        if (userInput.size() == 0) {
            result.push_back(getMissingRange(lower, upper));
            return result;
        }
        if (lower < userInput[0]) {
            result.push_back(getMissingRange(lower, userInput[0] - 1));
        }
        int outerCrawler = 1;
        int innerCrawler;
        while (outerCrawler < userInput.size()) {
            innerCrawler = outerCrawler;
            while (innerCrawler < userInput.size() && userInput[innerCrawler] - userInput[innerCrawler - 1] == 1) {
                innerCrawler++;
            }
            if (innerCrawler < userInput.size()) {
                result.push_back(getMissingRange(userInput[innerCrawler - 1] + 1, userInput[innerCrawler] - 1));
            }
            outerCrawler = innerCrawler + 1;
        }
        if (userInput[userInput.size() - 1] < upper) {
            result.push_back(getMissingRange(userInput[userInput.size() - 1] + 1, upper));
        }
        return result;
    }
};
