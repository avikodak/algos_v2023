/****************************************************************************************************************************************************
 *  File Name                   : ContainsDuplicateII.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ContainsDuplicateII.cpp
 *  Created on                  : Aug 28, 2022 :: 12:11:47 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/contains-duplicate-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int> &nums, int k) {
        std::map<int, int> seenIndexes;
        std::map<int, int>::iterator itToSeenIndexes;
        for (int counter = 0; counter < nums.size(); counter++) {
            itToSeenIndexes = seenIndexes.find(nums[counter]);
            if (itToSeenIndexes == seenIndexes.end()) {
                seenIndexes[nums[counter]] = counter;
            } else if (abs(counter - itToSeenIndexes->second) <= k) {
                return true;
            } else {
                seenIndexes[nums[counter]] = counter;
            }
        }
        return false;
    }
};

