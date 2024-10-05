class Solution {
public:
     int recur(int n,int m,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(n==0 && m==0){
            return grid[0][0];
        }
        if(n<0 || m<0){
            return INT_MAX;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        return dp[n][m]=grid[n][m]+min(recur(n-1,m,grid,dp),recur(n,m-1,grid,dp));
     }
    
    int minPathSum(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       vector<vector<int>>dp(n,vector<int> (m,-1));
     return  recur(n-1,m-1,grid,dp);
    }
};