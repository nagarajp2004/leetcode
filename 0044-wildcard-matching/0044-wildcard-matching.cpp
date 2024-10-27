class Solution {
public:
    bool f(int i, int j, string& s, string& p, vector<vector<int>>& dp) {
        if (i < 0 && j < 0) return true;  // Both strings are fully matched
        if (j < 0) return false;           // Pattern is exhausted but the string is not
        if (i < 0) {
            // Check if remaining pattern can only be matched by `*`
            for (int x = 0; x <= j; x++) {
                if (p[x] != '*') return false;
            }
            return true;
        }
        
        // Check if result is already computed
        if (dp[i][j] != -1) return dp[i][j];
        
        if (s[i] == p[j] || p[j] == '?') {
            return dp[i][j] = f(i - 1, j - 1, s, p, dp);
        }
        
        if (p[j] == '*') {
            // Try matching '*' with zero or more characters
            return dp[i][j] = f(i, j - 1, s, p, dp) || f(i - 1, j, s, p, dp);
        }
        
        return dp[i][j] = false;
    }

    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));  // Memoization table
        return f(n - 1, m - 1, s, p, dp);
    }
};
