#include<iostream>
#include<vector>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
   int sum,count=0;
   for(int i=0;i<a.size();i++){
      for(int j=i;j<a.size();j++){
          sum=0;
          for(int v=i;v<=j;v++){
             sum+=a[v];
          }
       
          if (sum == k) {
             count = max(count, j - i + 1);
          }
      }
   }
   return count;
}
int main(){
vector<int>a={1,2,3,1,1,1,1};
cout<<longestSubarrayWithSumK(a,3);
}