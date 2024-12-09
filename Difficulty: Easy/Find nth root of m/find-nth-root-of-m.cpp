//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
       int i=0,j=m;
       int ans=-1;
       while(j>=i){
    
           int mid=(i+j)/2;
           
           if(pow(mid,n)==m){
               return mid;
           }
           else if(pow(mid,n)>m){
               j=mid-1;
           }
           else{

               i=mid+1;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends