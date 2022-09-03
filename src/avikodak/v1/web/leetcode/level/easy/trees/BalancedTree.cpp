/****************************************************************************************************************************************************
 *  File Name                   : BalancedTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/BalancedTree.cpp
 *  Created on                  : Sep 2, 2022 :: 2:11:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/balanced-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isBalancedUtil(TreeNode *root, int &height) {
        if (root == nullptr) {
            return true;
        }
        int leftHeight = 0, rightHeight = 0;
        bool isLeftBalanced = isBalancedUtil(root->left, leftHeight);
        bool isRightBalanced = isBalancedUtil(root->right, rightHeight);
        height = std::max(leftHeight, rightHeight) + 1;
        return isLeftBalanced && isRightBalanced && abs(leftHeight - rightHeight) <= 1;
    }

public:
    bool isBalanced(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        int height = 0;
        return isBalancedUtil(root, height);
    }
};
