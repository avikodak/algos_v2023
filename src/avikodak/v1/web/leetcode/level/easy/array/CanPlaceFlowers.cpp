/****************************************************************************************************************************************************
 *  File Name                   : CanPlaceFlowers.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/CanPlaceFlowers.cpp
 *  Created on                  : Sep 4, 2022 :: 9:10:20 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/can-place-flowers
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool canPlaceFlowers(std::vector<int> &flowerbed, int n) {
        bool canPlace = false;
        for (int counter = 0; counter < flowerbed.size() && n; counter++) {
            if (flowerbed[counter] != 1) {
                canPlace = true;
                if(counter - 1 >= 0 && flowerbed[counter-1] == 1) {
                    canPlace = false;
                } else if(counter+1 < flowerbed.size() && flowerbed[counter+1] == 1) {
                    canPlace = false;
                }
                if(canPlace) {
                    flowerbed[counter] = 1;
                    n--;
                }
            }
        }
        return n == 0;
    }
};
