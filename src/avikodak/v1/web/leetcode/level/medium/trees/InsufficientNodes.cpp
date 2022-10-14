/****************************************************************************************************************************************************
 *  File Name                   : InsufficientNodes.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/trees/InsufficientNodes.cpp
 *  Created on                  : Oct 14, 2022 :: 2:04:48 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    bool sufficientSubsetUtil(TreeNode *root, int limit, int currentSum) {
        if (root == nullptr) {
            return currentSum < limit;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return currentSum + root->val < limit;
        }
        bool left = true;
        if (root->left) {
            left = sufficientSubsetUtil(root->left, limit, currentSum + root->val);
            if (left) {
                root->left = nullptr;
            }
        }
        bool right = true;
        if (root->right) {
            right = sufficientSubsetUtil(root->right, limit, currentSum + root->val);
            if (right) {
                root->right = nullptr;
            }
        }
        return left && right;
    }
public:
    TreeNode* sufficientSubset(TreeNode *root, int limit) {
        int currentSum = 0;
        bool result = sufficientSubsetUtil(root, limit, currentSum);
        return result ? nullptr : root;
    }
};
