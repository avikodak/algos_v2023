/****************************************************************************************************************************************************
 *  File Name                   : FixedPoint.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FixedPoint.cpp
 *  Created on                  : Sep 25, 2022 :: 1:39:37 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/fixed-point/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int fixedPointUtil(std::vector<int> &userInput, int start, int end) {
        if (start > end) {
            return -1;
        }

        int result = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (userInput[mid] == mid) {
                result = mid;
                end = mid - 1;
            } else if (userInput[mid] < mid) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return result;
    }
public:
    int fixedPoint(std::vector<int> &userInput) {
        return fixedPointUtil(userInput, 0, userInput.size() - 1);
    }
};
