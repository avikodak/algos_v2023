/****************************************************************************************************************************************************
 *  File Name                   : LongestUncommonSubsequence.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/LongestUncommonSubsequence.cpp
 *  Created on                  : Sep 2, 2022 :: 8:49:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-uncommon-subsequence-i/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findLUSlength(std::string first, std::string second) {
        if (first.size() == 0) {
            return second.size();
        }
        if (second.size() == 0) {
            return first.size();
        }
        int subsequence = 0;
        int firstCrawler = 0, secondCrawler = 0;
        while (firstCrawler < first.size() && secondCrawler < second.size()) {
            if (first[firstCrawler] == second[secondCrawler]) {
                firstCrawler++;
                secondCrawler++;
            } else {
                secondCrawler++;
            }
        }
        return first.size() + second.size() - firstCrawler;
    }
};
