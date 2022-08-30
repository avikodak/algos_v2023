/****************************************************************************************************************************************************
 *  File Name                   : NumberOfSegments.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/NumberOfSegments.cpp
 *  Created on                  : Aug 30, 2022 :: 4:03:31 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int countSegments(std::string userInput) {
        int segments = 0;
        int outerCounter = 0;
        int innerCounter;
        while (outerCounter < userInput.size()) {
            innerCounter = outerCounter;
            while (innerCounter < userInput.size() && userInput[innerCounter] == ' ') {
                innerCounter++;
            }
            if (innerCounter < userInput.size()) {
                while (innerCounter < userInput.size() && userInput[innerCounter] != ' ') {
                    innerCounter++;
                }
                segments++;
            }
            outerCounter = innerCounter + 1;
        }
        return segments;
    }
};
