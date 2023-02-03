/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdbool.h>

bool is_noteven(int i)
{
    if (i % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* tmp = head;
    int i = 0;
    int total;
    int n;
    while (tmp->next)
    {
        tmp = tmp->next;
        i++;
    }
    
    if (is_noteven(i))
    {
        n = (i + 1) / 2;
    }
    else 
    {
        n = (i / 2) + 1;
    }
    
    total = i;
    
    tmp = head;
    i = 0;
    if (is_noteven(total))
    {
        while(i < n)
        {
            tmp = tmp->next;
            i++;
        }
    
    }
    else
    {
        while(i < n - 1)
        {
            tmp = tmp->next;
            i++;
        }
    }

    return tmp;
}
