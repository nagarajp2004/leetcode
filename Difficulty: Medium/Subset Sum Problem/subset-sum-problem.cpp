//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
         vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,0));
         for(int i=0;i<arr.size();i++){
             dp[i][0]=1;
         }
         
         for(int i=1;i<=n;i++){
             for(int j=1;j<=sum;j++){
                 if(j>=arr[i-1]){
                     dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
                 }else{
                     dp[i][j]=dp[i-1][j];
                 }
             }
         }
         return dp[n][sum];
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends