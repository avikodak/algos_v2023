/****************************************************************************************************************************************************
 *  File Name                   : MovingAverage.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/MovingAverage.cpp
 *  Created on                  : Oct 15, 2022 :: 6:01:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/moving-average-from-data-stream/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class MovingAverage {
private:
    std::queue<int> auxSpace;
    int currentSum = 0;
    int elementsSize = 0;
    int size;
public:
    MovingAverage(int size) :
            size(size) {
    }

    double next(int val) {
        if (elementsSize < size) {
            elementsSize++;
        } else {
            currentSum -= auxSpace.front();
            auxSpace.pop();
        }
        currentSum += val;
        auxSpace.push(val);
        return (double) currentSum / (double) elementsSize;
    }
};

