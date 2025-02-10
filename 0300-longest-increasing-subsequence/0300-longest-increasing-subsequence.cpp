class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        vector<int>vt(nums.size(),1);
        int maxi=1;

        for(int i=0;i<nums.size();i++)
        {
             for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    vt[i]=max(1+vt[j],vt[i]);

                }
                maxi=max(maxi,vt[i]);
             }
        }
        return maxi;


    }
};