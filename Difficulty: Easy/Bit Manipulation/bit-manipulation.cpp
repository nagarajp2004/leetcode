//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int isset=num>>(i-1)&1;
        cout<<isset<<' ';
        
        if(isset){
            cout<<num<<' ';
            int snum=num& ~(1<<(i-1));
            cout<<snum;
        }else{
            int snum=num | (1<<(i-1));
            cout<<snum<<' '<<num;
        }
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends