/****************************************************************************************************************************************************
 *  File Name                   : LongestPalindromicSubstring.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/strings/LongestPalindromicSubstring.cpp
 *  Created on                  : Sep 29, 2022 :: 3:04:10 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string longestPalindrome(std::string userInput) {
        bool auxSpace[userInput.size()][userInput.size()];
        memset(auxSpace, false, sizeof(bool)*userInput.size()*userInput.size());
        for (int rowCounter = 0; rowCounter < userInput.size(); rowCounter++) {
            auxSpace[rowCounter][rowCounter] = true;
        }
        int maxSize = 1;
        int start = 0;
        for(int counter = 0;counter < userInput.size()-1;counter++) {
            if(userInput[counter] == userInput[counter+1]) {
                start = counter;
                maxSize = 2;
                auxSpace[counter][counter+1] = true;
            }
        }
        for (int length = 3; length <= userInput.size(); length++) {
            for (int rowCounter = 0; rowCounter < userInput.size() - length + 1; rowCounter++) {
                int columnCounter = rowCounter + length - 1;
                if(auxSpace[rowCounter+1][columnCounter-1] && (userInput[rowCounter] == userInput[columnCounter])){
                    auxSpace[rowCounter][columnCounter] = true;
                    if(maxSize < length) {
                        maxSize = std::max(maxSize, length);
                        start = rowCounter;
                    }
                }
            }
        }
        return userInput.substr(start, maxSize);
    }
};
