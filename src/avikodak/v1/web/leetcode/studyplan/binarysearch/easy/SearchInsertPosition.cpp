/****************************************************************************************************************************************************
 *  File Name                   : SearchInsertPosition.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/binarysearch/easy/SearchInsertPosition.cpp
 *  Created on                  : Aug 28, 2022 :: 7:26:39 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/search-insert-position/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int searchInsertUtil(std::vector<int> &nums, int target, int startIndex, int endIndex) {
        if (target < nums[startIndex]) {
            return startIndex;
        }
        if (target > nums[endIndex]) {
            return endIndex + 1;
        }
        int midIndex = (endIndex - startIndex) / 2 + startIndex;
        if (nums[midIndex] == target) {
            return midIndex;
        } else if (nums[midIndex] > target) {
            if (midIndex - 1 >= startIndex && nums[midIndex - 1] < target) {
                return midIndex;
            } else {
                return searchInsertUtil(nums, target, startIndex, midIndex - 1);
            }
        } else {
            if (midIndex + 1 <= endIndex && nums[midIndex + 1] > target) {
                return midIndex + 1;
            } else {
                return searchInsertUtil(nums, target, midIndex + 1, endIndex);
            }
        }
    }
public:
    int searchInsert(std::vector<int> &nums, int target) {
        return searchInsertUtil(nums, target, 0, nums.size()-1);
    }
};
