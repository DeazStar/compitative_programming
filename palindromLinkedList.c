/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
        struct ListNode *slow = head, *fast = head, *prev = NULL;
    while (fast && fast->next) {
        fast = fast->next->next;
        struct ListNode *next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    if (fast) slow = slow->next;

    while (slow && prev) {
        if (slow->val != prev->val) return false;
        slow = slow->next;
        prev = prev->next;
    }

    return true;
}
