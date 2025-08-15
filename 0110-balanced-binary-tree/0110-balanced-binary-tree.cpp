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
    int f(TreeNode* root,bool& val)
    {
        if(root==NULL){
            return 0;
        }
        if(val==false){
            return 0;
        }
      
       int l=f(root->left,val);
       int r=f(root->right,val);

       if(abs(r-l) >1){
        val=false;
       return 0;
       }

       return 1+ max(l,r);


    }

    bool isBalanced(TreeNode* root)
    {
        bool val=true;
        f(root,val);
       return val;
    }
};