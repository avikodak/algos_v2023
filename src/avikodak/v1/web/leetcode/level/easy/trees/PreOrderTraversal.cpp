/****************************************************************************************************************************************************
 *  File Name                   : PreOrderTraversal.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/PreOrderTraversal.cpp
 *  Created on                  : Jul 30, 2022 :: 7:56:14 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-preorder-traversal/
 ****************************************************************************************************************************************************/




/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"


class Solution {
private:
	void preOrderTraversalUtil(TreeNode *node, std::vector<int> &auxSpace) {
		if(node == NULL){
			return;
		}
		auxSpace.push_back(node->val);
		preOrderTraversalUtil(node->left, auxSpace);
		preOrderTraversalUtil(node->right, auxSpace);
	}
public:
    std::vector<int> preorderTraversal(TreeNode* root) {
    	std::vector<int> auxSpace;
    	preOrderTraversalUtil(root, auxSpace);
    	return auxSpace;
    }
};
