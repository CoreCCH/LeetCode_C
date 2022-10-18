/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

typedef struct Node NODE;
struct Node* connect(struct Node* root) {
    if(root == NULL){
        return NULL;
    }
    if(root->left != NULL){
        root->left->next = root->right;
    }
    if(root->next!=NULL && root ->left != NULL){
        root->right->next = root->next->left;
    }
    connect(root->left);
    connect(root->right);
    
    return root;
}