/****************************************************************************************************************************************************
 *  File Name                   : AverageLevelsOfTree.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/AverageLevelsOfTree.cpp
 *  Created on                  : Sep 5, 2022 :: 7:37:31 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<double> averageOfLevels(TreeNode *root) {
        std::queue<TreeNode*> auxSpace;
        auxSpace.push(root);
        int levelCount, nodeCount;
        double sum;
        TreeNode *currentNode;
        std::vector<double> result;
        while (!auxSpace.empty()) {
            levelCount = auxSpace.size();
            nodeCount = levelCount;
            sum = 0;
            while (levelCount--) {
                currentNode = auxSpace.front();
                sum += currentNode->val;
                auxSpace.pop();
                if (currentNode->left != nullptr) {
                    auxSpace.push(currentNode->left);
                }
                if (currentNode->right != nullptr) {
                    auxSpace.push(currentNode->right);
                }
            }
            result.push_back(sum / (double) nodeCount);

        }
        return result;
    }
};
