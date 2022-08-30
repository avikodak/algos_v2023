/****************************************************************************************************************************************************
 *  File Name                   : ShortestWordDistance.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ShortestWordDistance.cpp
 *  Created on                  : Aug 29, 2022 :: 8:02:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/shortest-word-distance/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int shortestDistance(std::vector<std::string> &wordsDict, std::string word1, std::string word2) {
        int minDistance = INT_MAX;
        int prevWord1 = -1;
        int prevWord2 = -1;
        for (int counter = 0; counter < wordsDict.size(); counter++) {
            if (wordsDict[counter] == word1) {
                if (prevWord2 != -1) {
                    minDistance = std::min(minDistance, counter - prevWord2);
                }
                prevWord1 = counter;
            } else if (wordsDict[counter] == word2) {
                if (prevWord1 != -1) {
                    minDistance = std::min(minDistance, counter - prevWord1);
                }
                prevWord2 = counter;
            }
        }
        return minDistance;
    }
};
