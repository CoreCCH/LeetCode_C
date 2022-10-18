/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode NODE;

struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2){
    
    if(root1 == NULL){
        return root2;
    }
    else if(root2 == NULL){
        return root1;
    }
    NODE *ret = calloc(1, sizeof(NODE));
    ret->val = root1->val + root2->val;
    if(root1->left != NULL || root2->left != NULL){
        ret->left=mergeTrees(root1->left,root2->left);
    }
    if(root1->right !=NULL || root2->right!=NULL){
        ret->right=mergeTrees(root1->right,root2->right);
    }
        
    return ret;
}