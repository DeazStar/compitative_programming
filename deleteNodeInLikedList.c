/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *next_node; 
    next_node = node->next;
    node->val = next_node->val;
    
    node->next = next_node->next;
    
    free(next_node);
}
