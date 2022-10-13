/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* counter;
    counter = head;
    int count = 0;
    while(counter){
        count++;
        counter= counter->next;
    }
    for(int i = 0; i<(count/2); i++){
        head = head->next;
    }
    return head;
}