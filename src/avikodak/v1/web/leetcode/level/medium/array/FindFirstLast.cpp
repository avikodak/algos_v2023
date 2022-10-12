/****************************************************************************************************************************************************
 *  File Name                   : FindFirstLast.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/FindFirstLast.cpp
 *  Created on                  : Oct 3, 2022 :: 9:29:59 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int findPosition(std::vector<int> &userInput, int key, bool firstPosition) {
        int start = 0;
        int end = userInput.size() - 1;
        int mid;
        int result = -1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (userInput[mid] == key) {
                result = mid;
                if (firstPosition) {
                    if (mid - 1 >= 0 && userInput[mid - 1] == key) {
                        end = mid - 1;
                    } else {
                        break;
                    }
                } else {
                    if (mid + 1 <= end && userInput[mid + 1] == key) {
                        start = mid + 1;
                    } else {
                        break;
                    }
                }
            } else if (userInput[mid] > key) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return result;
    }
public:
    std::vector<int> searchRange(std::vector<int> &nums, int target) {
        if (nums.size() == 0) {
            return {-1, -1};
        }
        if (nums[0] > target || nums[nums.size() - 1] < target) {
            return {-1, -1};
        }
        int firstPosition = findPosition(nums, target, true);
        if (firstPosition == -1) {
            return {-1, -1};
        }
        int lastPosition = findPosition(nums, target, false);
        return {firstPosition, lastPosition};
    }
};
