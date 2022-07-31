/****************************************************************************************************************************************************
 *  File Name                   : RomanToInt.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/RomanToInt.cpp
 *  Created on                  : Jul 30, 2022 :: 2:54:08 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/roman-to-integer/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int romanToInt(std::string userInput) {
		std::map<char, int> literalToValue;
		literalToValue['I'] = 1;
		literalToValue['V'] = 5;
		literalToValue['X'] = 10;
		literalToValue['L'] = 50;
		literalToValue['C'] = 100;
		literalToValue['D'] = 500;
		literalToValue['M'] = 1000;
		int counter = 0;
		int value = 0;
		for (; counter < userInput.size() - 1; counter++) {
			if (literalToValue[userInput[counter]]
					< literalToValue[userInput[counter + 1]]) {
				value += literalToValue[userInput[counter+1]];
				value -= literalToValue[userInput[counter]];
				counter++;
			} else {
				value += literalToValue[userInput[counter]];
			}
		}
		if(counter < userInput.size()) {
			value += literalToValue[userInput[counter]];
		}
		return value;
	}
};
