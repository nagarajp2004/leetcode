class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       long long sum=0;
       int n=nums.size();
       unordered_map<int,int>mpp;
long long  ans=0;

       for(int i=0;i<n;i++){
         mpp[nums[i]]++;
         sum+=nums[i];
         if(i>=k){
            mpp[nums[i-k]]--;
            if(mpp[nums[i-k]]==0){
                mpp.erase(nums[i-k]);
            }
            sum-=nums[i-k];
        
         }
             if(mpp.size()==k){
                ans=max(ans,sum);
            }
       }
       return ans;
    }
};