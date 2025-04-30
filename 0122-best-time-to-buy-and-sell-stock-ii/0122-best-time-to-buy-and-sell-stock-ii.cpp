class Solution {
public:
    int maxProfit(vector<int>& p)
    {
        int n=p.size();
        vector<vector<int>>vt(n+1,vector<int>(2,0));

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                if(j){
              vt[i][j]=max(vt[i+1][j-1]-p[i],vt[i+1][j]);
                }else{
              vt[i][j]=max(vt[i+1][j+1]+p[i],vt[i+1][j]);
                }
            }
        }
        return vt[0][1];
    }
};