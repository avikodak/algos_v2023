/****************************************************************************************************************************************************
 *  File Name                   : RootEqualsSumOfChildren.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/RootEqualsSumOfChildren.cpp
 *  Created on                  : Oct 1, 2022 :: 11:57:23 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/root-equals-sum-of-children/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool checkTree(TreeNode *root) {
        return root->val == root->left->val + root->right->val;
    }
};
