class Solution {
public:
    int check(vector<int>& arr,int k,int d){
        
        int count=0;
        
        int adj=k;
        for(int i=0;i<arr.size();i++){
           if(arr[i] <=d){
            adj--;
                if(adj==0){
                   count++;
                   adj=k;
                    }
           }else{
                adj=k;
           }      
        }
      return count;
    }

    int minDays(vector<int>& b, int m, int k) {
        int mini=*min_element(b.begin(),b.end());
        int maxi=*max_element(b.begin(),b.end());

       int n=b.size();
       
       long long x=1ll*m*k;
       if(n< x){
        return -1;
       }
        int i=mini;
        int j=maxi;
        int ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            int cnt=check(b,k,mid);
         if(cnt >= m){
              ans=mid;
              j=mid-1;
         }else{
           i=mid+1;
         }
        }
        return ans;
    }
};