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
        std::vector<int> prev;
        prev.push_back(1);
        std::vector<int> current;
        bool readFromFirst = true;
        int targetSize;
        while(rowIndex--) {
            if (readFromFirst) {
                current.clear();
                current.push_back(1);
                targetSize = prev.size();
            } else {
                prev.clear();
                prev.push_back(1);
                targetSize = current.size();
            }
            for (int innerCounter = 0; innerCounter < targetSize - 1; innerCounter++) {
                if (readFromFirst) {
                    current.push_back(prev[innerCounter] + prev[innerCounter + 1]);
                } else {
                    prev.push_back(current[innerCounter] + current[innerCounter + 1]);
                }
            }
            if (readFromFirst) {
                current.push_back(1);
            } else {
                prev.push_back(1);
            }
            readFromFirst = !readFromFirst;
        }
        return readFromFirst ? prev : current;
    }
};
