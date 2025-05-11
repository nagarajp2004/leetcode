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
int res=INT_MIN;
    int recur(TreeNode* root){
        if(!root){
            return 0;
        }
        int left=recur(root->left);
        int right=recur(root->right);

        res=max(res,left+right);
      
        return max(left,right)+1;

    } 
    int diameterOfBinaryTree(TreeNode* root) {
       int x=recur(root);
        return res;
    }
};