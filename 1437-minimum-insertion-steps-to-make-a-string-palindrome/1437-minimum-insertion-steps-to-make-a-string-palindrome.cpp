class Solution {
public:
    int f(int ind1,int ind2,string a,string b,vector<vector<int>>&dp){
        if(ind1==-1 || ind2==-1)
        {
            return 0;
        }
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        if(a[ind1]==b[ind2]){
        
            return dp[ind1][ind2]= 1 +(f(ind1-1,ind2-1,a,b,dp));
        }
        return dp[ind1][ind2]=max(f(ind1-1,ind2,a,b,dp),f(ind1,ind2-1,a,b,dp));
    }

    int minInsertions(string s) {
        string t=s;
         int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        reverse(s.begin(),s.end());
        for(int ind1=1;ind1<=n;ind1++){
            for(int ind2=1;ind2<=n;ind2++)
            {
                if(s[ind1-1]==t[ind2-1])
        {
        
             dp[ind1][ind2]= 1 +dp[ind1-1][ind2-1];
        }
      else
        dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
    }  
            }

            return n-dp[n][n];
        }
        
    
    
};