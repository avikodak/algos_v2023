/****************************************************************************************************************************************************
 *  File Name                   : FindTheTownJudge.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FindTheTownJudge.cpp
 *  Created on                  : Sep 24, 2022 :: 7:21:48 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int findJudge(int n, std::vector<std::vector<int>> &trust) {
        std::vector<bool> trustSomeone(n, false);
        std::vector<int> trustAll(n, 0);
        for (int counter = 0; counter < trust.size(); counter++) {
            trustSomeone[trust[counter][0] - 1] = true;
            trustAll[trust[counter][1] - 1] += trust[counter][0];
        }
        int totalSum = (n * (n + 1)) / 2;
        for (int counter = 0; counter < n; counter++) {
            if (trustSomeone[counter] == false && trustAll[counter] == totalSum - (counter+1)) {
                return counter + 1;
            }
        }
        return -1;
    }
};
