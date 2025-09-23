class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

      vector<vector<int>>dp(n,vector<int>(m,0));

      for(int i=0;i<m;i++){
        dp[0][i]=mat[0][i];
      }

      for(int i=0;i<n;i++){
        dp[i][0] =mat[i][0];
      }
   
      for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(mat[i][j]==1){
                 dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) +1;
            }else{
                dp[i][j]=0;
            }
        }
      }

     int ans=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans+=dp[i][j];
        }
     }
 
return ans;
    }
};