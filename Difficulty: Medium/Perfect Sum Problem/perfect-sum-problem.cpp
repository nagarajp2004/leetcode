//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod = 1e9 + 7;
	int findWays(int index, int n, int sum, int arr[], vector<vector<int>>& dp){
	   // cout<<index<<' '<<sum<<endl;
	    if(index == -1){
	        if(sum == 0) return 1;
	        return 0;
	    }
	    if(dp[index][sum] != -1) return dp[index][sum];
	    
	    int notTaken = findWays(index-1, n, sum, arr, dp);
	    
	    int Taken = 0;
	    if(arr[index] <= sum) Taken = findWays(index-1, n, sum-arr[index], arr, dp);
	    
	    return dp[index][sum] = (Taken + notTaken)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        
        return findWays(n-1, n, sum, arr, dp);
        
	}
	  
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends