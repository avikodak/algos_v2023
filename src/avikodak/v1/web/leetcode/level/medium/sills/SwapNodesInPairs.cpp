/****************************************************************************************************************************************************
 *  File Name                   : SwapNodesInPairs.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/sills/SwapNodesInPairs.cpp
 *  Created on                  : Sep 29, 2022 :: 4:51:17 PM
 *  Author                      : avikodak
 *  URL                         : TODO
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
    ListNode* swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *newHead;
        ListNode *prevHead = nullptr;
        ListNode *crawler = head;
        ListNode *temp;
        while (crawler != nullptr && crawler->next != nullptr) {
            if (prevHead == nullptr) {
                newHead = crawler->next;
            } else {
                prevHead->next = crawler->next;
            }
            prevHead = crawler;
            temp = crawler->next;
            crawler->next = temp->next;
            temp->next = crawler;
            crawler = crawler->next->next;
        }
        return newHead;
    }
};
