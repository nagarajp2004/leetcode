//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int ans=0;
    // Function to count inversions in the array.
    void mergesort(vector<int>&x ,int l,int m,int h)
   {   
       vector<int>y;  
       int a=l,b=m+1;
       while(a<=m && b<=h){
           if(x[a]<=x[b]){
               y.push_back(x[a]);
               a++;
           }
           else{
                ans+=(m-a+1);
              
               y.push_back(x[b]);
               b++;
           }
       }
       
       while(a<=m){
            y.push_back(x[a]);
               a++;
       }
       while(b<=h){
            y.push_back(x[b]);
               b++; 
       }
       for(int i=l;i<=h;i++){
           x[i]=y[i-l];
       }
   }
   void merge(vector<int>& x,int l,int h){
       if(l>=h){
           return ;
       }
       int mid=(l+h)/2;
       merge(x,l,mid);
       merge(x,mid+1,h);
       mergesort(x,l,mid,h);
   }
   
 
    int inversionCount(vector<int> &arr) {
        // Your Code Here
         int low=0,high=arr.size()-1;
         merge(arr,low,high);
         return ans;
       
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends