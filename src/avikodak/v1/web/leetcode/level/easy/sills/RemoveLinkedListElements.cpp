/****************************************************************************************************************************************************
 *  File Name                   : RemoveLinkedListElements.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/RemoveLinkedListElements.cpp
 *  Created on                  : Sep 3, 2022 :: 8:43:33 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-linked-list-elements/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class Solution {
public:
    ListNode* removeElements(ListNode *head, int val) {
        ListNode *resultHead = new ListNode(0);
        resultHead->next = head;
        ListNode *crawler = resultHead;
        ListNode *nodeToDelete;
        while (crawler != nullptr && crawler->next != nullptr) {
            if (crawler->next->val == val) {
                nodeToDelete = crawler->next;
                crawler->next = crawler->next->next;
                delete nodeToDelete;
            } else {
                crawler = crawler->next;
            }
        }
        return resultHead->next;
    }
};
