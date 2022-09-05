/****************************************************************************************************************************************************
 *  File Name                   : SelfDividing.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/SelfDividing.cpp
 *  Created on                  : Sep 4, 2022 :: 6:05:20 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isSelfDividing(int value) {
        int temp = value;
        while (temp) {
            if(temp % 10 == 0) {
                return false;
            }
            if (value % (temp % 10) != 0) {
                return false;
            }
            temp /= 10;
        }
        return true;
    }
public:
    std::vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> result;
        for (int counter = left; counter <= right; counter++) {
            if (isSelfDividing(counter)) {
                result.push_back(counter);
            }
        }
        return result;
    }
};
