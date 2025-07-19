class Solution {
  public:
    int f(int i,vector<int>&h,vector<int>&dp){
        if(i==0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        int left=f(i-1,h,dp)+abs(h[i]-h[i-1]);
        int right=INT_MAX;
        if(i>1)
         right=f(i-2,h,dp)+abs(h[i]-h[i-2]);
         int x=min(left,right);
     return dp[i]=x;
        
    }
  
    int minCost(vector<int>& h) {
        // Code here
        vector<int>dp(h.size()+1,-1);
        return f(h.size()-1,h,dp);
        
    }
};