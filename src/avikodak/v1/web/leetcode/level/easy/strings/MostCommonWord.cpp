/****************************************************************************************************************************************************
 *  File Name                   : MostCommonWord.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/MostCommonWord.cpp
 *  Created on                  : Sep 6, 2022 :: 9:14:35 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/most-common-word/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string mostCommonWord(std::string paragraph, std::vector<std::string> &banned) {
        std::set<std::string> bannedWords(banned.begin(), banned.end());
        std::map<std::string, int> frequency;
        std::map<std::string, int>::iterator itToFrequency;
        int frontCrawler = 0;
        int rearCrawler;
        int maxFrequency = 0;
        std::string result;
        while (frontCrawler < paragraph.size()) {
            while (frontCrawler < paragraph.size() && !isalpha(paragraph[frontCrawler])) {
                frontCrawler++;
            }
            rearCrawler = frontCrawler;
            while (rearCrawler < paragraph.size() && isalpha(paragraph[rearCrawler])) {
                if (isupper(paragraph[rearCrawler])) {
                    paragraph[rearCrawler] = tolower(paragraph[rearCrawler]);
                }
                rearCrawler++;
            }
            std::string word = paragraph.substr(frontCrawler, rearCrawler - frontCrawler);
            if(bannedWords.find(word) == bannedWords.end()) {
            itToFrequency = frequency.find(word);
            if (itToFrequency == frequency.end()) {
                frequency[word] = 1;
            } else {
                frequency[word]++;
            }
            if (frequency[word] > maxFrequency) {
                maxFrequency = frequency[word];
                result = word;
            }
            }
            frontCrawler = rearCrawler;
        }
        return result;
    }
};
