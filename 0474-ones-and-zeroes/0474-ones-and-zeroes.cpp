class Solution {
public:
    int f(int i, vector<string>& strs, int m, int n, vector<vector<vector<int>>>& dp) {
        if (i < 0) return 0;
        if (dp[i][m][n] != -1) return dp[i][m][n];

        int zeros = count(strs[i].begin(), strs[i].end(), '0');
        int ones = count(strs[i].begin(), strs[i].end(), '1');

        // Option 1: skip current string
        int notTake = f(i - 1, strs, m, n, dp);

        // Option 2: take current string (if possible)
        int take = 0;
        if (zeros <= m && ones <= n)
            take = 1 + f(i - 1, strs, m - zeros, n - ones, dp);

        return dp[i][m][n] = max(take, notTake);
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        int size = strs.size();
        // 3D DP: dp[i][m][n] stores result for first i strings, m zeros, n ones
        vector<vector<vector<int>>> dp(size, vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));

        return f(size - 1, strs, m, n, dp);
    }
};
