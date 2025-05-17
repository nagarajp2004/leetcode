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
    int preindex;
    unordered_map<int,int>mpp;
    TreeNode* build(vector<int>& preorder,int start,int end){
        
        if(start>end){
            return NULL;
        }
        int val=preorder[preindex];
        preindex++;
        int index=mpp[val];
        TreeNode* node=new TreeNode(val);

      node->left=build(preorder,start,index-1);
      node->right=build(preorder,index+1,end);
        return node;
    }


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        preindex=0;
       return  build(preorder,0,inorder.size()-1);
      
    }
};