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
    bool isleaf(TreeNode* node){
        if(node->left==NULL && node->right==NULL){
            return true;
        }
        return false;
    }
  bool dfs(TreeNode* node,int sum){

       if(node==NULL){
          return false;
        }
      if(isleaf(node) && (node->val-sum)==0){
        return true;
      }    

     return  dfs(node->left,sum-node->val)||
      dfs(node->right,sum-node->val); 

  
  }



    bool hasPathSum(TreeNode* root, int t) {
        return dfs(root,t);
    }
};