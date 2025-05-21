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
    int get_r(TreeNode* root){
               if(root==NULL){
                return 0;
               }
               int x=0;
               TreeNode* temp=root;
               while(temp){
                x++;
                temp=temp->right;
               }
               return x;
    }
    int get_l(TreeNode* root){
            if(root==NULL){
                return 0;
               }
               int x=0;
               TreeNode* temp=root;
               while(temp){
                x++;
                temp=temp->left;
               }
               return x;
    }

    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
   int l=get_l(root);
   int r=get_r(root);
    if(l==r){
        return pow(2,l)-1;
    }
    return 1+countNodes(root->left)+countNodes(root->right);
    }
};