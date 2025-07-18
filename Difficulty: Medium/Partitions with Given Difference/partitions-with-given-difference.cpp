class Solution {
  public:
    int f(int i,vector<int>&arr,int x,int d,vector<vector<int>>&dp)
    {
       if(i==arr.size()){
           int sum=accumulate(arr.begin(),arr.end(),0);
           if((sum-d)%2==1 || d>sum){
               return 0;
           }
           
          if(x==((sum-d)/2)){
              return 1;
          }
          return 0;
       } 
       
       if(dp[i][x]!=-1){
           return dp[i][x];
       }
       
       
       return  dp[i][x]=f(i+1,arr,x,d,dp)+ f(i+1,arr,x+arr[i],d,dp);
    }
  
  
    int countPartitions(vector<int>& arr, int d) {
        // Code here
        int sum=accumulate(arr.begin(),arr.end(),0);
      vector<vector<int>>dp(arr.size(),vector<int>(sum,-1));
      return f(0,arr,0,d,dp);    
        
    }
};