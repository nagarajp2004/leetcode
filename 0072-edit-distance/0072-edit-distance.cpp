class Solution {
 public:
    int f(int i,int j,string a,string b,vector<vector<int>>&dp){
       if(j==0){
        return i;
       }
       if(i==0){
        return j;
       }
       if(dp[i][j]!=-1){
        return dp[i][j];
       }        

        if(a[i-1]==b[j-1])
        {
            return dp[i][j]=f(i-1,j-1,a,b,dp);
        }
        else
        {
            return dp[i][j]=1+ min(f(i,j-1,a,b,dp),min(f(i-1,j-1,a,b,dp),f(i-1,j,a,b,dp)));
        }
    }
    int minDistance(string word1, string word2)
     {
     int n=word1.size();
     int m=word2.size();
     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
     return f(n,m,word1,word2,dp);    
    }
};