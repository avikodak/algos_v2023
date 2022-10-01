/****************************************************************************************************************************************************
 *  File Name                   : MergekLists.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/hard/sills/MergekLists.cpp
 *  Created on                  : Sep 30, 2022 :: 9:40:41 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class sortFunc {
public:
    bool operator()(const ListNode *lhs, const ListNode *rhs) const {
        return lhs->val < rhs->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(std::vector<ListNode*> &lists) {
        std::priority_queue<ListNode*, std::vector<ListNode*>, sortFunc> minHeap;
        for (int counter = 0; counter < lists.size(); counter++) {
            minHeap.push(lists[counter]);
        }
        ListNode *result = new ListNode(0);
        while (!minHeap.empty()) {
            ListNode *minNode = minHeap.top();
            result->next = minNode;
            if (minNode->next != nullptr) {
                minHeap.push(minNode->next);
            }
            minNode->next = nullptr;
            result = result->next;
        }
        return result;
    }
};
