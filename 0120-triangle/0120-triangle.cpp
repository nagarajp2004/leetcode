class Solution {
public:
    int f(vector<vector<int>>& tr, vector<vector<int>>&dp,int i,int j,int n){
        
        if(j>i || i>=n){
            return 0;
        }
  if(dp[i][j]!=-1){
    return dp[i][j];
  }

     return dp[i][j]=min(f(tr,dp,i+1,j,n),f(tr,dp,i+1,j+1,n))+tr[i][j];

    }

    int minimumTotal(vector<vector<int>>& tr) {
       int n=tr.size();
       vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(tr,dp,0,0,n);
    }
};