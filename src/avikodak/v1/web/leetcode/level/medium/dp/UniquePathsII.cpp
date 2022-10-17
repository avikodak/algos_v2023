/****************************************************************************************************************************************************
 *  File Name                   : UniquePathsII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/dp/UniquePathsII.cpp
 *  Created on                  : Oct 16, 2022 :: 6:08:42 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/unique-paths-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int uniquePathsWithObstaclesUtil(std::vector<std::vector<int>> &obstacleGrid, int i, int j) {
        if (i == 0 && j == 0) {
            return 1;
        }
        if (i < 0 || j < 0) {
            return 0;
        }
        if (obstacleGrid[i][j] == 1) {
            return 0;
        }
        return uniquePathsWithObstaclesUtil(obstacleGrid, i - 1, j)
                + uniquePathsWithObstaclesUtil(obstacleGrid, i, j - 1);
    }
public:
    int uniquePathsWithObstacles(std::vector<std::vector<int>> &obstacleGrid) {
        int rows = obstacleGrid.size();
        int columns = obstacleGrid[0].size();
        return uniquePathsWithObstaclesUtil(obstacleGrid, rows, columns);
    }
};
