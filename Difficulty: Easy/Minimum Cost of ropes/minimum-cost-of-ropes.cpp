//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        
        priority_queue<int,vector<int>,greater<int>>min_heap;
        
        for(auto i: arr){
            min_heap.push(i);
        }
        int cost=0;
        int a,b;
        while(min_heap.size()!=1){
            a=min_heap.top();
            min_heap.pop();
            b=min_heap.top();
            min_heap.pop();
            cost+=a+b;
            min_heap.push(a+b);
        }
        return cost;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends