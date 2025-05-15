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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*>left,right;
      
        vector<vector<int>>ans;
         if(root==NULL){
            return ans;
         }
       right.push(root);

       while(!right.empty() || !left.empty())
       {    if(right.empty() && left.empty()){
              break;
                }

            if(left.empty())
            {
                  vector<int>temp;
                  int n=right.size();
                  for(int i=0;i<n;i++){
                    TreeNode* d=right.top();
                    right.pop();
                    temp.push_back(d->val);
                    if(d->left)
                    left.push(d->left);
                    if(d->right)
                    left.push(d->right);
                  }
               ans.push_back(temp);
               
            }else if(right.empty())
            {
                 vector<int>temp;
                  int n=left.size();
                  for(int i=0;i<n;i++){
                    TreeNode* d=left.top();
                    left.pop();
                    temp.push_back(d->val);
                    if(d->right)
                    right.push(d->right);
                    if(d->left)
                    right.push(d->left);
                  }
               ans.push_back(temp);
            }

       } 
      return ans;
    }
};