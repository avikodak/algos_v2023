/****************************************************************************************************************************************************
 *  File Name                   : IsSillPalindrome.cpp
 *  File Location               : /algos_v2023/src/avikodak/v1/web/leetcode/level/easy/sills/IsSillPalindrome.cpp
 *  Created on                  : Aug 28, 2022 :: 12:32:42 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/palindrome-linked-list
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"
#include "v1/sill/SingleLinkedList.h"

class Solution {
private:
    bool isPalindromeUtil(ListNode *head, ListNode **front) {
        if (head == nullptr) {
            return true;
        }
        bool result = isPalindromeUtil(head->next, front);
        if (!result) {
            return result;
        }
        if (head->val != (*front)->val) {
            return false;
        }
        (*front) = (*front)->next;
        return true;
    }
public:
    bool isPalindrome(ListNode *head) {
        return isPalindromeUtil(head, &head);
    }
};

