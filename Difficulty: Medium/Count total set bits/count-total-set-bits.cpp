//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
   int largestbit(int n){
       int x=0;
       while((1<<x)<=n){
           x++;
       }
       return x-1;
   }
   
   int tnbits(int n){
       if(n<=1){
           return n;
       }
      
       int x=largestbit(n);
       
       return (x*pow(2,x-1))+(n-pow(2,x)+1)+tnbits(n-pow(2,x));
   }
    int countSetBits(int n)
    {
        // Your logic herewh
        return tnbits(n);
        
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  
cout << "~" << "\n";
}
	  return 0;
}

// } Driver Code Ends