/****************************************************************************************************************************************************
 *  File Name                   : MergeTwoSortedSills.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/MergeTwoSortedSills.cpp
 *  Created on                  : Aug 22, 2022 :: 11:36:01 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-two-sorted-lists
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode *listOne, ListNode *listTwo) {
        ListNode *result = new ListNode(0);
        ListNode *crawler = result;
        while (listOne != nullptr && listTwo != nullptr) {
            if (listOne->val < listTwo->val) {
                crawler->next = listOne;
                listOne = listOne->next;
            } else {
                crawler->next = listTwo;
                listTwo = listTwo->next;
            }
            crawler = crawler->next;
        }
        if (listOne != nullptr) {
            crawler->next = listOne;
        } else if (listTwo != nullptr) {
            crawler->next = listTwo;
        }
        return result->next;
    }
};
