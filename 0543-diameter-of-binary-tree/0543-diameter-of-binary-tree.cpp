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
   int res=0;
    int f(TreeNode* root){
        if(root ==NULL){
            return 0;
        }
        int l=f(root->left);
        int r=f(root->right);

        res=max(res,l+r);

        return max(l,r)+1;
    }

    int diameterOfBinaryTree(TreeNode* root)
    {
         f(root);
         return res;;
    }
};