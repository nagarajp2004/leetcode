//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++
class Solution{   
public:
     bool recur(int ind,int tar,vector<int>&arr,vector<vector<int>>&dp)
     {
         if(tar==0){
             return true;
         }
          if(ind < 0) return 0;
         if(ind==0){
             if(arr[0]==tar){
                 return true;
             }
         }
         if(dp[ind][tar]!=-1){
            return dp[ind][tar];
         }
         
     bool notake=recur(ind-1,tar,arr,dp);
     bool take=false;
       if(tar>=arr[ind])    
       take=recur(ind-1,tar-arr[ind],arr,dp);
      
      return dp[ind][tar]=take | notake;
     } 
    bool isSubsetSum(vector<int>arr, int sum){
    // code here 
    vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
    return recur(arr.size()-1,sum,arr,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends