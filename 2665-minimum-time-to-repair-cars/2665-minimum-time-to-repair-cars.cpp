class Solution {
public:
        bool f(vector<int>r,int c,long long ans)
        {
            long long cardone=0;
             for( int i:r){
                 long long c2=ans/i;
                 long long c=floor(sqrt(c2));
                 cardone+=c;

             }
             return cardone>=c;
        }
    long long repairCars(vector<int>& ranks, int c) {
        long long ans=0;
        long long  mini=1;
      
        long long  maxi=1e14;
        while(mini<maxi){
            long long  mid=(mini+maxi)/2;
            int x=f(ranks,c,mid);
            if(x==1){
                
                  maxi=mid;
            }else{
                mini=mid+1;
            }
        }
        return mini;
    }
};