class Solution {
public:
    int f(int i,int buy ,vector<int>& p,vector<vector<int>>&dp){
        if(i>=p.size()){
            return 0;
        } 
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        int ans=0;

        if(buy){
         ans=max(-p[i]+f(i+1,0,p,dp),f(i+1,1,p,dp));
        }else{
          ans=max(p[i]+f(i+2,1,p,dp),f(i+1,0,p,dp));
        }
        return dp[i][buy]=ans;
    }

    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,prices,dp);
    }
};