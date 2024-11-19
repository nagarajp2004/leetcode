//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:  
    void print_divisors(int n) {
        // Code here.
       vector<int> ans; // To store larger divisors
        int limit = sqrt(n);
        
        for (int i = 1; i <= limit; i++) {
            if (n % i == 0) {
                cout << i << " "; // Print smaller divisor
                if (i != n / i) { // Avoid duplicate for perfect squares
                    ans.push_back(n / i);
                }
            }
        }
        
        // Print the larger divisors in reverse order
        for (int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i] << " ";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends