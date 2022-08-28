/****************************************************************************************************************************************************
 *  File Name                   : ClimbingStairs.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/dp/easy/ClimbingStairs.cpp
 *  Created on                  : Aug 27, 2022 :: 9:05:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/climbing-stairs/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

#ifndef AVIKODAK_V1_WEB_LEETCODE_STUDYPLAN_DP_EASY_CLIMBINGSTAIRS_CPP_
#define AVIKODAK_V1_WEB_LEETCODE_STUDYPLAN_DP_EASY_CLIMBINGSTAIRS_CPP_

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        int prev = 1;
        int current = 2;
        int next;
        for (int counter = 3; counter <= n; counter++) {
            next = current + prev;
            prev = current;
            current = next;
        }
        return current;
    }
};

#endif /* AVIKODAK_V1_WEB_LEETCODE_STUDYPLAN_DP_EASY_CLIMBINGSTAIRS_CPP_ */
