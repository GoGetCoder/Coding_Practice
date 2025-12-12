#include "FastSlowPointers.h"

ListNode *CFastSlowPointers::getMid(ListNode *head)
{
    if(head == nullptr)
        return head;

    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool CFastSlowPointers::isListLooped(ListNode *head)
{
    if(head == nullptr)
        return false;

    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}

ListNode *CFastSlowPointers::findNode(ListNode *head, int k)
{
    ListNode* slow = head;
    ListNode* fast = head;

    for(int i=1; i<=k; i++)
        fast = fast->next;

    while(fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

ListNode *CFastSlowPointers::removeDuplicates(ListNode *head)
{
    if(head == nullptr)
        return head;
    ListNode* cur = head;
    ListNode* next_node = head->next;
    while(next_node)
    {
        if(cur->val != next_node->val)
        {
            cur->next = next_node;
            cur = next_node;            
        }
        next_node = next_node->next;
    }
    cur->next = next_node;
    return head;
}

ListNode *CFastSlowPointers::deleteMid(ListNode *head)
{
    if(head->next == nullptr)
        return nullptr;

    ListNode* slow = head, *fast = head;
    ListNode* prev = nullptr;
    while (fast != nullptr && fast->next != nullptr)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow is at mid
    prev->next = slow->next;
    
    return head;
}

ListNode *CFastSlowPointers::swapNodes(ListNode *head, int k)
{
    if(head->next == nullptr)
        return head;

    ListNode* slow = head, *fast = head;

    // find k-start
    int count = 1;
    while(count != k)
    {
        fast = fast->next;
        count++;
    }
    ListNode* k_start = fast;

    // find k-end
    while(fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }
    // slow is k_end;
    // swap
    int temp = k_start->val;
    k_start->val = slow->val;
    slow->val = temp;

    return head;
}
