/****************************************************************************************************************************************************
 *  File Name                   : SameTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/SameTree.cpp
 *  Created on                  : Jul 30, 2022 :: 8:07:43 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/same-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
	bool isSameTree(TreeNode *first, TreeNode *second) {
		if (first == NULL && second == NULL) {
			return true;
		}
		if (first == NULL || second == NULL) {
			return false;
		}
		if (first->val != second->val) {
			return false;
		}
		return isSameTree(first->left, second->left)
				&& isSameTree(first->right, second->right);
	}
};

