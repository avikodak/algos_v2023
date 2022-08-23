/****************************************************************************************************************************************************
 *  File Name                   : 3Sum.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/3Sum.cpp
 *  Created on                  : Aug 19, 2022 :: 10:04:34 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/3sum/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {

private:
    void ignoreDuplicateValue(std::vector<int> &userInput, int &index, int targetIndex, bool isIncrement) {
        if (isIncrement) {
            while (index + 1 < targetIndex && userInput[index + 1] == userInput[index]) {
                index++;
            }
        } else {
            while (index - 1 > targetIndex && userInput[index - 1] == userInput[index]) {
                index--;
            }
        }
    }
public:
    std::vector<std::vector<int> > threeSum(std::vector<int> &userInput) {
        std::vector<std::vector<int> > result;
        std::sort(userInput.begin(), userInput.end());
        int currentSum;
        for (int firstCrawler = 0; firstCrawler < userInput.size() - 2; firstCrawler++) {
            int frontCrawler = firstCrawler + 1;
            int rearCrawler = userInput.size() - 1;
            while (frontCrawler < rearCrawler) {
                currentSum = userInput[firstCrawler] + userInput[frontCrawler] + userInput[rearCrawler];
                if (currentSum == 0) {
                    std::vector<int> triplet;
                    triplet.push_back(userInput[firstCrawler]);
                    triplet.push_back(userInput[frontCrawler]);
                    triplet.push_back(userInput[rearCrawler]);
                    result.push_back(triplet);
                    ignoreDuplicateValue(userInput, frontCrawler, rearCrawler, true);
                    ignoreDuplicateValue(userInput, rearCrawler, frontCrawler, false);
                    frontCrawler++;
                    rearCrawler--;
                } else if (currentSum < 0) {
                    ignoreDuplicateValue(userInput, frontCrawler, rearCrawler, true);
                    frontCrawler++;
                } else {
                    ignoreDuplicateValue(userInput, rearCrawler, frontCrawler, false);
                    rearCrawler--;
                }
            }
            ignoreDuplicateValue(userInput, firstCrawler, userInput.size() - 1, true);
        }
        return result;
    }
};
