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
   int maxi=INT_MIN;
   int  dfs(TreeNode* root){
        if(root==NULL)
        {
            return 0;
        }

        if(root->left==NULL && root->right ==NULL){
            maxi=max(maxi,root->val);
            return root->val;
        }

        int left=max(0,dfs(root->left));
        int right=max(0,dfs(root->right));

        maxi=max(maxi,left+right+root->val);
        return max(left,right)+root->val;

   }

    int maxPathSum(TreeNode* root) 
    {
        dfs(root);
        return maxi;
    }
};