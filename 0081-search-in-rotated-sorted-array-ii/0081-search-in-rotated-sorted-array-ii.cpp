class Solution {
public:
    bool search(vector<int>& nums, int tar) {
        int i = 0;
        int j = nums.size() - 1;

        while(i <= j) {
            int mid = (i + j) / 2;

            if(nums[mid] == tar) return true;

            // Handle duplicates
            if(nums[i] == nums[mid] && nums[mid] == nums[j]) {
                i++;
                j--;
                continue;
            }

            // Left half is sorted
            if(nums[i] <= nums[mid]) {
                if(nums[i] <= tar && tar < nums[mid]) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if(nums[mid] < tar && tar <= nums[j]) {
                    i = mid + 1;
                } else {
                    j = mid - 1;
                }
            }
        }

        return false;
    }
};
