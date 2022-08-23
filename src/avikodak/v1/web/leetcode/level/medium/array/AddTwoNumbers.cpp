/****************************************************************************************************************************************************
 *  File Name                   : AddTwoNumbers.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/medium/array/AddTwoNumbers.cpp
 *  Created on                  : Aug 19, 2022 :: 1:52:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/add-two-numbers/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"


class Solution {
public:
    ListNode* addTwoNumbers(ListNode *listOne, ListNode *listTwo) {
        if (listOne == nullptr) {
            return listTwo;
        }
        if (listTwo == nullptr) {
            return listTwo;
        }
        ListNode *result = new ListNode(0);
        int carry = 0;
        int currentSum = 0;
        ListNode *crawler = result;
        while (listOne != nullptr || listTwo != nullptr || carry) {
            currentSum = carry;
            if (listOne != nullptr) {
                currentSum += listOne->val;
                listOne = listOne->next;
            }
            if (listTwo != nullptr) {
                currentSum += listTwo->val;
                listTwo = listTwo->next;
            }
            carry = currentSum / 10;
            crawler->next = new ListNode(currentSum % 10);
            crawler = crawler->next;
        }
        return result->next;
    }

};
