/****************************************************************************************************************************************************
 *  File Name                   : FizzBuzz.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/FizzBuzz.cpp
 *  Created on                  : Aug 30, 2022 :: 7:05:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/fizz-buzz
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> result;
        for (int counter = 1; counter <= n; counter++) {
            std::string temp;
            if (counter % 3 == 0) {
                temp += "Fizz";
            }
            if (counter % 5 == 0) {
                temp += "Buzz";
            }
            if (temp.size() == 0) {
                temp = std::to_string(counter);
            }
            result.push_back(temp);
        }
        return result;
    }
};

