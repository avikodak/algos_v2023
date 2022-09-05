/****************************************************************************************************************************************************
 *  File Name                   : CompressedStringIterator.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/functional/CompressedStringIterator.cpp
 *  Created on                  : Sep 4, 2022 :: 6:11:37 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/design-compressed-string-iterator/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class StringIterator {
private:
    std::string userInput;
    int currentIndex = -1;
    int maxCalls = 100;
public:
    StringIterator(std::string compressedString) {
        char prevCh = '\0';
        int frequency;
        for (int counter = 0; counter < compressedString.size() && maxCalls; counter++) {
            if (isalpha(compressedString[counter])) {
                if (prevCh != '\0') {
                    while (frequency && maxCalls) {
                        userInput += (prevCh);
                        frequency--;
                        maxCalls--;
                    }
                }
                prevCh = compressedString[counter];
                frequency = 0;
            } else {
                frequency = (frequency * 10) + (compressedString[counter] - '0');
            }
        }
        if (prevCh != '\0' && maxCalls) {
            while (frequency && maxCalls) {
                userInput += (prevCh);
                frequency--;
                maxCalls--;
            }
        }

    }

    char next() {
        if (currentIndex + 1 < userInput.size()) {
            return userInput[++currentIndex];
        }
        return ' ';
    }

    bool hasNext() {
        return currentIndex + 1 < userInput.size();
    }
};
/**
 * Your StringIterator object will be instantiated and called as such:
 * StringIterator* obj = new StringIterator(compressedString);
 * char param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
