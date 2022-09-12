/****************************************************************************************************************************************************
 *  File Name                   : UncommonWordsInStrings.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/UncommonWordsInStrings.cpp
 *  Created on                  : Sep 11, 2022 :: 12:26:26 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/uncommon-words-from-two-sentences/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void tokenize(const std::string &s, const char delim, std::map<std::string, int> &out) {
        std::string::size_type beg = 0;
        for (auto end = 0; (end = s.find(delim, end)) != std::string::npos; ++end) {
            auto temp = s.substr(beg, end - beg);
            if (out.find(temp) == out.end()) {
                out[temp] = 1;
            } else {
                out[temp]++;
            }
            beg = end + 1;
        }
        auto temp = s.substr(beg);
        if (out.find(temp) == out.end()) {
            out[temp] = 1;
        } else {
            out[temp]++;
        }
    }

public:
    std::vector<std::string> uncommonFromSentences(std::string firstInput, std::string secondInput) {
        std::map<std::string, int> firstWords;
        std::map<std::string, int> secondWords;
        tokenize(firstInput, ' ', firstWords);
        tokenize(secondInput, ' ', secondWords);
        std::vector<std::string> result;
        for (auto it = secondWords.begin(); it != secondWords.end(); it++) {
            if (firstWords.find(it->first) != firstWords.end()) {
                firstWords.erase(it->first);
            } else {
                if (it->second == 1) {
                    result.push_back(it->first);
                }
            }
        }
        for (auto it = firstWords.begin(); it != firstWords.end(); it++) {
            if (it->second == 1) {
                result.push_back(it->first);
            }
        }
        return result;
    }
};
