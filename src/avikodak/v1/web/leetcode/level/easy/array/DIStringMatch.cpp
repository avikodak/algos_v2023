/****************************************************************************************************************************************************
 *  File Name                   : DIStringMatch.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/DIStringMatch.cpp
 *  Created on                  : Sep 21, 2022 :: 12:51:13 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/di-string-match/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> diStringMatch(std::string userInput) {
        std::vector<int> result;
        int start = 0;
        int end = userInput.size();
        for (int counter = 0; counter < userInput.size(); counter++) {
            if(userInput[counter] == 'I') {
                result.push_back(start++);
            }else {
                result.push_back(end--);
            }
        }
        if(userInput[0] == 'I') {
            result.push_back(end--);
        } else {
            result.push_back(start++);
        }
        return result;
    }
};
