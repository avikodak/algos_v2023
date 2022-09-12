/****************************************************************************************************************************************************
 *  File Name                   : RangeSumBST.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/RangeSumBST.cpp
 *  Created on                  : Sep 11, 2022 :: 6:42:52 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void rangeSumBSTUtil(TreeNode *root, int &result, int low, int high) {
        if (root == nullptr) {
            return;
        }
        if (root->val >= low && root->val < high) {
            result += root->val;
        }
        if (root->val > low) {
            rangeSumBSTUtil(root->left, result, low, high);
        }
        if (root->val < high) {
            rangeSumBSTUtil(root->right, result, low, high);
        }
    }
public:
    int rangeSumBST(TreeNode *root, int low, int high) {
        if (root == nullptr) {
            return 0;
        }
        int result = 0;
        rangeSumBSTUtil(root, result, low, high);
        return result;
    }
};
