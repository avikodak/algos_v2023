/****************************************************************************************************************************************************
 *  File Name                   : IncreasingOrderSearchTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/IncreasingOrderSearchTree.cpp
 *  Created on                  : Sep 10, 2022 :: 12:06:02 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    TreeNode *prevNode = nullptr;
    TreeNode *updatedRoot = nullptr;
    void increasingBSTUtil(TreeNode *root) {
        if (root == nullptr) {
            return;
        }
        increasingBSTUtil(root->left);
        root->left = nullptr;
        if (prevNode != nullptr) {
            prevNode->right = root;
        }
        if (updatedRoot == nullptr) {
            updatedRoot = root;
        }
        prevNode = root;
        increasingBSTUtil(root->right);
    }
public:
    TreeNode* increasingBST(TreeNode *root) {
        if (root == nullptr) {
            return nullptr;
        }
        increasingBSTUtil(root);
        return updatedRoot;
    }
};

