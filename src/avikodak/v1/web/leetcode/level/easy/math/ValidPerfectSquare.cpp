/****************************************************************************************************************************************************
 *  File Name                   : ValidPerfectSquare.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/ValidPerfectSquare.cpp
 *  Created on                  : Aug 30, 2022 :: 9:52:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-perfect-square/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isPerfectSquareUtil(int start, int end, long long int target) {
        if (start > end) {
            return false;
        }
        int mid = (end - start) / 2 + start;
        long long int multiplyResult = (long long int)mid * mid;
        if (multiplyResult == target) {
            return mid;
        } else if (multiplyResult < target) {
            return isPerfectSquareUtil(mid + 1, end, target);
        } else {
            return isPerfectSquareUtil(start, mid - 1, target);
        }
    }
public:
    bool isPerfectSquare(int num) {
        if(num == 1) {
            return true;
        }
        return isPerfectSquareUtil(1, num / 2, num);
    }
};
