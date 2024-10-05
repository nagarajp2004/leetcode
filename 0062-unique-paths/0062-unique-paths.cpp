class Solution {
public:
    int recur(int n,int m,vector<vector<int>>&dp){
        if(n==0 && m==0){
            return 1;
        }
        if(n<0 || m<0){
            return 0;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        return dp[n][m]=(recur(n-1,m,dp)+recur(n,m-1,dp));
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return recur(m-1,n-1,dp);
    }
};