class Solution {
  public:
    int f(int i,vector<vector<int>>& arr,int prev, vector<vector<int>>&dp){
        
        if(i>=arr.size()){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        
        int maxi=0;
        for(int k=0;k<arr[i].size();k++){
            if(prev!=k){
                
                maxi=max(maxi,f(i+1,arr,k,dp)+arr[i][k]);
            }
        }
        return dp[i][prev+1]=maxi;
    }
  
  
    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
        
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(arr[0].size()+1,-1));
        return f(0,arr,-1,dp);
    }
};