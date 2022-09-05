/****************************************************************************************************************************************************
 *  File Name                   : StudentAttendenceRecord.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/StudentAttendenceRecord.cpp
 *  Created on                  : Sep 5, 2022 :: 11:01:57 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/student-attendance-record-i/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool checkRecord(std::string userInput) {
        int absentCount = 0;
        int maxConsecutiveLate = 0;
        int outerCounter = 0;
        int innerCounter;
        int lateCount;
        while (outerCounter < userInput.size()) {
            if (userInput[outerCounter] == 'P') {
                outerCounter++;
                continue;
            } else if (userInput[outerCounter] == 'A') {
                outerCounter++;
                absentCount++;
                if(absentCount == 2) {
                    return false;
                }
            } else {
                innerCounter = outerCounter;
                lateCount = 0;
                while (innerCounter < userInput.size() && userInput[innerCounter] == 'L' && lateCount <= 3) {
                    lateCount++;
                    innerCounter++;
                }
                if (lateCount >= 3) {
                    return false;
                }
                outerCounter = innerCounter;
            }
        }
        return true;
    }
};
