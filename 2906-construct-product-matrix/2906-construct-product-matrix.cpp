class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 1));

        long long ind = 1;
        int mod = 12345;

        // Prefix pass
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                dp[i][j] = ind;
                ind = (ind * grid[i][j]) % mod;
            }
        }

        // Reset for suffix
        ind = 1;

        // Suffix pass
        for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                dp[i][j] = (dp[i][j] * ind) % mod;
                ind = (ind * grid[i][j]) % mod;
            }
        }

        return dp;
    }
};