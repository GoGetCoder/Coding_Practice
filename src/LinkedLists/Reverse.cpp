#include "Reverse.h"

ListNode* CReverse::swap_pairs(ListNode* head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode* first = head;
    ListNode* second = head->next;
    ListNode* prev = first;

    head = second;

    while (first && second)
    {
        ListNode* next_node = second->next;
        second->next = first;

        if (next_node && next_node->next)
            prev->next = next_node->next;
        else if (next_node)
            prev->next = next_node;
        else
            prev->next = nullptr;

        first = next_node;
        if (first)
            second = first->next;
        prev = first;       
    }

    return head;
}
