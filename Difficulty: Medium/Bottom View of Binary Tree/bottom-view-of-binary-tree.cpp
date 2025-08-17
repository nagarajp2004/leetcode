/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
  
  
    void f(Node* root, map<int,pair<int,int>>&mpp,int col ,int row){
       if(root==NULL){
           return ;
       }
       
       if(mpp.find(col)==mpp.end() || (mpp[col].first <= row)){
           mpp[col]={row,root->data};
       }
       
       f(root->left,mpp,col-1,row+1);
       f(root->right,mpp,col+1,row+1);
   }
  
  
    vector<int> bottomView(Node *root) {
        // Your Code Here
         map<int,pair<int,int>>mpp;
         f(root,mpp,0,0);
        vector<int>ans;
        for(auto [i,j]:mpp){
            ans.push_back(j.second);
        }
        return ans;
    }
};