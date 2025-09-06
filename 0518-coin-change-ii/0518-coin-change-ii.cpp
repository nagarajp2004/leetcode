class Solution {
public:
    int f(int i,vector<int>&arr,int sum,vector<vector<int>>&dp){
        if(sum==0){
            return 1;
        }
        
          if(i==0){
            if(sum%arr[i]==0){
                return 1;
            }else{
                return 0;
            }
          }

          if(dp[i][sum]!=-1){
            return dp[i][sum];
          }
      
      int nottake =f(i-1,arr,sum,dp);
      int take=0;
      if(arr[i] <=sum){
        take=f(i,arr,sum-arr[i],dp);
      }
      return  dp[i][sum]=take +nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(n-1,coins,amount,dp);
    }
};