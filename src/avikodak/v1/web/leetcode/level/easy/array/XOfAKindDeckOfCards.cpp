/****************************************************************************************************************************************************
 *  File Name                   : XOfAKindDeckOfCards.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/array/XOfAKindDeckOfCards.cpp
 *  Created on                  : Sep 11, 2022 :: 1:08:14 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int gcd(int a, int b) {
        if (a == 1) {
            return b;
        }
        return gcd(b % a, a);
    }
public:
    bool hasGroupsSizeX(std::vector<int> &deck) {
        std::map<int, int> frequency;
        int minFrequency = INT_MAX;
        for (int counter = 0; counter < deck.size(); counter++) {
            auto it = frequency.find(deck[counter]);
            if (it == frequency.end()) {
                frequency[deck[counter]] = 1;
            } else {
                frequency[deck[counter]]++;
            }
        }
        int result = -1;
        for (auto it = frequency.begin(); it != frequency.end(); it++) {
            if (result == -1) {
                result = it->second;
            } else {
                result = gcd(result, it->second);
            }
        }
        return result > 1;
    }
};

