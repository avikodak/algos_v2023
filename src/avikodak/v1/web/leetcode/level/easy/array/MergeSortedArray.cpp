/****************************************************************************************************************************************************
 *  File Name                   : MergeSortedArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MergeSortedArray.cpp
 *  Created on                  : Aug 22, 2022 :: 12:16:34 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    void merge(std::vector<int> &firstInput, int m, std::vector<int> &secondInput, int n) {
        int firstCrawler = m - 1;
        int secondCrawler = n - 1;
        int fillIndex = firstInput.size();
        while (firstCrawler >= 0 || secondCrawler >= 0) {
            if(firstCrawler < 0) {
                firstInput[--fillIndex] = secondInput[secondCrawler--];
            } else if(secondCrawler < 0){
                return;
            }else if (firstInput[firstCrawler] > secondInput[secondCrawler]) {
                firstInput[--fillIndex] = firstInput[firstCrawler--];
            } else {
                firstInput[--fillIndex] = secondInput[secondCrawler--];
            }
        }
    }
};
