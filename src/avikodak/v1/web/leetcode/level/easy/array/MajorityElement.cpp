/****************************************************************************************************************************************************
 *  File Name                   : MajorityElement.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/MajorityElement.cpp
 *  Created on                  : Aug 27, 2022 :: 12:57:09 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/majority-element
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int majorityElement(std::vector<int> &nums) {
        int probableMajorityElement = nums[0];
        int frequency = 1;
        for (int counter = 1; counter < nums.size(); counter++) {
            if (probableMajorityElement == nums[counter]) {
                frequency++;
            } else if (frequency > 1) {
                frequency--;
            } else {
                probableMajorityElement = nums[counter];
                frequency = 1;
            }
        }
        return probableMajorityElement;
    }
};
