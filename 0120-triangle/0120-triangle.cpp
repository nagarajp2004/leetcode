class Solution {
public:
    int recur(int i,int j,int n,vector<vector<int>>& t,vector<vector<int>>& dp)
    {
         if(j>i)
         {
            return INT_MAX;
         }
      if(i==n-1)
      {
        return t[i][j];
      }
     if(dp[i][j]!=-1){
        return dp[i][j];
     }

 return dp[i][j]= t[i][j]+ min(recur(i+1,j,n,t,dp),recur(i+1,j+1,n,t,dp));

    }
  
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size();
        int m=n;
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return recur(0,0,n,t,dp);
    }
};