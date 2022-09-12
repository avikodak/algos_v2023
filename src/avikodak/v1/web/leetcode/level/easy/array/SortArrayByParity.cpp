/****************************************************************************************************************************************************
 *  File Name                   : SortArrayByParity.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/SortArrayByParity.cpp
 *  Created on                  : Sep 10, 2022 :: 8:40:13 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sort-array-by-parity/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int> &userInput) {
        int frontCrawler = 0, rearCrawler = userInput.size() - 1;
        while (frontCrawler < rearCrawler) {
            while (frontCrawler < userInput.size() && userInput[frontCrawler] % 2 == 0) {
                frontCrawler++;
            }
            while (rearCrawler >= 0 && userInput[rearCrawler] % 2 == 0) {
                rearCrawler--;
            }
            if (frontCrawler < rearCrawler) {
                std::swap(userInput[frontCrawler], userInput[rearCrawler]);
            }
            frontCrawler++;
            rearCrawler--;
        }
        return userInput;
    }
};

