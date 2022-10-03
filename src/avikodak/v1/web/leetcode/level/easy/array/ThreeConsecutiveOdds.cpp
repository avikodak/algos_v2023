/****************************************************************************************************************************************************
 *  File Name                   : ThreeConsecutiveOdds.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/ThreeConsecutiveOdds.cpp
 *  Created on                  : Oct 2, 2022 :: 8:04:27 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool threeConsecutiveOdds(std::vector<int> &userInput) {
        int oddFrequency = 0;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (userInput[counter] % 2 == 1) {
                oddFrequency++;
                if (oddFrequency >= 3) {
                    return true;
                }
            } else {
                oddFrequency = 0;
            }
        }
        return false;
    }
};
