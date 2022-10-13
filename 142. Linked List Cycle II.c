/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    if(head==NULL){
        return NULL;
    }
        
    if(head->next==NULL ){
        return NULL;
    }
    struct ListNode *frontNode = head;
    struct ListNode *endNode = head;
    int endpos = 0;
    while(1){
        for(int i = 0; i<endpos;i++){
            if (endNode->next ==NULL){
                return NULL;
            }
            else if(endNode->next == frontNode){
                return frontNode;
            }
            frontNode = frontNode->next;
        }
        frontNode = head;
        endNode = endNode->next;
        endpos++;
    }
    return NULL;
}