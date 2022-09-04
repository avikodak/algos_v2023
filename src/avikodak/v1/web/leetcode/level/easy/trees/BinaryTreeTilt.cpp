/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreeTilt.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/BinaryTreeTilt.cpp
 *  Created on                  : Sep 3, 2022 :: 11:55:17 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-tilt/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    int findTiltUtil(TreeNode *root, int &sum) {
        if (root == nullptr) {
            return 0;
        }
        int leftSum = findTiltUtil(root->left, sum);
        int rightSum = findTiltUtil(root->right, sum);
        sum += abs(rightSum - leftSum);
        return leftSum + rightSum + root->val;
    }
public:
    int findTilt(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int result = 0;
        findTiltUtil(root, result);
        return result;
    }
};
