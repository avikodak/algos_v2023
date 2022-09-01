/****************************************************************************************************************************************************
 *  File Name                   : StrobogrammaticNumber.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/math/StrobogrammaticNumber.cpp
 *  Created on                  : Aug 30, 2022 :: 8:32:13 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isStrobogrammatic(std::string num) {
        std::map<char, char> mappingChars;
        mappingChars['0'] = '0';
        mappingChars['1'] = '1';
        mappingChars['6'] = '9';
        mappingChars['8'] = '8';
        mappingChars['9'] = '6';
        std::string result;
        std::map<char, char>::iterator itToMappingChars;
        for (int counter = 0; counter < num.size(); counter++) {
            itToMappingChars = mappingChars.find(num[counter]);
            if (itToMappingChars == mappingChars.end()) {
                return false;
            }
            result += itToMappingChars->second;
        }
        std::reverse(result.begin(), result.end());
        return num == result;
    }
};
