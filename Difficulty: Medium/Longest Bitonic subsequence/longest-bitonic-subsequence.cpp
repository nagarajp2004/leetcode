//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  
    int LongestBitonicSequence(int n, vector<int> &a) {
        // code here
       vector<int>dp1(n,1);
        
        int maxi=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]<a[i] && dp1[i]<dp1[j]+1){
                    dp1[i]=dp1[j]+1;
                }
            }
            
            }
        vector<int>dp2(n,1);    
        for(int j=n-1;j>=0;j--){
            for(int i=n-1;i>j;i--){
                if(a[j]>a[i]){
                    dp2[j]=max(dp2[j],dp2[i]+1);
                }
            }
        }
        
        int ans=0;
       maxi=0;
        for(int i=0;i<n;i++){
            if(dp1[i]!=1 && dp2[i]!=1 ){
               maxi=max(maxi,dp1[i]+dp2[i]);
            }
        }
        if(maxi==0){
            return 0;
        }
        return maxi-1;
            
        }
    
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> nums(n);
        Array::input(nums, n);

        Solution obj;
        int res = obj.LongestBitonicSequence(n, nums);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends