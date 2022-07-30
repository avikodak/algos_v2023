/****************************************************************************************************************************************************
 *  File Name                   : PalindromeNumber.h
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/PalindromeNumber.h
 *  Created on                  : Jul 27, 2022 :: 8:46:37 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/palindrome-number
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}
		int reverseValue = 0;
		while (x > reverseValue) {
			reverseValue = reverseValue * 10 + (x % 10);
			x /= 10;
		}
		return reverseValue == x || reverseValue / 10 == x;
	}
};

bool isPalindrome(int x) {
	if (x < 0) {
		return false;
	}
	long int originalValue = x;
	long int reverseValue = 0;
	while (x) {
		reverseValue = reverseValue * 10 + (x % 10);
		x /= 10;
	}
	return reverseValue == originalValue;
}

