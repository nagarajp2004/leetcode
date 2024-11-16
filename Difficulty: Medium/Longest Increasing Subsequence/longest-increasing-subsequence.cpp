//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(vector<int>& arr) {
        // code here
        vector<int>vt;
        vt.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(arr[i]>vt.back()){
                vt.push_back(arr[i]);
            }
            else{
                int ind=lower_bound(vt.begin(),vt.end(),arr[i])-vt.begin();
                vt[ind]=arr[i];
            }
        }
        return vt.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.longestSubsequence(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends