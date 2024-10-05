class Solution {
public:
     int recur(int n,int m,vector<vector<int>>&o,vector<vector<int>>& dp){
        if(n==0 && m==0){
           if(!o[n][m]) 
             return 1;
        }
        if(n<0 || m<0){
            return 0;
        }
        if(o[n][m]==1){
            dp[n][m]=0;
            return 0;
        }
        if(dp[n][m]!=-1){
          return dp[n][m];
        }
        return dp[n][m]=recur(n-1,m,o,dp)+recur(n,m-1,o,dp);
     }

    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int n=o.size();
      
        int m=o[0].size();
        vector<vector<int>>dp(n,vector<int> (m,-1));
        return recur(n-1,m-1,o,dp);
    }
};