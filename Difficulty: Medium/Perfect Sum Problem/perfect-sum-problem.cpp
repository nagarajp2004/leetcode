class Solution {
  public:
      
      

  
    int perfectSum(vector<int>& arr, int t) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(t+1,0));
        
        if(arr[0]==0){
            dp[0][0]=2;
        }else{
            dp[0][0]=1;
        }
        
       if (arr[0] != 0 && arr[0] <= t) dp[0][arr[0]] = 1;

     
     for(int i=1;i<n;i++){
         for(int j=0;j<=t;j++){
             dp[i][j]+=dp[i-1][j];
             if(arr[i] <= j){
                 dp[i][j]+=dp[i-1][j-arr[i]];
             }
         }
     }   
     
     return dp[n-1][t];
        
    }};