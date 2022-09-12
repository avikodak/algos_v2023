/****************************************************************************************************************************************************
 *  File Name                   : NumberOfRecentCalls.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/NumberOfRecentCalls.cpp
 *  Created on                  : Sep 11, 2022 :: 12:15:58 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/number-of-recent-calls/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class RecentCounter {
private:
    std::vector<int> auxSpace;
    int startCrawler = 0;
    int endCrawler = -1;

public:
    RecentCounter() {

    }

    int ping(int t) {
        auxSpace.push_back(t);
        endCrawler++;
        while (startCrawler < endCrawler && auxSpace[startCrawler] < (auxSpace[auxSpace.size() - 1] - 3000)) {
            startCrawler++;
        }
        return auxSpace.size() - startCrawler;
    }
};

