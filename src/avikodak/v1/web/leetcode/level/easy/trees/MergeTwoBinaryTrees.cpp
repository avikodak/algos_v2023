/****************************************************************************************************************************************************
 *  File Name                   : MergeTwoBinaryTrees.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/MergeTwoBinaryTrees.cpp
 *  Created on                  : Sep 4, 2022 :: 8:54:13 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-two-binary-trees/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    TreeNode* mergeTrees(TreeNode *root1, TreeNode *root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return nullptr;
        }
        TreeNode *root = new TreeNode(0);
        if (root1 != nullptr) {
            root->val = root1->val;
        }
        if (root2 != nullptr) {
            root->val = root2->val;
        }
        root->left = mergeTrees(root1 != nullptr ? root1->left : nullptr, root2 != nullptr ? root2->left : nullptr);
        root->right = mergeTrees(root1 != nullptr ? root1->right : nullptr, root2 != nullptr ? root2->right : nullptr);
        return root;
    }
};
