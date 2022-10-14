/****************************************************************************************************************************************************
 *  File Name                   : PathCrossing.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/grid/PathCrossing.cpp
 *  Created on                  : Oct 14, 2022 :: 1:46:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/path-crossing/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isPathCrossing(std::string path) {
        int x = 0, y = 0;
        std::set<std::pair<int, int>> visitedPoints;
        auto currentPoint = std::make_pair(x, y);
        visitedPoints.insert(currentPoint);
        for (int counter = 0; counter < path.size(); counter++) {
            switch (path[counter]) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x++;
                break;
            case 'E':
                x--;
                break;
            }
            auto currentPoint = std::make_pair(x, y);
            if (visitedPoints.find(currentPoint) != visitedPoints.end()) {
                return true;
            }
            visitedPoints.insert(currentPoint);
        }
        return false;
    }
};
