/****************************************************************************************************************************************************
 *  File Name                   : LongestSubstringWithoutRepeating.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/strings/LongestSubstringWithoutRepeating.cpp
 *  Created on                  : Sep 14, 2022 :: 8:01:07 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int lengthOfLongestSubstring(std::string userInput) {
        if(userInput.size() == 0) {
            return 0;
        }
        std::map<char, int> lastSeen;
        std::map<char, int>::iterator itToLastSeen;
        int maxLength = -1;
        int currentLength = 0;
        int lastIndex = -1;
        for (int counter = 0; counter < userInput.size(); counter++) {
            itToLastSeen = lastSeen.find(userInput[counter]);
            if (itToLastSeen == lastSeen.end() || itToLastSeen->second < lastIndex) {
                currentLength++;
            } else {
                currentLength = counter - itToLastSeen->second;
                lastIndex = itToLastSeen->second;
            }
            lastSeen[userInput[counter]] = counter;
            maxLength = std::max(maxLength, currentLength);
        }
        return maxLength;
    }
};
