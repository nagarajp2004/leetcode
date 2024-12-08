//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int index_min(vector<int>& arr){
        int i=0,j=arr.size()-1;
        while(j>=i){
            if(arr[i]<=arr[j]){
                return i;
            }
            int mid=(i+j)/2;
            if(arr[mid]>arr[j]){
                i=mid+1;
            }
            else{
               j=mid;
            }
        }
        return i;
        
    }
  
    int findKRotation(vector<int> &arr) {
        // Code Here
        return index_min(arr);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends