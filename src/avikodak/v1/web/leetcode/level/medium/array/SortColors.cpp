/****************************************************************************************************************************************************
 *  File Name                   : SortColors.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/SortColors.cpp
 *  Created on                  : Sep 29, 2022 :: 6:30:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sort-colors/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    void sortColors(std::vector<int> &nums) {
        int frontCrawler = 0;
        int rearCrawler = nums.size() - 1;
        int counter = 0;
        while (counter <= rearCrawler) {
            if (nums[counter] == 0) {
                std::swap(nums[counter++], nums[frontCrawler++]);
            } else if (nums[counter] == 2) {
                std::swap(nums[counter], nums[rearCrawler--]);
            } else {
                counter++;
            }
        }
    }
};
