/****************************************************************************************************************************************************
 *  File Name                   : FlippingAnImage.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/FlippingAnImage.cpp
 *  Created on                  : Sep 20, 2022 :: 8:14:27 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/flipping-an-image/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void switchValue(int &value) {
        if (value == 1) {
            value = 0;
        } else {
            value = 1;
        }

    }
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>> &image) {
        for (int rowCounter = 0; rowCounter < image.size(); rowCounter++) {
            int startCrawler = 0;
            int endCrawler = image[0].size() - 1;
            while (startCrawler <= endCrawler) {
                std::swap(image[rowCounter][startCrawler], image[rowCounter][endCrawler]);
                switchValue(image[rowCounter][startCrawler]);
                switchValue(image[rowCounter][endCrawler]);
                startCrawler++;
                endCrawler--;
            }
        }
        return image;
    }
};
