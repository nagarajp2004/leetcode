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
        
        stack<TreeNode*>stl;
        stack<TreeNode*>str;
        
         if(root==NULL){
            return {};
         }
        str.push(root);
        vector<vector<int>>ans;

        while(!stl.empty() || !str.empty()){
            if(stl.empty() && str.empty()){
              break;
            }
           vector<int>x;
            if(stl.empty()){
                 while(!str.empty()){
                    TreeNode* temp=str.top();
                    str.pop();
                     
                     if(temp->left){
                        stl.push(temp->left);
                     }
                     if(temp->right){
                        stl.push(temp->right);
                     }
                     x.push_back(temp->val);
                 }
            }else{

                while(!stl.empty()){
                    TreeNode* temp=stl.top();
                    stl.pop();
                     
                     if(temp->right){
                        str.push(temp->right);
                     }
                     if(temp->left){
                        str.push(temp->left);
                     }
                     x.push_back(temp->val);
                 }


            }

            ans.push_back(x);
        }
        return ans;
    }
};