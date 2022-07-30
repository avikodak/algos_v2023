/****************************************************************************************************************************************************
 *  File Name                   : PostOrderTraversal.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/PostOrderTraversal.cpp
 *  Created on                  : Jul 30, 2022 :: 8:10:28 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-postorder-traversal/
 ****************************************************************************************************************************************************/


/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
	void postorderTraversalUtil(TreeNode *node, std::vector<int> &auxSpace) {
		if(node == NULL) {
			return;
		}
		postorderTraversalUtil(node->left, auxSpace);
		postorderTraversalUtil(node->right, auxSpace);
		auxSpace.push_back(node->val);
	}
public:
    std::vector<int> postorderTraversal(TreeNode* root) {
    	std::vector<int> auxSpace;
    	postorderTraversalUtil(root, auxSpace);
    	return auxSpace;
    }
};
