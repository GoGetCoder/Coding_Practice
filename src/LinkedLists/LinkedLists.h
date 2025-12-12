#pragma once

#include "ListNode.h"

class CLinkedList
{
public:
    // fast-slow pointers 
    virtual ListNode* getMid(ListNode* head) { return{}; };
    virtual bool isListLooped(ListNode* head) { return false; }
    virtual ListNode* findNode(ListNode* head, int k) { return{}; }
    virtual ListNode* removeDuplicates(ListNode* head) { return {}; }
    virtual ListNode* deleteMid(ListNode* head) { return{}; }
    virtual ListNode* swapNodes(ListNode* head, int k) { return{}; }
    // reverse
    virtual ListNode* reverse(ListNode* head) { return {}; }
    virtual ListNode* swap_pairs(ListNode* head) { return{}; }
    virtual int max_twin_sum(ListNode* head) { return {}; }
    virtual ListNode* reverse_left_to_right(ListNode* head, int left, int right) { return{}; }
};