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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<tuple<TreeNode* ,int ,int>>q;
        map<int,vector<pair<int,int>>>mpp;

        q.push({root,0,0});
        while(!q.empty()){
            int n=q.size();

            for(int i=0;i<n;i++)
            {
                 auto [node,x,y] =q.front();
                 q.pop();
                 if(node->left){
                    q.push({node->left,x+1,y-1});
                 }
                 if(node->right){
                    q.push({node->right,x+1,y+1});
                 }
                 mpp[y].push_back({node->val,x});
            }
        }
  vector<vector<int>>res;

  for(auto it:mpp){
    sort(it.second.begin(),it.second.end(),[](pair<int,int>& a,pair<int,int>&b){
      
      if(a.second==b.second) return  a.first<b.first;
      return a.second <b.second;

    });

    vector<int>temp;
    for(auto p: it.second)  
     temp.push_back(p.first);
     res.push_back(temp);
  }
return res;
    }
};