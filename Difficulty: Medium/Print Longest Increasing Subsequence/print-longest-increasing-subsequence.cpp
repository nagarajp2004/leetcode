//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& nums) {
     
     
     
     
  
     vector<int>vt(nums.size(),1),hash(n);
     int maxi=1;
     int last_ind=0;
     for(int i=0;i<nums.size();i++){
          hash[i]=i;
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i]  && 1+vt[j]>vt[i]){
                vt[i]=vt[j]+1;
                hash[i]=j;
            }
        }
      if(vt[i]>maxi){
          maxi=vt[i];
         last_ind=i; 
      }
     }
     vector<int>ans(maxi);
     int ind=1;
     ans[0]=nums[last_ind];
   while(hash[last_ind]!=last_ind){
      last_ind=hash[last_ind];
      ans[ind++]=nums[last_ind];
   }  
    reverse(ans.begin(),ans.end());
    return ans;// Code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res)
            cout << x << " ";
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends