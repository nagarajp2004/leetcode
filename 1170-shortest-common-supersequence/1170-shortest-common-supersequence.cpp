class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
      int n=a.size();
      int m=b.size();
      vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
      }
      
      string ans="";
      
      int i=n;
      int j=m;
     while(i>0 && j>0)
     {
        if(a[i-1]==b[j-1]){
            ans+=a[i-1];
            i=i-1;
            j=j-1;
        }
        else {
           

            if(dp[i-1][j]>=dp[i][j-1]){
                ans+=a[i-1];
                i--;
            }
            else{
                ans+=b[j-1];
                j--;
            }
        }
     } 
    while(i>0){
        ans+=a[i-1];
        i--;
    }
    while(j>0){
        ans+=b[j-1];
        j--;
    }

     
      reverse(ans.begin(),ans.end());
     return ans;
    }
};