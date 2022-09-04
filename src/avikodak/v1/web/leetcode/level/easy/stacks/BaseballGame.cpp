/****************************************************************************************************************************************************
 *  File Name                   : BaseballGame.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/stacks/BaseballGame.cpp
 *  Created on                  : Sep 4, 2022 :: 9:40:24 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/baseball-game/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int calPoints(std::vector<std::string> &ops) {
        std::stack<int> points;
        for (int counter = 0; counter < ops.size(); counter++) {
            if (ops[counter] == "+") {
                int topScore = points.top();
                points.pop();
                int addedScore = topScore + points.top();
                points.push(topScore);
                points.push(addedScore);
            } else if (ops[counter] == "D") {
                points.push(points.top() * 2);
            } else if (ops[counter] == "C") {
                points.pop();
            } else {
                points.push(stoi(ops[counter]));
            }
        }
        int sum = 0;
        while (!points.empty()) {
            sum += points.top();
            points.pop();
        }
        return sum;
    }
};
