/****************************************************************************************************************************************************
 *  File Name                   : GuessNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/binarysearch/easy/GuessNumber.cpp
 *  Created on                  : Aug 27, 2022 :: 10:27:52 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/guess-number-higher-or-lower
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

int guess(int num);

class Solution {
private:
    int guessNumberUtil(int start, int end) {
        if (start > end) {
            return -1;
        }
        int mid = (end - start) / 2 + start;
        int result = guess(mid);
        if (result == 0) {
            return mid;
        } else if (result == -1) {
            return guessNumberUtil(start, mid - 1);
        } else {
            return guessNumberUtil(mid + 1, end);
        }
    }
public:
    int guessNumber(int n) {
        return guessNumberUtil(0, n);
    }
};
