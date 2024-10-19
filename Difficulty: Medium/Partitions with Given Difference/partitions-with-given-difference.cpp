//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=1e9+7;
    int f(int ind,int tar,vector<int>&arr,vector<vector<int>>&dp)
    {
     if(ind==0){
      if(arr[0]==0 && tar==0) return 2;
      if(tar==0 || tar==arr[0]){
          return 1;
      }
      return 0;
     }
    if(dp[ind][tar]!=-1){
        return dp[ind][tar];
    }
    
     int nottake=f(ind-1,tar,arr,dp);
     int take=0;
     if(tar>=arr[ind]){
         take=f(ind-1,tar-arr[ind],arr,dp);
     }
     return dp[ind][tar]=(take+nottake)%mod;
     
     
    }
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code hereint
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
            if ((sum - d) < 0 || (sum - d) % 2 != 0) return 0;
        int tar=(sum-d)/2;
        vector<vector<int>>dp(arr.size(),vector<int>(tar+1,-1));
        return f(arr.size()-1,tar,arr,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends