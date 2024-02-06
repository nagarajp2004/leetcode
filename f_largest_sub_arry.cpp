// find the sum formed by largest sub arry
//n2 cpmplexity;
#include<iostream>
#include<vector>
using namespace std;
vector<int>a={3,4,-5,8,-12,7,6,-2};

// int main(){    
//     int  maxi=0;
//     int n=a.size();   
//     for(int i=0;i<n;i++){
       
//       int prefix_sum=0;
//        for(int j=i;j<n;j++){
//              prefix_sum=prefix_sum+a[j];
//              maxi=max(prefix_sum,maxi);
//        }
//     }
//     cout<<"max"<<maxi;
// }
int main(){
int maxi=0;
int prefix=0; 
for(int i=0;i<a.size();i++){
prefix=prefix+a[i];
if(prefix<0){
    prefix=0;
}
maxi=max(prefix,maxi);
}
cout<< maxi;
}
