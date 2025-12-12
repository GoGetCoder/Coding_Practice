#include "Reverse.h"
#include <algorithm>

ListNode *CReverse::reverse(ListNode *head)
{
    if(head == nullptr)
        return head;
    
    ListNode* cur = head;
    ListNode* prev = nullptr;    
    while(cur)
    {
        ListNode* next_node = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next_node;
    }
    return prev;
}

ListNode *CReverse::swap_pairs(ListNode *head)
{
    if(head == nullptr || head->next == nullptr)
        return head;

    ListNode* new_head = head->next;
    ListNode* prev = head;
    ListNode* cur = head->next;
    while(cur)
    {
        ListNode* next_node = cur->next;
        cur->next = prev;
        if(next_node)
        {
            if(next_node->next)
                prev->next = next_node->next;
            else
                prev->next = next_node;
            prev = next_node;         
        }
        else
        {
            prev->next = nullptr;
        }
        cur = prev->next;
    }
    return new_head;    
}

int CReverse::max_twin_sum(ListNode *head)
{
    ListNode* slow = head;
    ListNode* fast = head;

    // find mid
    while(fast)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* mid = slow;
  
    // reverse second-half
    ListNode* prev = nullptr;
    ListNode* cur = mid;
    while(cur)
    {
        ListNode* nextNode = cur->next;
        cur->next = prev;
        prev = cur; cur = nextNode;
    }

    // find max sum
    ListNode* left = head;
    ListNode* right = prev;
    int max_sum = INT_MIN;
    while(right)
    {
        int sum = left->val + right->val;
        max_sum = std::max(max_sum, sum);
        right = right->next; left = left->next;
    }

    return max_sum;
}

ListNode *CReverse::reverse_left_to_right(ListNode* head, int left, int right)
{
    if(head->next == nullptr)
        return head;

    ListNode* left_ptr = head, *right_ptr = head;
    int pos = 1;

    // find left & start
    ListNode* prev = nullptr;
    ListNode* temp = head;
    while(pos != left)
    {
        prev = temp;
        temp = temp->next;    
        pos++;
    }
    left_ptr = temp;
    ListNode* start = prev;    

    // find right & end
    temp = left_ptr;    
    while(pos != right)
    {
        temp = temp->next;
        pos++;
    }
    right_ptr = temp;
    ListNode* end = right_ptr->next;

    // reverse left-right
    prev = nullptr;
    ListNode* cur = left_ptr;
    while(cur != end)
    {
        ListNode* nextNode = cur->next;
        cur->next = prev;
        prev = cur; cur = nextNode;
    }
    
    // splice the reverse list
    left_ptr->next = end;    
    if(start)
    {
        start->next = right_ptr;
        return head;
    }
    else
    {
        return right_ptr;
    }
}