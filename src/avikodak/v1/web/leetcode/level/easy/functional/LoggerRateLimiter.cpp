/****************************************************************************************************************************************************
 *  File Name                   : LoggerRateLimiter.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/LoggerRateLimiter.cpp
 *  Created on                  : Sep 3, 2022 :: 8:36:29 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Logger {
private:
    std::map<std::string, int> messageToTimestamp;
public:
    Logger() {

    }

    bool shouldPrintMessage(int timestamp, std::string message) {
        auto it = messageToTimestamp.find(message);
        if (it == messageToTimestamp.end()) {
            messageToTimestamp[message] = timestamp;
            return true;
        } else {
            if (timestamp >= it->second + 10) {
                messageToTimestamp[message] = timestamp;
                return true;
            } else {
                return false;
            }
        }
    }

};

