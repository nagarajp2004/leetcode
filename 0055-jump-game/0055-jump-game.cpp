class Solution {
public:
 

    bool canJump(vector<int>& nums) {
        int n=nums.size();
         vector<int>dp(nums.size(),0);
        dp[nums.size()-1]=1;
        for(int i=n-2;i>=0;i--){
            for(int j=nums[i];j>=0;j--){
                if(i+j <n){
                   bool x=false;
                   x=dp[i+j];
                   if(x==1){
                    dp[i]=1;
                   }
                }
            }
        }
        return dp[0];
    }
};