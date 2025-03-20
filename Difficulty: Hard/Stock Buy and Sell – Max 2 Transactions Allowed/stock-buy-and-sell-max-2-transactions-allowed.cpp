//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int f(vector<int>& p, int i, int buy, int count, vector<vector<vector<int>>>& vt) {
        if (i >= p.size() || count == 0) {
            return 0;
        }
        if (vt[i][buy][count] != -1) {
            return vt[i][buy][count];
        }
        int profit = 0;
        if (buy) {
            profit = max(-p[i] + f(p, i + 1, 0, count, vt), f(p, i + 1, 1, count, vt));
        } else {
            profit = max(p[i] + f(p, i + 1, 1, count - 1, vt), f(p, i + 1, 0, count, vt));
        }
        return vt[i][buy][count] = profit;
    }

    int maxProfit(vector<int> &p) {
        int n = p.size();
        vector<vector<vector<int>>> vt(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return f(p, 0, 1, 2, vt);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends