/****************************************************************************************************************************************************
 *  File Name                   : ValidParentheses.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/ValidParentheses.cpp
 *  Created on                  : Jul 27, 2022 :: 9:32:36 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-parentheses
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isValid(std::string userInput) {
		std::stack<char> auxSpace;
		for (unsigned int counter = 0; counter < userInput.size(); counter++) {
			switch (userInput[counter]) {
			case '{':
			case '(':
			case '[':
				auxSpace.push(userInput[counter]);
				break;
			case '}':
				if (auxSpace.empty() || auxSpace.top() != '{') {
					return false;
				}
				auxSpace.pop();
				break;
			case ')':
				if (auxSpace.empty() || auxSpace.top() != '(') {
					return false;
				}
				auxSpace.pop();
				break;
			case ']':
				if (auxSpace.empty() || auxSpace.top() != '[') {
					return false;
				}
				auxSpace.pop();
				break;
			}
		}
		return auxSpace.empty();
	}
};

