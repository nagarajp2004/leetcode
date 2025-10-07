class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tot=0;
        int max_s=INT_MIN;
        int min_s=INT_MAX;
        int max_c=0;
        int min_c=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            max_c=max(nums[i],max_c+nums[i]);
            max_s=max(max_c,max_s);
           
             min_c=min(nums[i],min_c+nums[i]);
            min_s=min(min_c,min_s);

            tot+=nums[i];
        }
        if(max_s<0){
            return max_s;
        }
        return max(max_s,tot-min_s);
    }
};