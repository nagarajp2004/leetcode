class Solution {
public:
    int f(int i,int j,string s1,string s2,  vector<vector<int>>&vt){
          if(i==-1){
            return j+1;
          }
          if(j==-1){
            return i+1;
          }
        if(vt[i][j]!=-1){
            return vt[i][j];
        }

        if(s1[i]==s2[j]){
         return vt[i][j]=f(i-1,j-1,s1,s2,vt);
        }

        return vt[i][j]=1+min(f(i,j-1,s1,s2,vt),min(f(i-1,j,s1,s2,vt),f(i-1,j-1,s1,s2,vt)));
    }
    int minDistance(string w1, string w2) {
    

   int n1=w1.size();
   int n2=w2.size();
   if(n1==0){
    return n2;
   }
   if(n2==0){
    return n1;
   }
   vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
  for(int i=0;i<=n1;i++) dp[i][0]=i;
  for(int i=0;i<=n2;i++) dp[0][i]=i;


   for(int i=1;i<=n1;i++)
   {
    for(int j=1;j<=n2;j++){
       if(w1[i-1]==w2[j-1]){
         dp[i][j]=dp[i-1][j-1];
       }else{
          dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
       }
    }
   }
   return dp[n1][n2];

    }
};