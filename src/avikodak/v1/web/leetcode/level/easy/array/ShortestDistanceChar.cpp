/****************************************************************************************************************************************************
 *  File Name                   : ShortestDistanceChar.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/ShortestDistanceChar.cpp
 *  Created on                  : Sep 20, 2022 :: 6:45:11 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/shortest-distance-to-a-character/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> shortestToChar(std::string userInput, char key) {
        int index = -1;
        std::vector<int> keyIndexes;
        std::vector<int> result(userInput.size(), -1);
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (userInput[counter] == key) {
                index = counter;
            }
            keyIndexes.push_back(index);
        }
        index = INT_MAX;
        for (int counter = userInput.size() - 1; counter >= 0; counter--) {
            if (userInput[counter] == key) {
                index = counter;
            }
            result[counter] = std::min(counter - keyIndexes[counter], index - counter);
        }
        return result;
    }
};
