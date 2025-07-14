class Solution {
  public:
     int f(int i,vector<int>&arr,int tar)
     {
        if(i==0){
            if(tar==0 && arr[i]==0){
                return 2;
            }
            if(tar==arr[i] || tar==0){
                return 1;
            }
            
            return 0;
        }
        
        if(arr[i]>tar){
           return f(i-1,arr,tar);    
        }
        
        return f(i-1,arr,tar-arr[i]) + f(i-1,arr,tar);
        
     }
  
    int perfectSum(vector<int>& arr, int target) {
        // code here,
         int n=arr.size();
         vector<vector<int>>dp(n+1,vector<int>(target+1,0));
         dp[0][0]=1;
         
         for(int i=1;i<=n;i++){
             for(int j=0;j<=target;j++){
               if(j<arr[i-1]){
                     dp[i][j]=dp[i-1][j];
                 }
                 else{
                     dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                 }
             }
         }
         
         return  dp[n][target];
        
    }
};