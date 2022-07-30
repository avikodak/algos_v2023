/****************************************************************************************************************************************************
 *  File Name                   : TwoSum.h
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/TwoSum.h
 *  Created on                  : Jul 27, 2022 :: 8:06:24 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/two-sum/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

#ifndef AVIKODAK_V1_WEB_LEETCODE_LEVEL_EASY_TWOSUM_H_
#define AVIKODAK_V1_WEB_LEETCODE_LEVEL_EASY_TWOSUM_H_

class Solution {
public:
	std::vector<int> twoSum(std::vector<int> &nums, int target) {
		std::map<int, int> valueToIndexMap;
		std::vector<int> result;
		std::map<int, int>::iterator itToValueToIndexMap;
		for (int counter = 0; counter < nums.size(); counter++) {
			itToValueToIndexMap = valueToIndexMap.find(target - nums[counter]);
			if (itToValueToIndexMap != valueToIndexMap.end()) {
				result.push_back(counter);
				result.push_back(itToValueToIndexMap->second);
				break;
			} else {
				valueToIndexMap[nums[counter]] = counter;
			}
		}
		return result;
	}
};

#endif /* AVIKODAK_V1_WEB_LEETCODE_LEVEL_EASY_TWOSUM_H_ */
