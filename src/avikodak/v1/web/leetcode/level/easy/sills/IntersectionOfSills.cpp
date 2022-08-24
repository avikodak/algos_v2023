/****************************************************************************************************************************************************
 *  File Name                   : IntersectionOfSills.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/IntersectionOfSills.cpp
 *  Created on                  : Aug 23, 2022 :: 7:01:19 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/intersection-of-two-linked-lists/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class Solution {
private:
    int lengthOfSill(ListNode *head) {
        if(head == nullptr) {
            return 0;
        }
        return 1 + lengthOfSill(head->next);
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        int lengthA = lengthOfSill(headA);
        int lengthB = lengthOfSill(headB);
        ListNode *crawlerA = lengthA > lengthB? headA:headB;
        ListNode *crawlerB = lengthA > lengthB? headB:headA;
        int target = abs(lengthA - lengthB);
        while(target-- && crawlerA != nullptr) {
            crawlerA = crawlerA->next;
        }
        while(crawlerA != nullptr && crawlerB != nullptr) {
            if(crawlerA == crawlerB) {
                return crawlerA;
            }
            crawlerA = crawlerA->next;
            crawlerB = crawlerB->next;
        }
        return nullptr;
    }
};
