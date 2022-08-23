/****************************************************************************************************************************************************
 *  File Name                   : MinimumDepthTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/MinimumDepthTree.cpp
 *  Created on                  : Aug 22, 2022 :: 8:29:08 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/minimum-depth-of-binary-tree
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int minDepthUtil(TreeNode *root) {
         if(root == nullptr) {
            return INT_MAX;
        }
        if(root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        return 1 + std::min(minDepthUtil(root->left), minDepthUtil(root->right));
    }
public:
    int minDepth(TreeNode *root) {
       if(root == nullptr) {
           return 0;
       }
        return minDepthUtil(root);
    }
};
