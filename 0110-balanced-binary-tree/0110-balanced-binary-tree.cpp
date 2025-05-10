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
    int recur(TreeNode* root)
    {
        if(root==NULL){
            return 0;
        }

        int max_height=recur(root->left);
         if(max_height==-1){
            return -1;
         }

         int max_height2=recur(root->right);
         if(max_height2==-1){
            return -1;
         }

         if(abs(max_height2-max_height)>1){
              return -1;
         }

         return max(max_height,max_height2)+1;
         
    }

    bool isBalanced(TreeNode* root) {
        return recur(root)==-1?false:true;;
    }
};