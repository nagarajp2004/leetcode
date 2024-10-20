//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
     int f(int ind,int tar,int* price,vector<vector<int>>&dp)
     {
            
         if(ind==0)
         {
          return price[0]*tar;     
         }
         if(dp[ind][tar]!=-1){
             return dp[ind][tar];
         }
         int nottake=f(ind-1,tar,price,dp);
         int take=INT_MIN;
         if(tar>=(ind+1))
         {
             take=price[ind]+f(ind,tar-(ind+1),price,dp);
         }
         return dp[ind][tar]=max(nottake,take);
     }
  
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(n-1,n,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends