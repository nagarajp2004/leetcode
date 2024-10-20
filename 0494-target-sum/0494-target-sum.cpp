class Solution {
public:
    int f(int ind,int tar,vector<int>&nums,vector<vector<int>>&dp)
    {
    
          if (ind == 0) {
        if (tar == 0 && nums[0] == 0)
            return 2; // Two ways to partition: include or exclude the element
        if (tar == 0 || tar == nums[0])
            return 1; // One way to partition: include or exclude the element
        return 0; // No way to partition
    }
   
        if(dp[ind][tar]!=-1)
         return dp[ind][tar];
        int nottake=f(ind-1,tar,nums,dp);
        int take=0;
        if(tar>=nums[ind]){
           take=f(ind-1,tar-nums[ind],nums,dp);
        }
        return dp[ind][tar]=take+nottake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=accumulate(nums.begin(),nums.end(),0);
      if (sum < target || (sum - target) % 2 != 0) {
            return 0;
        }
        int ans=(sum-target)/2;
        if(ans<0){
          return 0;
        }

        vector<vector<int>>dp(nums.size(),vector<int>(ans+1,-1));
        return f(nums.size()-1,ans,nums,dp);
    }
};