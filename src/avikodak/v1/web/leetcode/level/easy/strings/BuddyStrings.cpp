/****************************************************************************************************************************************************
 *  File Name                   : BuddyStrings.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/BuddyStrings.cpp
 *  Created on                  : Sep 10, 2022 :: 10:57:53 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/buddy-strings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool buddyStrings(std::string source, std::string goal) {
        if (source.size() != goal.size()) {
            return false;
        }
        if(source == goal) {
            int frequency[26] = {0};
            for(int counter = 0;counter < source.size();counter++) {
                frequency[source[counter] - 'a']++;
                if(frequency[source[counter]-'a'] > 1) {
                    return true;
                }
            }
            return false;
        }
        int frontCrawler = 0;
        int rearCrawler = source.size() - 1;
        while (frontCrawler < rearCrawler) {
            while (frontCrawler < rearCrawler && source[frontCrawler] == goal[frontCrawler]) {
                frontCrawler++;
            }
            while (frontCrawler < rearCrawler && source[rearCrawler] == goal[rearCrawler]) {
                rearCrawler--;
            }
            if (frontCrawler < rearCrawler) {
                std::swap(source[frontCrawler], source[rearCrawler]);
            }
            break;
        }
        return source == goal;
    }
};

