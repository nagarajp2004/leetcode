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
     bool ans=true;

    int  f(TreeNode* root)
    {
        if(root==NULL){
            return 0;
        }
      int x=f(root->left);
      int y=f(root->right);
       
       if(x==-1 || y==-1){
        return -1;
       }
       int diff=abs(x-y);
       if(diff >1){
        ans=false;
        return -1;
       }
       
       return max(x,y)+1;
    }

    bool isBalanced(TreeNode* root) 
    {
         f(root);
         return ans;
    }
};