class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int curmax = nums[0], totalmax = nums[0];
        int cur_min = nums[0], total_min = nums[0];
        int total = nums[0];

        for (int i = 1; i < n; i++) {
            total += nums[i];

            curmax = max(curmax + nums[i], nums[i]);
            totalmax = max(totalmax, curmax);

            cur_min = min(cur_min + nums[i], nums[i]);
            total_min = min(total_min, cur_min);
        }

        if (totalmax < 0) return totalmax;

        return max(totalmax, total - total_min);
    }
};
