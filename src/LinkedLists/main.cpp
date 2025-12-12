// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "FastSlowPointers.h"
#include "Reverse.h"

ListNode* create_list(std::vector<int> list)
{
    ListNode* head = new ListNode(list[0]);
    ListNode* temp = head;

    for(int i=1; i<list.size(); i++)
    {
        ListNode* node = new ListNode(list[i]);
        temp->next = node;
        temp = temp->next;
    }
    return head;
}

ListNode* create_looped_list(std::vector<int> list)
{
    ListNode* head = create_list(list);
    ListNode* temp = head;
    ListNode* last = temp;

    for(int i=1; i<=3; i++)        
        temp = temp->next;
    
    while(last->next)
        last = last->next;

    last->next = temp;

    return head;
}

void display(ListNode* head, bool looped = false)
{
    int count = 0;
    while(head)
    {
        count++;
        std::cout << head->val << " ";        
        head = head->next;
        if(looped)
        {
            if(count > 20)
            {
                std::cout << std::endl;
                return;
            }
        }
    }
    std::cout << std::endl;
}

void fast_slow(CFastSlowPointers& fs_ptrs)
{
    ListNode* list1 = create_list({1, 2, 3, 4, 5, 6, 7});
    ListNode* list2 = create_list({1, 2, 3, 4});
    ListNode* list3 = create_looped_list({1, 2, 3, 4, 5, 6, 7, 8});
    ListNode* list4 = create_list({1, 1, 2, 3, 3, 4, 4, 4, 5, 6, 6, 7});

    //
    std::cout << "-------------FAST SLOW-------------" << std::endl;    
    std::cout << "1. Mid: " << std::endl;
    std::cout << "   Input: ";
    display(list1);
    std::cout << "          " << fs_ptrs.getMid(list1)->val << std::endl;
    std::cout << "   Input: ";
    display(list2);
    std::cout << "          " << fs_ptrs.getMid(list2)->val << std::endl;
    //
    std::cout << "2. Is Looped: " << std::endl;    
    std::cout << "  Input: ";
    display(list1);
    std::cout << "         " << fs_ptrs.isListLooped(list1) << std::endl;    
    std::cout << "  Input: ";
    display(list3, true);
    std::cout << "         " << fs_ptrs.isListLooped(list3) << std::endl;
    //
    std::cout << "3. Find k from last: " << std::endl;
    std::cout << "         k = 3" << std::endl;
    std::cout << "  Input: ";
    display(list1);
    std::cout << "         " << fs_ptrs.findNode(list1, 3)->val << std::endl;
    //
    std::cout << "4. Remove duplicates: " << std::endl;    
    std::cout << "  Input: ";
    display(list1);
    std::cout << "         ";
    display(fs_ptrs.removeDuplicates(list1));
    std::cout << "  Input: ";
    display(list4);
    std::cout << "         ";
    display(fs_ptrs.removeDuplicates(list4));
    //
    list1 = create_list({1, 2, 3, 4, 5, 6, 7});
    std::cout << "5. Delete mid: " << std::endl;    
    std::cout << "  Input: ";
    display(list1);
    std::cout << "         ";
    display(fs_ptrs.deleteMid(list1));
    //    
    list1 = create_list({1, 2, 3, 4, 5, 6, 7});
    std::cout << "5. Swap Nodes: " << std::endl;    
    std::cout << "  Input: ";
    display(list1);    
    std::cout << "         k=2" << std::endl;
    std::cout << "         ";
    display(fs_ptrs.swapNodes(list1, 2));
}

void reverse(CReverse& rev)
{
    ListNode* list1 = create_list({1, 2, 3, 4, 5, 6, 7});
    ListNode* list2 = create_list({1, 2, 3, 4, 5, 6});
    ListNode* list3 = create_list({1, 2});
    ListNode* list4 = create_list({4, 2, 2, 3});
    ListNode* list5 = create_list({5});    
    std::cout << "-------------REVERSE-------------" << std::endl;    
    std::cout << "1. Reverse: " << std::endl;
    std::cout << "   Input: ";
    display(list1);
    std::cout << "          ";
    display(rev.reverse(list1));
    //
    list1 = create_list({1, 2, 3, 4, 5, 6, 7});
    std::cout << "2. Swap Pairs: " << std::endl;
    std::cout << "   Input: ";
    display(list1);
    std::cout << "          ";
    display(rev.swap_pairs(list1));
    std::cout << "   Input: ";
    display(list2);
    std::cout << "          ";
    display(rev.swap_pairs(list2));
    std::cout << "   Input: ";
    display(list3);
    std::cout << "          ";
    display(rev.swap_pairs(list3));
    //
    std::cout << "3. Max Twin Sum: " << std::endl;
    std::cout << "   Input: ";
    display(list4);
    std::cout << "          " << rev.max_twin_sum(list4) << std::endl;
    //
    list1 = create_list({1, 2, 3, 4, 5, 6, 7});
    std::cout << "4. Reverse Left->Right: " << std::endl;
    std::cout << "   Input: ";
    display(list1);
    std::cout << "          left: 2 right: 6" << std::endl;
    std::cout << "          ";
    display(rev.reverse_left_to_right(list1, 2, 6));
    std::cout << "   Input: ";
    display(list5);
    std::cout << "          left: 1 right: 1" << std::endl;
    std::cout << "          ";
    display(rev.reverse_left_to_right(list5, 1, 1));
    list3 = create_list({1, 2});
    std::cout << "   Input: ";
    display(list3);
    std::cout << "          left: 1 right: 1" << std::endl;
    std::cout << "          ";
    display(rev.reverse_left_to_right(list3, 1, 1));
    std::cout << "   Input: ";
    display(list3);
    std::cout << "          left: 1 right: 2" << std::endl;
    std::cout << "          ";
    display(rev.reverse_left_to_right(list3, 1, 2));
}

int main()
{
    CFastSlowPointers fs_ptrs;
    fast_slow(fs_ptrs);

    CReverse rev;
    reverse(rev);    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
