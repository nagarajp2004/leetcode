// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int no=0;
        for(auto& i:arr){
            if(i<=k){
                no++;
            }
        }
        int j=no-1;
        int n=arr.size();
        
        
        int ans=INT_MAX;
        
        int i=0;
        
        int cnt=0;
        for(int x=0;x<=j;x++){
             if(arr[x]<=k){
                cnt++;
            }
        }
        
        ans=min(ans,no-cnt);
       
       
        while(j<n-1){
            if(arr[i]<=k){
                cnt--;
            }
            i++;
            j++;
            if(arr[j]<=k){
                cnt++;
            }
             ans=min(ans,no-cnt);
        }
        return ans;
        
        
    }
};
