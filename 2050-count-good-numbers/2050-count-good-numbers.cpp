class Solution {
public:
int mod=1e9+7;
    long long  f(long long x,long long p)
    {
        if(p==0){
            return 1;
        }
          long long ans=1;
         while(p){
               if(p%2==0){
                x=(x*x)%mod;
                p/=2;
               }else{
                 ans=(ans*x)%mod;
                 p=p-1;
               }
         }
         return ans%mod;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2,odd=n/2;
        return ((long long) (f(5.0,even)%mod)*(f(4.0,odd)%mod))%mod; 
    } 
};