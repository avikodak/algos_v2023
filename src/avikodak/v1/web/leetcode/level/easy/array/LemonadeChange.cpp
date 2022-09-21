/****************************************************************************************************************************************************
 *  File Name                   : LemonadeChange.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/LemonadeChange.cpp
 *  Created on                  : Sep 20, 2022 :: 8:42:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/lemonade-change/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool lemonadeChange(std::vector<int> &bills) {
        int fiveBills = 0;
        int tenBills = 0;
        for (int counter = 0; counter < bills.size(); counter++) {
            switch (bills[counter]) {
            case 5:
                fiveBills++;
                break;
            case 10:
                if(fiveBills > 0) {
                    fiveBills--;
                } else {
                    return false;
                }
                tenBills++;
                break;
            case 20:
                if(tenBills > 0 && fiveBills > 0) {
                    tenBills--;
                    fiveBills--;
                } else if(fiveBills >= 3) {
                    fiveBills -= 3;
                } else {
                    return false;
                }
                break;
            }
        }
        return true;
    }
};

