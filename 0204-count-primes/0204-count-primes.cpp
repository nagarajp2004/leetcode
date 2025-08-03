class Solution {
public:
    int countPrimes(int n) {
        
    vector<long long>vt(n+1,1);
     int sq=sqrt(n);

     for(long long i=2;i<=sq;i++){

          if(vt[i]==1){
            for(long long j=i*i;j<=n;j=j+i){
                vt[j]=0;
            }
          }
     }

     int count=0;
     for(int i=2;i<n;i++){
         count+=vt[i];
     }

    return count;

    }
};