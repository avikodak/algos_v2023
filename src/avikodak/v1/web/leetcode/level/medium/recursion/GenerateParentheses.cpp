/****************************************************************************************************************************************************
 *  File Name                   : GenerateParentheses.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/recursion/GenerateParentheses.cpp
 *  Created on                  : Sep 29, 2022 :: 4:01:49 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/generate-parentheses/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void generateParenthesisUtil(std::vector<std::string> &result, std::string &generatedString, int index,
            int openBracesCount, int closedBraceCount) {
        if (index == generatedString.size()) {
            result.push_back(generatedString);
            return;
        }
        if (openBracesCount) {
            generatedString[index] = '(';
            generateParenthesisUtil(result, generatedString, index + 1, openBracesCount - 1, closedBraceCount);
        }
        if (openBracesCount < closedBraceCount) {
            generatedString[index] = ')';
            generateParenthesisUtil(result, generatedString, index + 1, openBracesCount, closedBraceCount - 1);
        }

    }
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        std::string auxSpace(2 * n, 'a');
        generateParenthesisUtil(result, auxSpace, 0, n, n);
        return result;
    }
};
