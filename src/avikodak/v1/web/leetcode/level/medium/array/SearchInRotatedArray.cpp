/****************************************************************************************************************************************************
 *  File Name                   : SearchInRotatedArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/SearchInRotatedArray.cpp
 *  Created on                  : Oct 3, 2022 :: 9:52:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/search-in-rotated-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int binarySearch(std::vector<int> &userInput, int target, int start, int end) {

        if (start > end) {
            return -1;
        }
        int mid = start + (end - start) / 2;
        if (userInput[mid] == target) {
            return mid;
        } else if (userInput[start] <= userInput[mid]) {
            if (target >= userInput[start] && target < userInput[mid]) {
                return binarySearch(userInput, target, start, mid - 1);
            } else {
                return binarySearch(userInput, target, mid + 1, end);
            }
        } else {
            if (target > userInput[mid] && target <= userInput[end]) {
                return binarySearch(userInput, target, mid + 1, end);
            } else {
                return binarySearch(userInput, target, start, mid - 1);
            }
        }
    }
public:
    int search(std::vector<int> &userInput, int target) {
        return binarySearch(userInput, target, 0, userInput.size() - 1);
    }
};
