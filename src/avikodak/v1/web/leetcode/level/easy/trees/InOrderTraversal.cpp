/****************************************************************************************************************************************************
 *  File Name                   : InOrderTraversal.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/InOrderTraversal.cpp
 *  Created on                  : Jul 29, 2022 :: 6:32:14 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-inorder-traversal
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> inorderTraversal(TreeNode* root) {
    	std::vector<int> auxSpace;
    	inorderTraversalUtil(root, auxSpace);
    	return auxSpace;
    }

private:
    void inorderTraversalUtil(TreeNode* root, std::vector<int> &auxSpace) {
    	if(root == NULL) {
    		return;
    	}
    	inorderTraversalUtil(root->left, auxSpace);
    	auxSpace.push_back(root->val);
    	inorderTraversalUtil(root->right, auxSpace);
    }
};
