/****************************************************************************************************************************************************
 *  File Name                   : LengthOfLastWord.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/LengthOfLastWord.cpp
 *  Created on                  : Jul 30, 2022 :: 11:15:08 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/length-of-last-word/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int lengthOfLastWord(std::string userInput) {
		int length = userInput.size();
		if(length == 0) {
			return 0;
		}
		int index = length - 1;
		while(index >= 0 && userInput[index] == ' ') {
			index--;
		}
		if(index < 0) {
			return 0;
		}
		int result = 0;
		while(index >= 0 && userInput[index] != ' ') {
			result++;
			index--;
		}
		return result;
	}
};
