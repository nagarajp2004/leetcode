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
      vector<int>dp(tr[n-1]);

      for(int r=n-2;r>=0;r--){
        for(int c=0;c<=r;c++){
            dp[c]=min(dp[c],dp[c+1])+tr[r][c];
        }
      }
     return dp[0];     
  
    }
};