class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      nums.insert(nums.begin(),INT_MIN);
       nums.insert(nums.end(),INT_MIN);
       int i=1;
       int j=nums.size()-2;
       while(j>=i){
        int mid=(i+j)/2;
        if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]){
            return mid-1;
        }
        else if(nums[mid+1]>nums[mid]){
             i=mid+1;

        }
        else{
            j=mid-1;
        }
       }
       return 0;

    }
};