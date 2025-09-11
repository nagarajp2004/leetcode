class Solution {
public:
    int f(int i,int buy,vector<int>&p,vector<vector<int>>&dp){
        if(i==p.size()){
            return 0;
        }
        if(dp[i][buy] !=-1){
            return dp[i][buy];
        }
       int profit=INT_MIN;
        if(buy){
           profit=max(-p[i] + f(i+1,0,p,dp),f(i+1,1,p,dp));
        }else{
           profit=max(p[i]+f(i+1,1,p,dp),f(i+1,0,p,dp));
        }
        return dp[i][buy]= profit;
    }

    int maxProfit(vector<int>& p) {
          int n=p.size();
          vector<vector<int>>dp(n+1,vector<int>(2,0));
          for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
               if(j==1){
                dp[i][j]=max(-p[i]+dp[i+1][0],dp[i+1][1]);
               }else{
                dp[i][j]=max(p[i]+dp[i+1][1],dp[i+1][0]);
               }
            }
          }
          return dp[0][1];
    }
};