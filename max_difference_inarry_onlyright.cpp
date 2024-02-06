#include<iostream>
using namespace std;
 int max_diff(int a[],int n){
    int suf_max=a[n-1];
    int diff=0;
    int ans=0;
    for(int i=n-2;i>=0;i--){
       diff=suf_max-a[i];
       ans=max(diff,ans);
       suf_max=max(suf_max,a[i]);
      
    }
    return ans;
 }
 int main(){
    int a[10]={1,2,4,10,4,5};
    cout<<max_diff(a,6);
 }