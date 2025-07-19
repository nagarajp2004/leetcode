class Solution {
public:
     int f(int i,vector<int>& nums)
     {
         if(i<0){
            return 0;
         }

         return max(f(i-2,nums)+nums[i] ,f(i-1,nums));
     }
    int rob(vector<int>& nums)
    {   int n=nums.size();
         vector<int>dp(n+1,0);
         for(int i=1;i<=n;i++){
            if(i>1){
                dp[i]=max(dp[i-2]+nums[i-1],dp[i-1]);
            }else{
               dp[i]=max(nums[i-1],dp[i-1]);
            }
         }
         return dp[n];

       
    }
};