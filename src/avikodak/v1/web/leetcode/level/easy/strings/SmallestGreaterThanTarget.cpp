/****************************************************************************************************************************************************
 *  File Name                   : SmallestGreaterThanTarget.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/SmallestGreaterThanTarget.cpp
 *  Created on                  : Sep 4, 2022 :: 10:29:37 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    char nextGreatestLetter(std::vector<char> &letters, char target) {
        int start = 0;
        int end = letters.size() - 1;
        int mid;
        int result = 0;
        while (start <= end) {
            mid = (end - start) / 2 + start;
            if (letters[mid] == target || letters[mid] < target) {
                start = mid + 1;
            } else if (letters[mid] > target) {
                result = mid;
                end = mid - 1;
            }
        }
        return letters[result];
    }
};
