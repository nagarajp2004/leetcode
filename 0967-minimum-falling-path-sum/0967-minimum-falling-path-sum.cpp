class Solution {
public:
   int recur(int i,int j,int n,vector<vector<int>>& m,vector<vector<int>>&vt)
   {
    if(i==n-1 && j<n && j>=0)
    {
        return m[i][j];
    }
    if(i>=n || j>=n || i<0 || j<0)
    {
        return INT_MAX;
    }
    if(vt[i][j]!=INT_MAX){
        return vt[i][j];
    }
   int mini=min(recur(i+1,j-1,n,m,vt),recur(i+1,j,n,m,vt));
   mini=m[i][j]+min(mini,recur(i+1,j+1,n,m,vt));
   vt[i][j]=mini;
   return mini;
   }
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
         int n=matrix.size();
         int mini=INT_MAX;
         vector<vector<int>>vt(n,vector<int> (n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            mini=min(mini,recur(0,i,n,matrix,vt));
        }
        return mini;
    }
};