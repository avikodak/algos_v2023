/****************************************************************************************************************************************************
 *  File Name                   : ValidSudoku.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/ValidSudoku.cpp
 *  Created on                  : Oct 11, 2022 :: 7:09:17 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-sudoku/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isValidNumber(std::vector<std::vector<char>> &board, int rowCounter, int columnCounter, int value) {
        int gridRow, gridColumn;
        for (int counter = 0; counter < 9; counter++) {
            if (board[rowCounter][counter] == value && counter != columnCounter) {
                return false;
            }
            if (board[counter][columnCounter] == value && counter != rowCounter) {
                return false;
            }
            gridRow = 3 * (rowCounter / 3) + (counter / 3);
            gridColumn = 3 * (columnCounter / 3) + (counter % 3);
            if ((gridRow != rowCounter || gridColumn != columnCounter) && board[gridRow][gridColumn] == value) {
                return false;
            }
        }
        return true;
    }

public:
    bool isValidSudoku(std::vector<std::vector<char>> &board) {
        for (int rowCounter = 0; rowCounter < board.size(); rowCounter++) {
            for (int columnCounter = 0; columnCounter < board[0].size(); columnCounter++) {
                if (board[rowCounter][columnCounter] != '.') {
                    if (!isValidNumber(board, rowCounter, columnCounter, board[rowCounter][columnCounter])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
