/****************************************************************************************************************************************************
 *  File Name                   : UniquePaths.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/dp/UniquePaths.cpp
 *  Created on                  : Oct 14, 2022 :: 3:42:15 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/unique-paths/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    std::map<std::pair<int, int>, int> cache;
    int uniquePathsUtil(int x, int y) {
        if (x == 0 && y == 0) {
            return 1;
        }
        if (x < 0 || y < 0) {
            return 0;
        }
        auto currentPair = std::make_pair(x, y);
        if (cache.find(currentPair) != cache.end()) {
            return cache[currentPair];
        }
        int result = uniquePathsUtil(x - 1, y) + uniquePathsUtil(x, y - 1);
        cache[currentPair] = result;
        return result;
    }

    int uniquePathsUtilMemoization(int x, int y) {
        int cachedResult[x][y];
        int sum;
        for (int rowCounter = 0; rowCounter < x; rowCounter++) {
            for (int columnCounter = 0; columnCounter < y; columnCounter++) {
                if (rowCounter == 0 && columnCounter == 0) {
                    cachedResult[rowCounter][columnCounter] = 1;
                } else {
                    sum = 0;
                    if (rowCounter - 1 >= 0) {
                        sum += cachedResult[rowCounter - 1][columnCounter];
                    }
                    if (columnCounter - 1 >= 0) {
                        sum += cachedResult[rowCounter][columnCounter - 1];
                    }
                    cachedResult[rowCounter][columnCounter] = sum;
                }

            }
        }
        return cachedResult[x - 1][y - 1];
    }

public:
    int uniquePaths(int m, int n) {
        return uniquePathsUtilMemoization(m, n);
    }
};

