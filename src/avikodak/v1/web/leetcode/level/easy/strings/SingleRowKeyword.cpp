/****************************************************************************************************************************************************
 *  File Name                   : SingleRowKeyword.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/SingleRowKeyword.cpp
 *  Created on                  : Sep 28, 2022 :: 7:58:15 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/single-row-keyboard/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int calculateTime(std::string keyboard, std::string word) {
        std::map<char, int> index;
        int totalTime = 0;
        for (int counter = 0; counter < keyboard.size(); counter++) {
            index[keyboard[counter]] = counter;
        }
        int currentIndex = 0;
        for (int counter = 0; counter < word.size(); counter++) {
            totalTime += std::abs(index[word[counter]] - currentIndex);
            currentIndex = index[word[counter]];
        }
        return totalTime;
    }
};
