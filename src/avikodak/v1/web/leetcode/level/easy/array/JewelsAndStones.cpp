/****************************************************************************************************************************************************
 *  File Name                   : JewelsAndStones.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/JewelsAndStones.cpp
 *  Created on                  : Sep 5, 2022 :: 11:58:30 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/jewels-and-stones/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        std::set<char> jewelsSet;
        for (int counter = 0; counter < jewels.size(); counter++) {
            jewelsSet.insert(jewels[counter]);
        }
        int count = 0;
        for (int counter = 0; counter < stones.size(); counter++) {
            if (jewelsSet.find(stones[counter]) != jewelsSet.end()) {
                count++;
            }
        }
        return count;
    }
};
