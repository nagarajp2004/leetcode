//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        stack<string> st;
        for (int i = 0; i < exp.size(); i++) {
            char ch = exp[i];
           if (isalpha(exp[i]))
 {
                st.push(string(1, ch));
            } else {
                // Check if there are at least two operands to pop
                if (st.size() < 2) {
                    return "Invalid Expression"; // or handle gracefully
                }
                string b = st.top(); st.pop();
                string a = st.top(); st.pop();
                st.push("(" + a + ch + b + ")");
            }
        }
        
        // At the end, there should be exactly one item in the stack
        if (st.size() != 1) {
            return "Invalid Expression";
        }

        return st.top();
    }
};



//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);

    return 0;
}

// } Driver Code Ends