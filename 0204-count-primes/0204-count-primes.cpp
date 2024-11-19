class Solution {
public:
 int se(int n){
   vector<long long>ans(n+1,1);
   for(long i=2;i<n;i++)
   {
      if(ans[i]==1){
       for(long long j=i*i;j<n;j+=i)
       {
         ans[j]=0;
       }
       }
   }
   int count=0;
   for(int i=2;i<n;i++){
    if(ans[i]==1){
        count++;
    }
   }
   return count;
 }
    int countPrimes(int n) {
        return se(n);

    }
};