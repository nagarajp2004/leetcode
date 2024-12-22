//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool canweplace(vector<int>&s,int dis,int k){
        int cntcow=1;
        int last=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]-last>=dis){
                cntcow++;
                last=s[i];
            }
        }
        if(cntcow>=k){
            return true;
        }
        return false;
    }

    int aggressiveCows(vector<int> &s, int k) {

        // Write your code here
        int maxi=*max_element(s.begin(),s.end());
        int mini=*min_element(s.begin(),s.end());
        sort(s.begin(),s.end());
        int low=1;
        int high=maxi-mini;
        while(high>=low){
            int mid=(high+low)/2;
            if(canweplace(s,mid,k)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
     return high;
         
        }
    
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends