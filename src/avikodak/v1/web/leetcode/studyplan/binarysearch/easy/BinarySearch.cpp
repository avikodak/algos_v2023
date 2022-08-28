/****************************************************************************************************************************************************
 *  File Name                   : BinarySearch.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/studyplan/binarysearch/easy/BinarySearch.cpp
 *  Created on                  : Aug 27, 2022 :: 10:21:33 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-search/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int searchUtil(std::vector<int> &userInput, int key, int start, int end) {
        if (start > end) {
            return -1;
        }
        int mid = (start + end) / 2;
        if (userInput[mid] == key) {
            return mid;
        } else if (userInput[mid] > key) {
            return searchUtil(userInput, key, start, mid - 1);
        } else {
            return searchUtil(userInput, key, mid + 1, end);
        }
    }
public:
    int search(std::vector<int> &nums, int target) {
        return searchUtil(nums, target, 0, nums.size() - 1);
    }
};

