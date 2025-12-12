#pragma once

#include "LinkedLists.h"

class CReverse : public CLinkedList
{
public:
    /* 1. Reverse a list.
          Input: 1-2-3-4 Output: 4-3-2-1 */
    ListNode* reverse(ListNode* head) override;

    /* 2. Swap nodes in pairs.
          Input: 1-2-3-4-5-6 Output: 2-1-4-3-6-5 */
    ListNode* swap_pairs(ListNode* head) override;

    /* 3. In a linked list of size n, where n is even, the ith node (0-indexed) of the 
          linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.
          Given the head of a linked list with even length, return the maximum twin sum of the linked list.
          Input: head = [4,2,2,3] Output: 7 */
    int max_twin_sum(ListNode* head) override;

    /* 4. Given the head of a singly linked list and two integers left and right where left <= right, 
          reverse the nodes of the list from position left to position right, and return the reversed list.
          Input: head = [1,2,3,4,5] left = 2, right = 4 Output: [1,4,3,2,5] */
    ListNode* reverse_left_to_right(ListNode* head, int left, int right) override;
};
