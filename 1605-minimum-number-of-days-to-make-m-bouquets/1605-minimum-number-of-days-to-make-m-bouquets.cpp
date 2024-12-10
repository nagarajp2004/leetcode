class Solution {
public:
     int posible(vector<int>&x,int day,int m,int k)
     {
          int count=0;
          int nocount=0;
          for(int i=0;i<x.size();i++)
          {
               if(x[i]<=day){
                count++;
               }
               else{
                nocount+=count/k;
                count=0;
               }
          }
          nocount+=count/k;
         if(nocount>=m){
            return 1;
         }
         else{
            return 0;
         }
     }
    int minDays(vector<int>& b, int m, int k)
    {
        long long x=m*1LL*k*1LL;
        if(b.size()<x){
            return -1;
        }
       
        int mini=*min_element(b.begin(),b.end());
        int maxi=*max_element(b.begin(),b.end());
         int ans=maxi;
        while(maxi>=mini){
            int mid=(maxi+mini)/2;
          
            if(posible(b,mid,m,k)){
               ans=min(ans,mid);
               maxi=mid-1;
               
            }
            else{
                mini=mid+1;
            }
        }
        return ans;
    }
};