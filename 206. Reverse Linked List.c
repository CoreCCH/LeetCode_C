/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* preNode = NULL;
    struct ListNode* nextNode = NULL;
    
    while(head){
        nextNode = head->next;
        head->next = preNode;
        preNode = head;
        head = nextNode;
    }
    return preNode;
}
