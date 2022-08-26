/****************************************************************************************************************************************************
 *  File Name                   : LinkedListCycle.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/LinkedListCycle.cpp
 *  Created on                  : Aug 23, 2022 :: 8:55:07 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/linked-list-cycle/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode *slowPtr = head;
        ListNode *fastPtr = head;
        while (slowPtr != nullptr && fastPtr != nullptr && fastPtr->next != nullptr) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if (slowPtr == fastPtr) {
                return true;
            }
        }
        return false;
    }
};
