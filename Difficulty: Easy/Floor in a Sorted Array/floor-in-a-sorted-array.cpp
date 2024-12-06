//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        // Your code here
        int i=0,j=arr.size()-1;;
        int prev=-1;
        while(j>=i)
        {
          int  mid=(i+j)/2;
          if(arr[mid]==k){
              return mid;
          }
          else if(arr[mid]<k){
              prev=mid;
              i=mid+1;
          }
          else{
              j=mid-1;
          }
            
        }
        return prev;
        
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends