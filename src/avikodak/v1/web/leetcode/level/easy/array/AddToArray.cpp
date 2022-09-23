/****************************************************************************************************************************************************
 *  File Name                   : AddToArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/AddToArray.cpp
 *  Created on                  : Sep 22, 2022 :: 6:54:08 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> addToArrayForm(std::vector<int> &userInput, int k) {
        int sum = 0;
        int carry = 0;
        int counter = userInput.size() - 1;
        for (; counter >= 0 && k; counter--) {
            sum = userInput[counter] + carry + (k % 10);
            k = k / 10;
            carry = sum / 10;
            userInput[counter] = sum % 10;
        }
        carry = carry + k;
        if(counter < 0) {
            while (carry) {
                userInput.insert(userInput.begin(), carry % 10);
                carry = carry/10;
            }
        } else {
            for(;counter >=0 && carry;counter--) {
                sum = userInput[counter] + carry;
                userInput[counter] = sum % 10;
                carry = sum / 10;
            }
            while (carry) {
                userInput.insert(userInput.begin(), carry % 10);
                carry = carry/10;
            }
        }
        return userInput;
    }
};

