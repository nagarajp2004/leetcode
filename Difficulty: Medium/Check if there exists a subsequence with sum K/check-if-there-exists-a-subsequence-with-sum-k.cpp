//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
           if (k == 0) return true;
    if (n == 0) return false;

    if (arr[n - 1] <= k) {
        return checkSubsequenceSum( n - 1,arr, k - arr[n - 1]) ||
               checkSubsequenceSum( n - 1,arr, k);
    }
    return checkSubsequenceSum( n - 1, arr,k);

    }
};




//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends