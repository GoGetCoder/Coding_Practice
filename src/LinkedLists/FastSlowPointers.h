#pragma once
#include "LinkedLists.h"

class CFastSlowPointers : public CLinkedList
{
public:
    // fast-slow pointers
    /* 1. Given the head of a linked list with an odd number of nodes head, return the value of the node in the middle.
          Given a linked list that represents 1 -> 2 -> 3 -> 4 -> 5, return 3. */
    ListNode* getMid(ListNode* head) override;

    /* 2. Linked List Cycle
          Given the head of a linked list, determine if the linked list has a cycle. */
    bool isListLooped(ListNode* head) override;

    /* 3. Given the head of a linked list and an integer k, return the kth node from the end.
          Given the linked list that represents 1 -> 2 -> 3 -> 4 -> 5 and k = 2, return the node with value 4, 
          as it is the 2nd node from the end. */
    ListNode* findNode(ListNode* head, int k) override;

    /* 4. Remove duplicates from sorted list
          Input: head = [1,1,2,3,3]
          Output: [1,2,3] */
    ListNode* removeDuplicates(ListNode* head) override;

    /* 5. You are given the head of a linked list. Delete the middle node, and return the head of 
          the modified linked list 
          Input: head = [1,3,4,7,1,2,6] output: [1,3,4,1,2,6]
          Input: head = [1,2,3,4] Output: [1,2,4] */
    ListNode* deleteMid(ListNode* head) override;

    /* 6. You are given the head of a linked list, and an integer k.
          Return the head of the linked list after swapping the values of the kth node from the 
          beginning and the kth node from the end (the list is 1-indexed)
          Input: head = [1,2,3,4,5], k = 2 Output: [1,4,3,2,5] */
    ListNode* swapNodes(ListNode* head, int k) override;
};