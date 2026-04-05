/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* findPred(TreeNode* root){
        while(root->right != NULL){
            root = root->right;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        if(key < root->val) root->left = deleteNode(root->left,key);
        else if(key > root->val) root->right = deleteNode(root->right,key);
        else{
            // root == key
            //leaf Node
            if(root->left == NULL && root->right == NULL) return NULL;
            //single child
            if(root->left == NULL) return root->right;
            else if(root->right == NULL) return root->left;
            //double child
            TreeNode* pred = findPred(root->left);
            root->val = pred->val;
            root->left = deleteNode(root->left,pred->val);
        }
        return root;
    }
};