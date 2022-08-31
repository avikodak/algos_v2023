/****************************************************************************************************************************************************
 *  File Name                   : AddStrings.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/AddStrings.cpp
 *  Created on                  : Aug 30, 2022 :: 6:09:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/add-strings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string addStrings(std::string firstUserInput, std::string secondUserInput) {
        int carry = 0;
        int first = firstUserInput.size() - 1;
        int second = secondUserInput.size() - 1;
        std::string result;
        int sum = 0;
        while (first >= 0 || second >= 0) {
            sum = carry;
            if (first >= 0) {
                sum += firstUserInput[first] - '0';
                first--;
            }
            if (second >= 0) {
                sum += secondUserInput[second] - '0';
                second--;
            }
            result.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        while (carry) {
            result.push_back(carry % 10 + '0');
            carry /= 10;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};
