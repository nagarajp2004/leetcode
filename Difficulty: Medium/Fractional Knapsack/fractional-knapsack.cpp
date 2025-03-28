//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int c) {
        // Your code here
        
       int n = val.size();
        vector<pair<double, int>> f(n);  // Use double for accurate ratio
        
        // Store value/weight ratio along with index
        for (int i = 0; i < n; i++) {
            f[i] = { (double)val[i] / wt[i], i };
        }

        // Sort in descending order based on value/weight ratio
        sort(f.begin(), f.end(), [](pair<double, int>& a, pair<double, int>& b) {
            return a.first > b.first;
        });

        double ans = 0.0;
        for (int i = 0; i < n && c > 0; i++) {
            int idx = f[i].second;
            if (wt[idx] <= c) {  
                // Take the whole item
                c -= wt[idx];
                ans += val[idx];
            } else {  
                // Take a fraction of the item
                ans += c * f[i].first;
                break;
            }
        }

        return ans;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends