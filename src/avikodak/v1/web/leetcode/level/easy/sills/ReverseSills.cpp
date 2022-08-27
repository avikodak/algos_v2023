/****************************************************************************************************************************************************
 *  File Name                   : ReverseSills.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/ReverseSills.cpp
 *  Created on                  : Aug 27, 2022 :: 12:05:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-linked-list
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class Solution {
public:
    ListNode* reverseList(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *revHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return revHead;
    }
};
