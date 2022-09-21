/****************************************************************************************************************************************************
 *  File Name                   : SumRootToLeaf.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/SumRootToLeaf.cpp
 *  Created on                  : Sep 20, 2022 :: 8:54:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int sumRootToLeafUtil(TreeNode *root, int value) {
        if (root == nullptr) {
            return 0;
        }
        value = (value << 1) + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return value;
        }
        return sumRootToLeafUtil(root->left, value) + sumRootToLeafUtil(root->right, value);
    }
public:
    int sumRootToLeaf(TreeNode *root) {
        int value = 0;
        return sumRootToLeafUtil(root, value);
    }
};
