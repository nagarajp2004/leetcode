class Solution {
public:
      int f(int ind,int tar,vector<int>& coins,vector<vector<int>>&dp)
      {
        if(tar==0)
        {
            return 1;
        }
         if(ind==0)
         {
            if(tar%coins[0]==0)
            {
                return 1;
            }
            return 0;
         }
        if(dp[ind][tar]!=-1){
            return dp[ind][tar];
        }
      int nottake=f(ind-1,tar,coins,dp);
      int take=0;
      if(tar>=coins[ind])
      {
          take=f(ind,tar-coins[ind],coins,dp);
      }
     return dp[ind][tar]=take+nottake;
      }
    int change(int amount, vector<int>& coins)
    {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
       return f(coins.size()-1,amount,coins,dp); 
    }
};