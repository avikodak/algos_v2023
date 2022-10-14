/****************************************************************************************************************************************************
 *  File Name                   : SudukoSolver.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/recursion/SudukoSolver.cpp
 *  Created on                  : Oct 11, 2022 :: 7:39:40 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isValid(std::vector<std::vector<char>> &board, int rowCounter, int columnCounter, int value) {
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

    bool sudokuSolver(std::vector<std::vector<char>> &board, int rowCounter, int columnCounter) {
        for (int rowCounter = rowCounter; rowCounter < 9; rowCounter++) {
            for (int columCounter = columnCounter; columCounter < 9; columCounter++) {
                if (board[rowCounter][columCounter] == '.') {
                    for (char counter = '1'; counter <= '9'; counter++) {
                        if (isValid(board, rowCounter, columCounter, counter)) {
                            board[rowCounter][columCounter] = counter;
                            if (sudokuSolver(board, rowCounter, columnCounter)) {
                                return true;
                            } else {
                                board[rowCounter][columCounter] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

public:
    void solveSudoku(std::vector<std::vector<char>> &board) {
        sudokuSolver(board, 0, 0);
    }
};
