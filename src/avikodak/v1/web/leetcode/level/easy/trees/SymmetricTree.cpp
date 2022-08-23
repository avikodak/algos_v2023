/****************************************************************************************************************************************************
 *  File Name                   : SymmetricTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/SymmetricTree.cpp
 *  Created on                  : Aug 22, 2022 :: 8:17:58 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/symmetric-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isSymmetricUtil(TreeNode *firstRoot, TreeNode *secondRoot) {
        if (firstRoot == nullptr && secondRoot == nullptr) {
            return true;
        }
        if (firstRoot == nullptr || secondRoot == nullptr) {
            return false;
        }
        return firstRoot->val == secondRoot->val && isSymmetricUtil(firstRoot->left, secondRoot->right)
                && isSymmetricUtil(firstRoot->right, secondRoot->left);
    }
public:
    bool isSymmetric(TreeNode *root) {
        if(root == nullptr) {
            return true;
        }
        return isSymmetricUtil(root->left, root->right);
    }
};

