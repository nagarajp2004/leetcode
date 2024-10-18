class Solution {
public:
    bool recur(int ind,int tar,vector<int>&nums,vector<vector<int>>&dp){
        if(tar==0){
            return 1;
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind][tar]!=-1){
            return dp[ind][tar];
        }
        if(ind==0){
          return nums[0]==tar;
        }
    bool notake=recur(ind-1,tar,nums,dp);
       bool take=false;
        if(tar>=nums[ind])
        {
          
          take=recur(ind-1,tar-nums[ind],nums,dp);
        }

        return dp[ind][tar]=take | notake;
    }
    bool canPartition(vector<int>& nums)
     {
        int sum=0;
        if(nums.size()<=1){
            return 0;
        }

        for(int i=0;i<nums.size();i++)
        {
          sum+=nums[i];
        }
        if(sum%2!=0){
            return 0;
        }
        int tar=sum/2;
        vector<vector<int>>dp(nums.size(),vector<int>(tar+1,-1));
       return recur(nums.size()-1,tar,nums,dp);
    }
};