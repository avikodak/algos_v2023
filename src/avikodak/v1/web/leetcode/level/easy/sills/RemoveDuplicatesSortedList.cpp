/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicatesSortedList.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/RemoveDuplicatesSortedList.cpp
 *  Created on                  : Aug 27, 2022 :: 11:47:57 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() :
            val(0), next(nullptr) {
    }
    ListNode(int x) :
            val(x), next(nullptr) {
    }
    ListNode(int x, ListNode *next) :
            val(x), next(next) {
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode *frontCrawler = head;
        while (frontCrawler != nullptr && frontCrawler->next != nullptr) {
            while (frontCrawler != nullptr && frontCrawler->next != nullptr && frontCrawler->next->val == frontCrawler->val) {
                frontCrawler->next = frontCrawler->next->next;
            }
            frontCrawler = frontCrawler->next;

        }
        return head;
    }
};
