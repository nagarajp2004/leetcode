//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        //write your code here
        stack<int>asc;
        stack<int>desc;
        vector<int>vt(n,0);
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
           while(!asc.empty() && asc.top()<=arr[i])
           {
              desc.push(asc.top());
              asc.pop();
           }
           desc.push(arr[i]);
           vt[i]=asc.size();
           while(!desc.empty()){
               asc.push(desc.top());
               desc.pop();
           }
        }
        
        for(auto i:indices)
        {
           ans.push_back(vt[i]); 
        }
        return ans;
    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> v1(n);
       for(int i = 0;i<n;i++) cin >> v1[i];
        int q; cin >> q;
        vector<int> v2(q);
        for(int i = 0;i<q;i++) cin >> v2[i];

        Solution obj;
        vector<int> ans = obj.count_NGE(n,v1,q,v2);

        for(int i = 0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;

        
        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends