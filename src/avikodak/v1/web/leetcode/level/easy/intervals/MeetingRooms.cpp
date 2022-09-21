/****************************************************************************************************************************************************
 *  File Name                   : MeetingRooms.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/intervals/MeetingRooms.cpp
 *  Created on                  : Sep 19, 2022 :: 7:15:23 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/meeting-rooms/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

bool sortFunc(std::vector<int> first, std::vector<int> second) {
    return first[0] <= second[0];
}

class Solution {

public:
    bool canAttendMeetings(std::vector<std::vector<int>> &intervals) {
        if (intervals.size() == 0) {
            return true;
        }
        std::sort(intervals.begin(), intervals.end(), sortFunc);
        for (int counter = 0; counter < intervals.size() - 1; counter++) {
            if (intervals[counter][1] > intervals[counter + 1][0]) {
                return false;
            }
        }
        return true;
    }
};
