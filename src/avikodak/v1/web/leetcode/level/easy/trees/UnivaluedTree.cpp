/****************************************************************************************************************************************************
 *  File Name                   : UnivaluedTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/UnivaluedTree.cpp
 *  Created on                  : Sep 11, 2022 :: 2:01:41 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/univalued-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isUnivalTreeUtil(TreeNode *root, int &value) {
        if (root == nullptr) {
            return true;
        }
        if (root->val != value) {
            return false;
        }
        return isUnivalTreeUtil(root->left, value) && isUnivalTreeUtil(root->right, value);
    }
public:
    bool isUnivalTree(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        int value = root->val;
        return isUnivalTreeUtil(root, value);
    }
};
