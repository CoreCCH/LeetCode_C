/*Runtime: 0 ms, faster than 100.00% of C online submissions for Remove Nth Node From End of List.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* fristNode = head;
    struct ListNode* secondNode = head;
    for(int i = 0; i < n; i++){
        secondNode = secondNode->next;
        if(secondNode==NULL){
            head = head->next;
            return head;
        }
    }
    while(secondNode){
        if(secondNode->next == NULL){
            fristNode->next = fristNode->next->next;
        }
        fristNode = fristNode->next;
        secondNode = secondNode->next;
    }
    return head;
}