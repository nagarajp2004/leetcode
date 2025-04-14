//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToPre(string pe) {
        // Write your code here
        stack<string>st;
        for(char i:pe){
            if(isalpha(i)){
                st.push(string("")+i);
            }else{
               string b=st.top();
                st.pop();
               string a=st.top();
                st.pop();
                st.push(i+a+b);
            }
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
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends