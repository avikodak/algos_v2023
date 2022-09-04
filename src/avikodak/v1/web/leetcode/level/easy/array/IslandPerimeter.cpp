/****************************************************************************************************************************************************
 *  File Name                   : IslandPerimeter.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/IslandPerimeter.cpp
 *  Created on                  : Sep 3, 2022 :: 9:04:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/island-perimeter/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int islandPerimeter(std::vector<std::vector<int>> &grid) {
        int perimeter = 0;
        for (int rowCounter = 0; rowCounter < grid.size(); rowCounter++) {
            for (int columnCounter = 0; columnCounter < grid[0].size(); columnCounter++) {
                if (grid[rowCounter][columnCounter]) {
                    if(rowCounter - 1 < 0 || grid[rowCounter - 1][columnCounter] != 1) {
                        perimeter++;
                    }
                    if (columnCounter - 1 < 0 || grid[rowCounter][columnCounter - 1] != 1) {
                        perimeter++;
                    }
                    if (rowCounter + 1 == grid.size() || grid[rowCounter + 1][columnCounter] != 1) {
                        perimeter++;
                    }
                    if (columnCounter + 1 == grid[0].size() || grid[rowCounter][columnCounter + 1] != 1) {
                        perimeter++;
                    }

                }
            }
        }
        return perimeter;
    }
};

