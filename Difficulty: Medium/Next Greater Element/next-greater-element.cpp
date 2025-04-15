//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& a) {
        // code here
      int n=a.size();
      stack<int>st;
      vector<int>ans;
      for(int i=n-1;i>=0;i--){
          if(st.empty()){
              ans.push_back(-1);
          }else{
              while(!st.empty() && st.top()<=a[i]){
                  st.pop();
              }
             if(!st.empty())
              ans.push_back(st.top());
             else
               ans.push_back(-1);
            
          }
      
           st.push(a[i]);
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after reading t
    while (t--) {
        vector<int> a;
        string input;

        // Reading the entire input line for the array
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.nextLargerElement(a);

        // Print the result in the required format
        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends