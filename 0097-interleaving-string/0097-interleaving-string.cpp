class Solution {
public:
    vector<vector<int>> dp;

    bool helper(int i, int j, const string &s1, const string &s2, const string &s3) {
        int k = i + j;

        if (k == s3.size()) return true;

        if (dp[i][j] != -1) return dp[i][j];

        bool t1 = false, t2 = false;

        if (i < s1.size() && s1[i] == s3[k]) {
            t1 = helper(i + 1, j, s1, s2, s3);
        }

        if (j < s2.size() && s2[j] == s3[k]) {
            t2 = helper(i, j + 1, s1, s2, s3);
        }

        return dp[i][j] = (t1 || t2);
    }

    bool isInterleave(string s1, string s2, string s3) {
        if (s1.length() + s2.length() != s3.length()) return false;

        dp.assign(s1.size() + 1, vector<int>(s2.size() + 1, -1));
        return helper(0, 0, s1, s2, s3);
    }
};
