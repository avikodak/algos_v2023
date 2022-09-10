/****************************************************************************************************************************************************
 *  File Name                   : MiddleOfSills.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/MiddleOfSills.cpp
 *  Created on                  : Sep 6, 2022 :: 9:09:45 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/middle-of-the-linked-list/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class Solution {
public:
    ListNode* middleNode(ListNode *head) {
        ListNode *slowPtr = head, *fastPtr = head;
        while (fastPtr != nullptr && fastPtr->next != nullptr) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        return slowPtr;
    }
};
