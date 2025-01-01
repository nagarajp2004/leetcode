//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int cnt = 0;
        int i = 0;
        int j = 0;
        int n1 = a.size();
        int n2 = b.size();
        
        // Merge two sorted arrays until we reach the kth element
        while (i < n1 && j < n2) {
            if (a[i] < b[j]) {
                cnt++;
                if (cnt == k) return a[i];
                i++;
            } else {
                cnt++;
                if (cnt == k) return b[j];
                j++;
            }
        }
        
        // If elements remain in array a
        while (i < n1) {
            cnt++;
            if (cnt == k) return a[i];
            i++;
        }
        
        // If elements remain in array b
        while (j < n2) {
            cnt++;
            if (cnt == k) return b[j];
            j++;
        }
        
        return -1; // Edge case: k is invalid
    }
};

    

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends