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
     TreeNode* build(vector<int>&in,deque<int>&post)
     {
         if(post.empty() || in.empty()){
            return NULL;
         }
         int val=post.front();
         TreeNode* root=new TreeNode(val);
         post.pop_front();
       
         auto id=find(in.begin(),in.end(),val);
         int indx=id-in.begin();
          
          vector<int>right(in.begin()+indx+1,in.end());
          vector<int>left(in.begin(),in.begin()+indx);
 

         root->right=build(right,post);
         root->left=build(left,post);

         return root;
     }


    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        reverse(post.begin(),post.end());
        deque<int>p(post.begin(),post.end());
        
        return build(in,p);
        
    }
};