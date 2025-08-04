class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid] < mini){
                mini=nums[mid];
            }
            if(nums[i] <= nums[mid]){
                mini=min(mini,nums[i]);
                i=mid+1;
            }else{
                mini=min(mini,nums[i]);
                j=mid-1;
            }
        }
        return mini;
    }
};