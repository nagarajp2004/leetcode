class Solution {
public:
      int f(int i,int j,string a,string b,vector<vector<int>>&vt)
      {
        if(i<0 || j<0){
            return 0;
        }
        if(vt[i][j]!=-1)
        {
            return vt[i][j];
        }
        if(a[i]==b[j]){
            return vt[i][j]= 1+ f(i-1,j-1,a,b,vt);
        }
        return vt[i][j]=max(f(i-1,j,a,b,vt),f(i,j-1,a,b,vt));
      } 

    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>vt(n,vector<int>(m,-1));
        int ans=f(n-1,m-1,word1,word2,vt);
           return (n+m)-(ans*2);
    }
};