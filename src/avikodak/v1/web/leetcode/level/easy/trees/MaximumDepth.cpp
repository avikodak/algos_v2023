/****************************************************************************************************************************************************
 *  File Name                   : MaximumDepth.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/MaximumDepth.cpp
 *  Created on                  : Jul 30, 2022 :: 9:45:39 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-depth-of-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	int maxDepth(TreeNode *root) {
		if (root == NULL) {
			return 0;
		}
		return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
	}
};
