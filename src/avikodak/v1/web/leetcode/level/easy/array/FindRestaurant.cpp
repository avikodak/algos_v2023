/****************************************************************************************************************************************************
 *  File Name                   : FindRestaurant.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FindRestaurant.cpp
 *  Created on                  : Sep 5, 2022 :: 12:12:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/minimum-index-sum-of-two-lists/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::string> findRestaurant(std::vector<std::string> &list1, std::vector<std::string> &list2) {
        std::map<std::string, int> indexedWords;
        for (int counter = 0; counter < list1.size(); counter++) {
            indexedWords[list1[counter]] = counter;
        }
        int minIndexSum = INT_MAX;
        for (int counter = 0; counter < list2.size(); counter++) {
            auto it = indexedWords.find(list2[counter]);
            if (it != indexedWords.end()) {
                minIndexSum = std::min(minIndexSum, std::abs(counter + it->second));
            }
        }
        std::vector<std::string> result;
        for (int counter = 0; counter < list2.size(); counter++) {
            auto it = indexedWords.find(list2[counter]);
            if (it != indexedWords.end() && abs(counter + it->second) == minIndexSum) {
                result.push_back(list2[counter]);
            }
        }
        return result;
    }
};
