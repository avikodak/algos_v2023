/****************************************************************************************************************************************************
 *  File Name                   : NaryPostOrderTraversal.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/n_tree/NaryPostOrderTraversal.cpp
 *  Created on                  : Sep 4, 2022 :: 9:35:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/n-ary-tree-postorder-traversal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include <v1/n_tree/NTree.h>

class Solution {
private:
    void postorderUtil(Node *root, std::vector<int> &result) {
        if (root == nullptr) {
            return;
        }
        for (int counter = 0; counter < root->children.size(); counter++) {
            postorderUtil(root->children[counter], result);
        }
        result.push_back(root->val);
    }
public:
    std::vector<int> postorder(Node *root) {
        std::vector<int> result;
        postorderUtil(root, result);
        return result;
    }
};
