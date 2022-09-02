/****************************************************************************************************************************************************
 *  File Name                   : ConstructStringFromTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/ConstructStringFromTree.cpp
 *  Created on                  : Sep 2, 2022 :: 10:08:55 AM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string tree2str(TreeNode *root) {
        if (root == nullptr) {
            return "";
        }
        if (root->left == nullptr && root->right == nullptr) {
            return std::to_string(root->val);
        }
        std::string result;
        result += std::to_string(root->val);
        result += "(";
        result += tree2str(root->left);
        result += ")";
        if (root->right != nullptr) {
            result += "(";
            result += tree2str(root->right);
            result += ")";
        }
        return result;
    }
};
