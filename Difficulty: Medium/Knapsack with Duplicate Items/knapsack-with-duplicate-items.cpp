// User function Template for C++

class Solution {
  public:
  
  int f(int i,vector<int>&val,vector<int>&wt,int cap,vector<vector<int>>&dp){
      
      if(i==0){
          return (cap/wt[0])*val[0];
      }
      if(dp[i][cap]!=-1){
          return dp[i][cap];
      }
      
      int not_take=f(i-1,val,wt,cap,dp);
      int take=-1e8;
      if(wt[i] <=cap){
          take =val[i] +f(i,val,wt,cap-wt[i],dp);
      }
      return dp[i][cap]=max(not_take, take);
      
  }
  
  
    int knapSack(vector<int>& val, vector<int>& wt, int cap) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(cap+1,-1));
        return f(n-1,val,wt,cap,dp);
    }
};