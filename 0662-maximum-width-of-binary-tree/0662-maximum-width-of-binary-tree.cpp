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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long >>q;
        int maxi=-1;
        q.push({root,0});
        while(!q.empty()){
            int start=q.front().second;
            int end=q.back().second;
            int n=q.size();
           maxi=max(maxi,end-start+1);
           for(int i=0;i<n;i++)
           {
             
             pair<TreeNode* ,int>p=q.front();
             q.pop();
          long long  ind=p.second-start;
             
             if(p.first->left){
                q.push({p.first->left,(long long )2*ind+1});
             }

             if(p.first->right){
                q.push({p.first->right,(long long )2*ind+2});
             }
           }
            
        }
        return maxi;
    }
};