/****************************************************************************************************************************************************
 *  File Name                   : IntersectionThreeSortedArray.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/IntersectionThreeSortedArray.cpp
 *  Created on                  : Sep 29, 2022 :: 7:57:00 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> arraysIntersection(std::vector<int> &arr1, std::vector<int> &arr2, std::vector<int> &arr3) {
        int first = 0, second = 0, third = 0;
        std::vector<int> result;
        while (first < arr1.size() && second < arr2.size() && third < arr3.size()) {
            if (arr1[first] == arr2[second] && arr1[first] == arr3[third]) {
                result.push_back(arr1[first]);
                first++;
                second++;
                third++;
            } else if (arr1[first] < arr2[second]) {
                if (arr1[first] < arr3[third]) {
                    first++;
                } else {
                    third++;
                }
            } else {
                if (arr2[second] < arr3[third]) {
                    second++;
                } else {
                    third++;
                }
            }
        }
        return result;
    }
};

