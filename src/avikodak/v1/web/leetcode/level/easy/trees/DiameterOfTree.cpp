/****************************************************************************************************************************************************
 *  File Name                   : DiameterOfTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/DiameterOfTree.cpp
 *  Created on                  : Sep 2, 2022 :: 12:54:03 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/diameter-of-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int diameterOfBinaryTreeUtil(TreeNode *root, int &height) {
        if (root == nullptr) {
            height = 0;
            return 0;
        }
        int lh, rh;
        int leftDiameter = diameterOfBinaryTreeUtil(root->left, lh);
        int rightDiameter = diameterOfBinaryTreeUtil(root->right, rh);
        height = std::max(lh, rh) + 1;
        return std::max(leftDiameter, std::max(rightDiameter, lh + rh));
    }
public:
    int diameterOfBinaryTree(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int height = 0;
        return diameterOfBinaryTreeUtil(root, height);
    }
};
