class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(h>=l){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[l] <=nums[mid]){
            if(nums[l] <= target && nums[mid] > target){
                h=mid-1;
            }else{
                l=mid+1;
            }
            }
            else{
                if (nums[mid] <= target && target <= nums[h]) {
                //element exists:
                l = mid + 1;
            }
            else {
                //element does not exist:
                h = mid - 1;
            }
            }
        }
        return -1;
    }
};