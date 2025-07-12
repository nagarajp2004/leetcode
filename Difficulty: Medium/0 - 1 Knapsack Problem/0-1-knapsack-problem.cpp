class Solution {
  public:
    int f(int i,int w,vector<int>&val,vector<int> &wt,  vector<vector<int>>&dp){
        
        if(i>=val.size()){
            return 0;
        }
        if(w<=0){
            return 0;
        }
       if(dp[i][w]!=-1){
           return dp[i][w];
       }    
        
       int x=f(i+1,w,val,wt,dp);
       int y=0;
       if(w>=wt[i]){
            y=f(i+1,w-wt[i],val,wt,dp)+val[i];
       }
       
        return dp[i][w]=max(x,y);
        
    }
  
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
       
       vector<vector<int>>vt(val.size()+1,vector<int>(W+1,-1));
       
       return f(0,W,val,wt,vt);
       
       
    }
};