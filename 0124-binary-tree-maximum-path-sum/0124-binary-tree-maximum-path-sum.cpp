class Solution {
public:
    int maxi = INT_MIN;

    int recur(TreeNode* root) {
        if (!root) return 0;

        int l = max(0, recur(root->left));   // Ignore negative branches
        int r = max(0, recur(root->right));

        maxi = max(maxi, l + r + root->val); // Path that goes through the current node

        return root->val + max(l, r); // Path that can be extended upward
    }

    int maxPathSum(TreeNode* root) {
        recur(root);
        return maxi;
    }
};
