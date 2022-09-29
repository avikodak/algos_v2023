/****************************************************************************************************************************************************
 *  File Name                   : DecompressRunLengthEncoding.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/DecompressRunLengthEncoding.cpp
 *  Created on                  : Sep 27, 2022 :: 10:30:38 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int> &nums) {
        int frequency = 0;
        int value;
        std::vector<int> result;
        for (int counter = 1; counter < nums.size(); counter += 2) {
            frequency = nums[counter - 1];
            value = nums[counter];
            while (frequency--) {
                result.push_back(value);
            }
        }
        return result;
    }
};

