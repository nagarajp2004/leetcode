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
    int f(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int l=f(root->left);
        int r=f(root->right);
        if(l<0){
            l=0;
        }
        if(r<0){
            r=0;
        }

        maxi=max(maxi, l+(root->val)+r);

        return root->val + max(l,r);
    }

    int maxPathSum(TreeNode* root) {
        f(root);
        if(root->val > maxi){
            return root->val;
        }   

        return maxi;
    }
};