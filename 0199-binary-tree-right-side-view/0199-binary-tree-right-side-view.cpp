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
    vector<int> rightSideView(TreeNode* root) {        
        vector<int> ans(100);
       
       if(root==NULL){
        return {};
       }
        int row=0;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int n=q.size();
            TreeNode* temp;
            for(int i=0;i<n;i++){
              temp=q.front();
              q.pop();

              if(temp->left)
                q.push(temp->left);

              if(temp->right)
                q.push(temp->right);  

            }
            ans[row++]=temp->val;
        }

        vector<int>x(ans.begin(),ans.begin()+row);
        return x;

    }
};