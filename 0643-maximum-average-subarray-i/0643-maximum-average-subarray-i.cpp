class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=k-1;
        double sum=0;
        double ans=INT_MIN;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

       
        ans=max(ans,sum/(1ll*k));
     int n=nums.size();
        while(j<n-1){
           
            sum+=nums[++j];
            sum-=nums[i];
              ans=max(ans,sum/(1ll*k));
             
              i++;
             
        }
        return ans;
    }
};