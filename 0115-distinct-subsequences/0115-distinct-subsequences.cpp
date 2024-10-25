class Solution {
public:
    int f(int i,int j,string a,string b)
    {    
            if(j<0)
        {
            return 1;
        }
        if(i<0)
        {
            return 0;
        }
   
        
        if(a[i]==b[j])
        {
            return f(i-1,j-1,a,b)+f(i-1,j,a,b);
        }
        else{
            return f(i-1,j,a,b);
        }
    } 



    int numDistinct(string s, string t) {
      int n=s.size();
      int m=t.size();
      vector<vector<double>>dp(n+1,vector<double>(m+1,0));
     for(int i=0;i<=n;i++){
        dp[i][0]=1;
     } 
      
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
          if(s[i-1]==t[j-1])
        {
         dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
        else{
          dp[i][j]=dp[i-1][j];
        }  
        }
      }
      return  dp[n][m];        

    }
};