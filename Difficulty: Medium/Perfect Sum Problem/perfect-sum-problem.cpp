//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int f(vector<int>&a,int i,int n,int t, vector<vector<int>>&dp){
        if(i == n){
            return t == 0;
        }
        if(t<0){
            return 0;
        }
      
        if(dp[i][t]!=-1){
            return dp[i][t];
        }
        
      int  c1=0;
        c1=f(a,i+1,n,t,dp);
        c1+=f(a,i+1,n,t-a[i],dp);
  
         return dp[i][t]=c1;
    }
   
  
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int count=0;
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return f(arr,0,n,target,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends