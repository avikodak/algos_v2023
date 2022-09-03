/****************************************************************************************************************************************************
 *  File Name                   : ModeInBst.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/trees/ModeInBst.cpp
 *  Created on                  : Sep 3, 2022 :: 11:03:44 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-mode-in-binary-search-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void frequencyOfBst(TreeNode *root, int &maxFrequency, std::map<int, int> &frequencyMap) {
        if (root == nullptr) {
            return;
        }
        auto itToFrequencyMap = frequencyMap.find(root->val);
        if (itToFrequencyMap == frequencyMap.end()) {
            frequencyMap[root->val] = 1;
        } else {
            frequencyMap[root->val]++;
        }
        maxFrequency = std::max(maxFrequency, frequencyMap[root->val]);
        frequencyOfBst(root->left, maxFrequency, frequencyMap);
        frequencyOfBst(root->right, maxFrequency, frequencyMap);
    }

public:
    std::vector<int> findMode(TreeNode *root) {
        int maxFrequency = 0;
        std::map<int, int> frequencyMap;
        frequencyOfBst(root, maxFrequency, frequencyMap);
        std::vector<int> result;
        for (auto it = frequencyMap.begin(); it != frequencyMap.end(); it++) {
            if (it->second == maxFrequency) {
                result.push_back(it->first);
            }
        }
        return result;

    }
};
