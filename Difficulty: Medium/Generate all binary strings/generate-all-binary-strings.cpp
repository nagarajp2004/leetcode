//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    void recur(vector<string>&st,int i,int& num,string temp)
    {
        if(i>=num){
            st.push_back(temp);
            return;
        }
       if(!temp.empty() && temp.back()=='1'){
            
            recur(st,i+1,num,temp+'0');
            
            
       }else{
           recur(st,i+1,num,temp+'0');
           recur(st,i+1,num,temp+'1');
       }
    }
    vector<string> generateBinaryStrings(int num)
    {
       int i=0;
       vector<string>st;
       string temp;
       recur(st,i,num,temp);
       return st;
    
    }
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends