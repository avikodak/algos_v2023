/****************************************************************************************************************************************************
 *  File Name                   : LongPressedName.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/LongPressedName.cpp
 *  Created on                  : Sep 2, 2022 :: 7:20:34 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/long-pressed-name/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isLongPressedName(std::string name, std::string typed) {
        int frontCrawler[2] = { 0, 0 };
        int rearCrawler[2];
        int sum[2] = { 0, 0 };
        while (frontCrawler[0] < name.size() && frontCrawler[1] < typed.size()) {
            if(name[frontCrawler[0]] != typed[frontCrawler[1]]) {
                return false;
            }
            rearCrawler[0] = frontCrawler[0];
            while (rearCrawler[0] < name.size() && name[frontCrawler[0]] == name[rearCrawler[0]]) {
                rearCrawler[0]++;
            }
            sum[0] = rearCrawler[0] - frontCrawler[0];
            rearCrawler[1] = frontCrawler[1];
            while (rearCrawler[1] < typed.size() && typed[frontCrawler[1]] == typed[rearCrawler[1]]) {
                rearCrawler[1]++;
            }
            sum[1] = rearCrawler[1] - frontCrawler[1];

            if (sum[0] > sum[1]) {
                return false;
            }
            frontCrawler[0] = rearCrawler[0];
            frontCrawler[1] = rearCrawler[1];
        }
        return frontCrawler[0] >= name.size() && frontCrawler[1] >= typed.size();
    }
};
