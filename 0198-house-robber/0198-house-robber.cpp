class Solution {
public:
   int  f(int i,vector<int>&nums,int can,vector<vector<int>>&dp){
      if(i==nums.size()){
        return 0;
      }
      if(dp[i][can]!=-1){
        return dp[i][can];
      }

      int profit=0;
    if(can){
     profit=max(f(i+1,nums,0,dp)+nums[i],f(i+1,nums,1,dp));
    }
    else{
        profit=max(f(i+1,nums,1,dp),f(i+1,nums,1,dp));
    }
    return dp[i][can]=profit;
   }

    int rob(vector<int>& nums) {
       int n=nums.size();
       vector<vector<int>>dp(n+1,vector<int>(2,-1));
       
        return f(0,nums,1,dp);  
    }
};