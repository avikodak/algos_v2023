/****************************************************************************************************************************************************
 *  File Name                   : InvertTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/InvertTree.cpp
 *  Created on                  : Aug 28, 2022 :: 10:28:04 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/invert-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {

public:
    TreeNode* invertTree(TreeNode *root) {
        if (root == nullptr) {
            return nullptr;
        }
        invertTree(root->left);
        invertTree(root->right);
        std::swap(root->left, root->right);
        return root;
    }
};
