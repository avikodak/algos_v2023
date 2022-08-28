/****************************************************************************************************************************************************
 *  File Name                   : LowestCommonAncestor.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/LowestCommonAncestor.cpp
 *  Created on                  : Aug 27, 2022 :: 9:28:22 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    TreeNode* lowestCommonAncestorUtil(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (root == nullptr) {
            return root;
        }
        if (root->val >= p->val && root->val <= q->val) {
            return root;
        } else if (root->val > p->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else {
            return lowestCommonAncestor(root->right, p, q);
        }
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (root == nullptr) {
            return root;
        }
        if (p->val < q->val) {
            return lowestCommonAncestorUtil(root, p, q);
        } else {
            return lowestCommonAncestorUtil(root, q, p);
        }
    }
};
