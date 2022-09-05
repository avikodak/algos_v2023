/****************************************************************************************************************************************************
 *  File Name                   : NaryPreOrderTraversal.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/n_tree/NaryPreOrderTraversal.cpp
 *  Created on                  : Sep 4, 2022 :: 9:31:57 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/n-ary-tree-preorder-traversal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/n_tree/NTree.h"
#include "v1/common/Includes.h"

class Solution {
private:
    void preorderUtil(Node *root, std::vector<int> &result) {
        if (root == nullptr) {
            return;
        }
        result.push_back(root->val);
        for (int counter = 0; counter < root->children.size(); counter++) {
            preorderUtil(root->children[counter], result);
        }
    }
public:
    std::vector<int> preorder(Node *root) {
        std::vector<int> result;
        preorderUtil(root, result);
        return result;
    }
};

