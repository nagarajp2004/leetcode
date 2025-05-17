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
      TreeNode* build(deque<int>& preorder,vector<int> inorder)
      {
          if(preorder.empty()){
            return NULL;
          }
          if(inorder.empty()){
            return NULL;
          }

          int val=preorder.front();
          preorder.pop_front();
          auto i=find(inorder.begin(),inorder.end(),val);
          int index= i- inorder.begin();
          TreeNode* root=new TreeNode(val);
        vector<int>nlin(inorder.begin(), inorder.begin() + index);
        vector<int>nrin(inorder.begin()+index+1,inorder.end());
         
         root->left=build(preorder,nlin);
         root->right=build(preorder,nrin);
         return root;

      } 

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        deque<int> pre(preorder.begin(),preorder.end());
        return build(pre,inorder);
        
    }
};