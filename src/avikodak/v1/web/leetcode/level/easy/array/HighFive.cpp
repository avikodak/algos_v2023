/****************************************************************************************************************************************************
 *  File Name                   : HighFive.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/HighFive.cpp
 *  Created on                  : Sep 25, 2022 :: 1:59:45 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool sortFunc(std::vector<int> first, std::vector<int> second) {
    if (first[0] == second[0]) {
        return first[1] > second[1];
    } else {
        return first[0] < second[0];
    }
}

class Solution {

public:
    std::vector<std::vector<int>> highFive(std::vector<std::vector<int>> &items) {
        std::sort(items.begin(), items.end(), sortFunc);
        int outerCounter = 0;
        int innerCounter;
        std::vector<std::vector<int>> result;
        while (outerCounter < items.size()) {
            int marksSize = 5;
            innerCounter = outerCounter;
            int sum = 0;
            while (innerCounter < items.size() && items[outerCounter][0] == items[innerCounter][0]) {
                if(marksSize) {
                    sum += items[innerCounter][1];
                    marksSize--;
                }
                innerCounter++;
            }
            std::vector<int> temp;
            temp.push_back(items[outerCounter][0]);
            temp.push_back(sum / (5));
            result.push_back(temp);
            outerCounter = innerCounter;
        }
        return result;
    }
};
