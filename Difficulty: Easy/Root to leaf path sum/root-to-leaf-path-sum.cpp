/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        if(!root){
            return false;
        }
        
        if(!root->left && !root->right){
            return target==root->data;
        }
        
        return hasPathSum(root->left,target-root->data) || hasPathSum(root->right,target-root->data );
    }
};