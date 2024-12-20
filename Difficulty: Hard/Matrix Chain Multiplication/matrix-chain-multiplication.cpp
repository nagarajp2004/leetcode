//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int f(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
       if(i==j){
           return 0;
       }
     int mini=INT_MAX;
     if(dp[i][j]!=-1){
         return dp[i][j];
     }
       for(int k=i;k<j;k++)
       {
        int step=(arr[i-1]*arr[k]*arr[j])+f(i,k,arr,dp)+f(k+1,j,arr,dp);
       mini=min(mini,step);
       }
      return dp[i][j]=mini;
   }
  
  
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(n,-0));
        for(int i=n-1;i>=1;i--){
            for(int j=i+1;j<n;j++){
                int mini=1e9;
      for(int k=i;k<j;k++)
       {
        int step=(arr[i-1]*arr[k]*arr[j])+dp[i][k]+dp[k+1][j];
       mini=min(mini,step);
       }
        dp[i][j]=mini;
            }
        }
        return dp[1][n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.matrixMultiplication(arr) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends