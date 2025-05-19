/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode* ,TreeNode*> mpp;

    void parent(TreeNode* root)
    {
       if(root==NULL){
        return ;
       }
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty())
       {
         int n=q.size();
         for(int i=0;i<n;i++)
         {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
                mpp[temp->left]=temp;
            }
            if(temp->right){
                q.push(temp->right);
                mpp[temp->right]=temp;
            }

         } 

       }

    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
         parent(root);
        unordered_map<TreeNode*,int>vis;
        vis[target]=1;
      
      
        int  cur=0;
        queue<TreeNode*>q;
        q.push(target);
        
        while(!q.empty()){
          int n=q.size();
           if(cur==k){
            break;
           }
           cur++;
           for(int i=0;i<n;i++){

             TreeNode* temp=q.front();
             q.pop();
              
            if(temp->left && !vis[temp->left]){
                q.push(temp->left);
                vis[temp->left]=1;
            }
            if(temp->right && !vis[temp->right]){
                q.push(temp->right);
                vis[temp->right]=1;
            }
            if(mpp[temp] && !vis[mpp[temp]]){
                q.push(mpp[temp]);
                vis[mpp[temp]]=1;
            }

           }

        }
        vector<int>ans;
        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};