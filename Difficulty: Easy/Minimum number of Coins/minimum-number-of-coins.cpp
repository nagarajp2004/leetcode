//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
         vector<int>ans;
        // code here
        vector<int>vt={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        for(int i=vt.size()-1;i>=0;i--){
            if(N>=vt[i]){
               int n=N/vt[i];
               while(n){
                   ans.push_back(vt[i]);
                   n--;
               }
                N=N%vt[i];
                
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends