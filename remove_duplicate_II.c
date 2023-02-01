/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head){
        if (!head || !head->next) return head;
    
    struct ListNode *dummy = (struct ListNode *) malloc(sizeof(struct ListNode));
    dummy->next = head;
    head = dummy;
    
    while (head->next && head->next->next) {
        if (head->next->val == head->next->next->val) {
            int val = head->next->val;
            while (head->next && head->next->val == val) {
                head->next = head->next->next;
            }
        } else {
            head = head->next;
        }
    }
    
    return dummy->next;
}
