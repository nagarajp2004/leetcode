class Solution {
public:
    int f(int ind,int prev,vector<int>& nums,vector<vector<int>>&dp){
        if(ind==nums.size()){
            return 0;
        }
        if(dp[ind][prev+1]!=-1){
            return dp[ind][prev+1];
        }
        int nottake=f(ind+1,prev,nums,dp);
        int take;
        if(prev==-1 || nums[ind]>nums[prev]){
            take=1+f(ind+1,ind,nums,dp);
        }
        return dp[ind][prev+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,0));
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=-1;j--){
                int nottake=dp[i+1][j+1];
        int take=0;
        if(j==-1 || nums[i]>nums[j]){
            take=1+dp[i+1][i+1];
        }
         dp[i][j+1]=max(take,nottake);
            }
        }
        return dp[0][0];
    }
};