/****************************************************************************************************************************************************
 *  File Name                   : DeleteCharactersFancyString.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/strings/DeleteCharactersFancyString.cpp
 *  Created on                  : Oct 2, 2022 :: 7:24:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/delete-characters-to-make-fancy-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string makeFancyString(std::string userInput) {
        std::string result;
        int frontCrawler = 0;
        int rearCrawler;
        int frequency;
        while (frontCrawler < userInput.size()) {
            rearCrawler = frontCrawler;
            while (rearCrawler < userInput.size() && userInput[rearCrawler] == userInput[frontCrawler]) {
                frequency++;
                rearCrawler++;
            }
            while (frequency < 3 && frequency > 0) {
                result.push_back(userInput[frontCrawler]);
                frequency--;
            }
            frontCrawler = rearCrawler;
        }
        return result;
    }
};
