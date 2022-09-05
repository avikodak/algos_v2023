/****************************************************************************************************************************************************
 *  File Name                   : MaximumDepthNAryTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/n_tree/MaximumDepthNAryTree.cpp
 *  Created on                  : Sep 4, 2022 :: 9:46:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
 ****************************************************************************************************************************************************/




/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include <v1/n_tree/NTree.h>


class Solution {
public:
    int maxDepth(Node* root) {
        if(root == nullptr) {
            return 0;
        }
        int maxHeight = 0;
        for(int counter = 0;counter < root->children.size();counter++) {
            maxHeight = std::max(maxHeight, maxDepth(root->children[counter]));
        }
        return 1 + maxHeight;
    }
};
