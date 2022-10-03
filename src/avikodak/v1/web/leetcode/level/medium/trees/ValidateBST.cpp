/****************************************************************************************************************************************************
 *  File Name                   : ValidateBST.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/trees/ValidateBST.cpp
 *  Created on                  : Sep 29, 2022 :: 3:17:01 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isValidBSTUtil(TreeNode *root, TreeNode *low, TreeNode *high) {
        if (root == nullptr) {
            return true;
        }
        if ((low != nullptr && root->val <= low->val) || (high != nullptr && root->val >= high->val)) {
            return false;
        }

        return isValidBSTUtil(root->left, low, root) && isValidBSTUtil(root->right, root, high);
    }
public:
    bool isValidBST(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        return isValidBSTUtil(root, nullptr, nullptr);
    }
};
