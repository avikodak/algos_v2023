/****************************************************************************************************************************************************
 *  File Name                   : SortedArrayToBST.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/SortedArrayToBST.cpp
 *  Created on                  : Aug 23, 2022 :: 7:35:11 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    TreeNode* sortedArrayToBSTUtil(std::vector<int> &userInput, int startIndex, int endIndex) {
        if (startIndex > endIndex) {
            return nullptr;
        }
        int midIndex = (endIndex - startIndex) / 2 + (startIndex);
        TreeNode *root = new TreeNode(userInput[midIndex]);
        root->left = sortedArrayToBSTUtil(userInput, startIndex, midIndex - 1);
        root->right = sortedArrayToBSTUtil(userInput, midIndex + 1, endIndex);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(std::vector<int> &userInput) {
        return sortedArrayToBSTUtil(userInput, 0, userInput.size() - 1);
    }
};

