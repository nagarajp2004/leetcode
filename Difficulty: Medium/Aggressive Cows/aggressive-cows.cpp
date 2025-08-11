class Solution {
  public:
    
    bool f(int val,int k,vector<int>&st){
     int count=1;
     int prev=st[0];
     int n=st.size();
     
     for(int i=0;i<n;i++){
         if(st[i]-prev >= val){
             count++;
             prev=st[i];
         }
         if(count >=k){
             return true;
         }
     }
     return false;
            
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        
        sort(stalls.begin(),stalls.end());
        
        int i=1;
        int n=stalls.size();
        int j=stalls[n-1]-stalls[0];
        int ans=1;
        while(i<=j){
            int mid=(i+j)/2;
            
            if(f(mid,k,stalls)==true)
            {
                ans=mid;
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return ans;
        
    }
};