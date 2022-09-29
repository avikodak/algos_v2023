/****************************************************************************************************************************************************
 *  File Name                   : SquaresOfSortedArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/SquaresOfSortedArray.cpp
 *  Created on                  : Sep 27, 2022 :: 7:14:11 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int> &userInput) {
        int negCrawler = 0;
        int posCrawler = 0;
        while (negCrawler < userInput.size() && userInput[negCrawler] < 0) {
            negCrawler++;
        }
        posCrawler = negCrawler;
        negCrawler -= 1;
        std::vector<int> result;
        while (negCrawler >= 0 || posCrawler < userInput.size()) {
            if (negCrawler < 0) {
                result.push_back(userInput[posCrawler] * userInput[posCrawler]);
                posCrawler++;
            } else if (posCrawler >= userInput.size()) {
                result.push_back(userInput[negCrawler] * userInput[negCrawler]);
                negCrawler--;
            } else {
                if (abs(userInput[negCrawler]) < abs(userInput[posCrawler])) {
                    result.push_back(userInput[negCrawler] * userInput[negCrawler]);
                    negCrawler--;
                } else {
                    result.push_back(userInput[posCrawler] * userInput[posCrawler]);
                    posCrawler++;
                }
            }
        }
        return result;
    }
};
