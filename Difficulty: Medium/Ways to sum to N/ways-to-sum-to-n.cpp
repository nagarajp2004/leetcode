//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends

class Solution
{
  public:
    // function to count the total  
    // number of ways to sum up to 'N' 
    int MOD=1000000007;
 int solveMem(int arr[], int m, int target, vector<int>& dp) {
    if (target == 0) {
        return 1;
    }

    if (target < 0) {
        return 0;
    }

    if (dp[target] != -1) {
        return dp[target];
    }

    int ways = 0;
    for (int index = 0; index < m; ++index) {
        ways = (ways + solveMem(arr, m, target - arr[index], dp)) % MOD;
    }

    return dp[target] = ways % MOD;
}

int countWays(int arr[], int m, int N) {
    vector<int> dp(N + 1, -1);
    return solveMem(arr, m, N, dp);
}

    
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int m,n ;
	        cin>>m>>n;
	        int arr[m];
	        for(int i = 0;i<m;i++)
	            cin>>arr[i];
	        Solution ob;     
	        cout<<ob.countWays(arr,m,n)<<endl;
	    
cout << "~" << "\n";
}
}
// } Driver Code Ends