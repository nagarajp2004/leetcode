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
long long  prev=1ll*INT_MIN-1000;
  bool inorder(TreeNode* root){
      if(root==NULL){
        return true;
      } 
      bool a=inorder(root->left);
      if(prev>=root->val){
        return false;
      }
      prev=root->val;
      bool b=inorder(root->right);
  return a&&b; 
  }
    bool isValidBST(TreeNode* root) {
        if(root->right==NULL && root->left==NULL){
            return true;
        }
        return inorder(root);
    }
};