/****************************************************************************************************************************************************
 *  File Name                   : VerifyingAlienDictionary.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/VerifyingAlienDictionary.cpp
 *  Created on                  : Sep 21, 2022 :: 1:05:44 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isGreater(std::string &firstWord, std::string &secondWord, std::map<char, int> &orderMap) {
        int firstCrawler = 0;
        int secondCrawler = 0;
        while (firstCrawler < firstWord.size() && secondCrawler < secondWord.size()) {
            if(firstWord[firstCrawler] == secondWord[secondCrawler]) {
                firstCrawler++;
            secondCrawler++;
            } else if (orderMap[firstWord[firstCrawler]] > orderMap[secondWord[secondCrawler]]) {
                return false;
            } else {
                return true;
            }

        }
        return firstWord.size() <= secondWord.size();
    }
public:
    bool isAlienSorted(std::vector<std::string> &words, std::string order) {
        std::map<char, int> orderMap;
        for (int counter = 0; counter < order.size(); counter++) {
            orderMap[order[counter]] = counter;
        }
        for (int counter = 0; counter < words.size() - 1; counter++) {
            if (!isGreater(words[counter], words[counter + 1], orderMap)) {
                return false;
            }
        }
        return true;
    }
};
