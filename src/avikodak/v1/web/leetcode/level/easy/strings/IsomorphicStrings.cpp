/****************************************************************************************************************************************************
 *  File Name                   : IsomorphicStrings.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/IsomorphicStrings.cpp
 *  Created on                  : Aug 27, 2022 :: 8:38:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/isomorphic-strings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isIsomorphic(std::string source, std::string target) {
        if (source.size() != target.size()) {
            return false;
        }
        std::set<char> targetCharMapped;
        std::map<char, char> mapping;
        std::map<char, char>::iterator itToMapping;
        for (int counter = 0; counter < source.size(); counter++) {
            itToMapping = mapping.find(source[counter]);
            if (itToMapping != mapping.end()) {
                if (itToMapping->second != target[counter]) {
                    return false;
                }
            } else {
                if(targetCharMapped.find(target[counter]) != targetCharMapped.end()){
                    return false;
                }
                mapping[source[counter]] = target[counter];
                targetCharMapped.insert(target[counter]);
            }
        }
        return true;
    }
};
