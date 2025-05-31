class Solution {
public:
    int f(vector<vector<char>>& mat, int i, int j, vector<vector<int>>& dp, int& maxi) {
        int n = mat.size();
        int m = mat[0].size();
        if (i >= n || j >= m) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        int right = f(mat, i, j + 1, dp, maxi);
        int down = f(mat, i + 1, j, dp, maxi);
        int diag = f(mat, i + 1, j + 1, dp, maxi);

        int cur = 0;
        if (mat[i][j] == '1') {
            cur = min({right, down, diag}) + 1;
            maxi = max(maxi, cur);
        }
        return dp[i][j] = cur;
    }

    int maximalSquare(vector<vector<char>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int maxi = 0;
         int i=0,j=0;
        
                f(mat, i, j, dp, maxi);

        return maxi * maxi;
    }
};
