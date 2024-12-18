class Solution {
public:

    int f(vector<int>& w,int maxi){
       int x=1;
       int sum=0;
       for(int i=0;i<w.size();i++){
         if(sum+w[i]>maxi){
          x++;
          sum=w[i];
         }
         else{
            sum+=w[i];
         }
       }
       
       return x;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int low=*max_element(w.begin(),w.end());
        int ans=0;
        int high=accumulate(w.begin(),w.end(),0);
        while(high>=low){
            int mid=(high+low)/2;
            int x=f(w,mid);
            if(x<=days){
              high=mid-1;
            }
            else{
              
              low=mid+1;
            }
        }
        return low ;
    }
};