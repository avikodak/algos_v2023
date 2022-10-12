/****************************************************************************************************************************************************
 *  File Name                   : MergeIntervals.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/interval/MergeIntervals.cpp
 *  Created on                  : Oct 4, 2022 :: 8:30:19 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-intervals/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool sortFunc(std::vector<int> first, std::vector<int> second) {
    return first[0] < second[0];
}

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>> &intervals) {
        std::sort(intervals.begin(), intervals.end(), sortFunc);
        std::vector<std::vector<int>> result;
        int frontCrawler = 0;
        int rearCrawler;
        while (frontCrawler < intervals.size()) {
            rearCrawler = frontCrawler + 1;
            while (rearCrawler < intervals.size() && intervals[rearCrawler][0] < intervals[rearCrawler - 1][1]) {
                rearCrawler++;
            }
            result.push_back( { intervals[frontCrawler][0], intervals[rearCrawler][1] });
        }
        return result;
    }
};
