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
    bool isleaf(TreeNode* root){
        if(root->right==NULL && root->left==NULL){
           return true;
        }
        return false;
    }
    void dfs(TreeNode* root,int& t,int sum){
        if(root==NULL){
            return ;
        }
        if(isleaf(root)){
        sum=sum*10+ (root->val);
            t+=sum;
            
            return ;
        }
        sum=sum*10+ (root->val);
        dfs(root->left,t,sum);
        dfs(root->right,t,sum);
    }


    int sumNumbers(TreeNode* root) 
    {
        int t=0;
        int s=0;
        dfs(root,t,s);
        return t;
    }
};