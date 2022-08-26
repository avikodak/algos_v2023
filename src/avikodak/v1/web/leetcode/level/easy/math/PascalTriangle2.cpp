/****************************************************************************************************************************************************
 *  File Name                   : PascalTriangle2.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/PascalTriangle2.cpp
 *  Created on                  : Aug 25, 2022 :: 10:45:04 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/pascals-triangle-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        std::vector<int> first;
        first.push_back(1);
        std::vector<int> second;
        bool readFromFirst = true;
        int targetSize;
        while(rowIndex--) {
            if (readFromFirst) {
                second.clear();
                second.push_back(1);
                targetSize = first.size();
            } else {
                first.clear();
                first.push_back(1);
                targetSize = second.size();
            }
            for (int innerCounter = 0; innerCounter < targetSize - 1; innerCounter++) {
                if (readFromFirst) {
                    second.push_back(first[innerCounter] + first[innerCounter + 1]);
                } else {
                    first.push_back(second[innerCounter] + second[innerCounter + 1]);
                }
            }
            if (readFromFirst) {
                second.push_back(1);
            } else {
                first.push_back(1);
            }
            readFromFirst = !readFromFirst;
        }
        return readFromFirst ? first : second;
    }
};
