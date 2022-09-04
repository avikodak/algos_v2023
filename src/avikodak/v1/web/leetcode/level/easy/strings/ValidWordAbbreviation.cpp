/****************************************************************************************************************************************************
 *  File Name                   : ValidWordAbbreviation.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/ValidWordAbbreviation.cpp
 *  Created on                  : Sep 3, 2022 :: 7:52:34 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-word-abbreviation/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool validWordAbbreviation(std::string word, std::string abbr) {
        int abbrCounter;
        int wordCounter;
        for (wordCounter = 0, abbrCounter = 0; wordCounter < word.size() && abbrCounter < abbr.size();) {
            if (abbr[abbrCounter] >= '0' && abbr[abbrCounter] <= '9') {
                int increment = 0;
                while (abbrCounter <= abbr.size() && abbr[abbrCounter] >= '0' && abbr[abbrCounter] <= '9') {
                    if(increment == 0 && abbr[abbrCounter] == '0') {
                        return false;
                    }
                    increment = increment * 10 + (abbr[abbrCounter] - '0');
                    abbrCounter++;
                }
                wordCounter += increment;
            } else {
                if (word[wordCounter] != abbr[abbrCounter]) {
                    return false;
                }
                wordCounter++;
                abbrCounter++;
            }
        }
        return wordCounter == word.size() && abbrCounter == abbr.size();
    }
};
