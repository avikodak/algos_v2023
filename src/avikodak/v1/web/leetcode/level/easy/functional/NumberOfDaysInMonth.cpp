/****************************************************************************************************************************************************
 *  File Name                   : NumberOfDaysInMonth.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/NumberOfDaysInMonth.cpp
 *  Created on                  : Sep 26, 2022 :: 9:47:24 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int numberOfDays(int year, int month) {
        std::map<int, int> days;
        days[1] = 31;
        days[2] = 28;
        days[3] = 31;
        days[4] = 30;
        days[5] = 31;
        days[6] = 30;
        days[7] = 31;
        days[8] = 31;
        days[9] = 30;
        days[10] = 31;
        days[11] = 30;
        days[12] = 31;

        if (month != 2) {
            return days[month];
        } else {
            if (year % 100 == 0 && month == 2) {
                if (year % 400 == 0) {
                    return 29;
                } else {
                    return 28;
                }
            }
            if (year % 4 == 0 && month == 2) {
                return 29;
            }
            return 28;
        }
    }
};
