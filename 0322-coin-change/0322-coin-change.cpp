class Solution {
 public:
     int f(int ind, int t,vector<int>&nums, vector<vector<int>>&dp)
     {      
         
            if(ind==0){
                if(t%nums[0]==0){
                    return t/nums[0];
                }
                else{
                    return 1e9;
                }
            }
            if(dp[ind][t]!=-1){
                return dp[ind][t];
            }
            int notake=0+f(ind-1,t,nums,dp);
            int take=INT_MAX;
            if(nums[ind]<=t){
                take=1+f(ind,t-nums[ind],nums,dp);
            }
            return dp[ind][t]=min(take,notake);
     }
    int coinChange(vector<int>& coins, int amount) {
     vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
     int res= f(coins.size()-1,amount,coins,dp);
    if(res==1e9){
        return -1;
    }
    return res;
    }
};