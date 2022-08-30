/****************************************************************************************************************************************************
 *  File Name                   : SumOfLeftLeaves.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/SumOfLeftLeaves.cpp
 *  Created on                  : Aug 30, 2022 :: 3:56:52 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sum-of-left-leaves/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int sumOfLeftLeaves(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int sum = 0;
        if (root->left != nullptr) {
            if (root->left->left == nullptr && root->left->right == nullptr) {
                sum += root->left->val;
            } else {
                sum += sumOfLeftLeaves(root->left);
            }
        }
        sum += sumOfLeftLeaves(root->right);
        return sum;
    }
};
