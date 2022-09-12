/****************************************************************************************************************************************************
 *  File Name                   : SortArrayParityII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/SortArrayParityII.cpp
 *  Created on                  : Sep 10, 2022 :: 9:02:36 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sort-array-by-parity-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> sortArrayByParityII(std::vector<int> &userInput) {
        int evenCrawler;
        int oddCrawler = 1;
        for (evenCrawler = 0; evenCrawler < userInput.size(); evenCrawler+=2) {
            if (userInput[evenCrawler] % 2 == 1) {
                while (oddCrawler < userInput.size() && userInput[oddCrawler] % 2 == 1) {
                    oddCrawler+=2;
                }
                std::swap(userInput[evenCrawler], userInput[oddCrawler]);
            }
        }
        return userInput;
    }
};
