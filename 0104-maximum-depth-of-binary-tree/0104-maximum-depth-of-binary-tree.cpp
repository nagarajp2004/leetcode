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
   int traversal(TreeNode* root)
   {
      if(root==NULL){
           
        return 0;
      }
      return max(traversal(root->left),traversal(root->right))+1;

   }
    int maxDepth(TreeNode* root) 
    {
        
        
        return traversal(root);
    }
};