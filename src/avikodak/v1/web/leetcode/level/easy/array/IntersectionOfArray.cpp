/****************************************************************************************************************************************************
 *  File Name                   : IntersectionOfArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/IntersectionOfArray.cpp
 *  Created on                  : Aug 30, 2022 :: 9:31:28 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/intersection-of-two-arrays/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> intersection(std::vector<int> &firstUserInput, std::vector<int> &secondUserInput) {
        std::sort(firstUserInput.begin(), firstUserInput.end());
        std::sort(secondUserInput.begin(), secondUserInput.end());
        int firstCrawler = 0, secondCrawler = 0;
        std::vector<int> result;
        int tailCrawler;
        while (firstCrawler < firstUserInput.size() && secondCrawler < secondUserInput.size()) {
            tailCrawler = firstCrawler;
            while (tailCrawler < firstUserInput.size() && firstUserInput[firstCrawler] == firstUserInput[tailCrawler]) {
                tailCrawler++;
            }
            firstCrawler = tailCrawler - 1;
            tailCrawler = secondCrawler;
            while (tailCrawler < secondUserInput.size()
                    && secondUserInput[secondCrawler] == secondUserInput[tailCrawler]) {
                tailCrawler++;
            }
            secondCrawler = tailCrawler - 1;
            if (firstCrawler < firstUserInput.size() && secondCrawler < secondUserInput.size()) {
                if (firstUserInput[firstCrawler] == secondUserInput[secondCrawler]) {
                    result.push_back(firstUserInput[firstCrawler]);
                    firstCrawler++;
                    secondCrawler++;
                } else if (firstUserInput[firstCrawler] < secondUserInput[secondCrawler]) {
                    firstCrawler++;
                } else {
                    secondCrawler++;
                }
            }
        }
        return result;
    }
};

