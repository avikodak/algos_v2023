/****************************************************************************************************************************************************
 *  File Name                   : LeafSimilarTrees.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/LeafSimilarTrees.cpp
 *  Created on                  : Sep 6, 2022 :: 11:24:04 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/leaf-similar-trees/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void getLeaves(TreeNode *root, std::vector<int> &leafValues) {
        if (root == nullptr) {
            return;
        }
        if (root->left == nullptr && root->right == nullptr) {
            leafValues.push_back(root->val);
            return;
        }
        getLeaves(root->left, leafValues);
        getLeaves(root->right, leafValues);
    }
public:
    bool leafSimilar(TreeNode *root1, TreeNode *root2) {
        std::vector<int> firstTreeLeaves, secondTreeLeaves;
        getLeaves(root1, firstTreeLeaves);
        getLeaves(root2, secondTreeLeaves);
        if (firstTreeLeaves.size() != secondTreeLeaves.size()) {
            return false;
        }
        for (int counter = 0; counter < firstTreeLeaves.size(); counter++) {
            if (firstTreeLeaves[counter] != secondTreeLeaves[counter]) {
                return false;
            }
        }
        return true;
    }
};
