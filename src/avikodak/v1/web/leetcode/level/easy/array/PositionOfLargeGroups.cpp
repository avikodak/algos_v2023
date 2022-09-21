/****************************************************************************************************************************************************
 *  File Name                   : PositionOfLargeGroups.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/PositionOfLargeGroups.cpp
 *  Created on                  : Sep 20, 2022 :: 7:00:00 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/positions-of-large-groups/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::vector<int>> largeGroupPositions(std::string userInput) {
        std::vector<std::vector<int>> result;
        int frontCrawler = 0;
        int rearCrawler;
        while (frontCrawler < userInput.size()) {
            rearCrawler = frontCrawler;
            while (rearCrawler < userInput.size() && userInput[rearCrawler] == userInput[frontCrawler]) {
                rearCrawler++;
            }
            if (rearCrawler - frontCrawler >= 3) {
                std::vector<int> temp;
                temp.push_back(frontCrawler);
                temp.push_back(rearCrawler - 1);
                result.push_back(temp);
            }
            frontCrawler = rearCrawler;
        }
        return result;
    }
};

