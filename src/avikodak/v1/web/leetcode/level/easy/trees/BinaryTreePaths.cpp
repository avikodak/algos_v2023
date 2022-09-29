/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreePaths.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/BinaryTreePaths.cpp
 *  Created on                  : Aug 29, 2022 :: 7:45:33 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void binaryTreePathsUtil(TreeNode *root, std::vector<std::string> &result, std::string path) {
        if (root == nullptr) {
            return;
        }
        if(path.size() != 0) {
            path += "->";
        }
        path += std::to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            result.push_back(path);
            return;
        }
        binaryTreePathsUtil(root->left, result, path);
        binaryTreePathsUtil(root->right, result, path);
    }

public:
    std::vector<std::string> binaryTreePaths(TreeNode *root) {
        std::string path;
        std::vector<std::string> result;
        binaryTreePathsUtil(root, result, path);
        return result;
    }
};

