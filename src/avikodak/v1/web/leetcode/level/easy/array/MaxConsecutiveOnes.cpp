/****************************************************************************************************************************************************
 *  File Name                   : MaxConsecutiveOnes.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MaxConsecutiveOnes.cpp
 *  Created on                  : Sep 2, 2022 :: 11:09:45 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/max-consecutive-ones/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int> &userInput) {
        int frontCrawler = 0, rearCrawler;
        int maxSize = 0;
        while (frontCrawler < userInput.size()) {
            rearCrawler = frontCrawler;
            while (rearCrawler < userInput.size() && userInput[rearCrawler] == 1) {
                rearCrawler++;
            }
            if (userInput[frontCrawler] == 1) {
                maxSize = std::max(maxSize, rearCrawler - frontCrawler);
            }
            frontCrawler = rearCrawler + 1;
        }
        return maxSize;
    }
};
