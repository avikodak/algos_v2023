/****************************************************************************************************************************************************
 *  File Name                   : AssignCookies.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/AssignCookies.cpp
 *  Created on                  : Aug 31, 2022 :: 9:59:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/assign-cookies/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findContentChildren(std::vector<int> &greedFactor, std::vector<int> &cookieSizes) {
        std::sort(greedFactor.begin(), greedFactor.end());
        std::sort(cookieSizes.begin(), cookieSizes.end());
        int greedIndex, cookieIndex = 0;
        for (greedIndex = 0; greedIndex < greedFactor.size(); greedIndex++) {
            while (cookieIndex < cookieSizes.size() && greedFactor[greedIndex] > cookieSizes[cookieIndex]) {
                cookieIndex++;
            }
            if (cookieIndex >= cookieSizes.size()) {
                break;
            }
            cookieIndex++;
        }
        return greedIndex;
    }
};
