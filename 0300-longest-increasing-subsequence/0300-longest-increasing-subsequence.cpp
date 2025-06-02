class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>vt(nums.size(),1);
        int maxi=1;
       int n=nums.size();
       for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i]){
                vt[i]=max(vt[i],vt[j]+1);
            }
            maxi=max(maxi,vt[i]);
        }
       }
       return maxi;

    }
};