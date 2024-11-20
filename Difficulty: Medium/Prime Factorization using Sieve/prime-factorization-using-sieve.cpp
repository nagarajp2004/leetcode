//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void sieve(){}

    vector<int> findPrimeFactors(int n) 
    {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=i;
        }
        
     for(long i=2;i<=n;i++)
    {
      if(ans[i]==i)
      {
       for(long long j=i*i;j<=n;j+=i)
       {
         if(ans[j]==j)
         {
             ans[j]=i;
         }
       }
      }
    }
        
        
        
        
       
       vector<int>sol;
       
       while(n!=1)
       {
         sol.push_back(ans[n]);    
          n=n/ans[n];
       }
       return sol;
       
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.sieve();
        vector<int> vec = obj.findPrimeFactors(n);
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends