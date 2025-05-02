class Solution {
public:
    bool recur(vector<int>& nums, int i, vector<int>& dp) {
        if(i >= nums.size() - 1) return true;
        if(dp[i] != -1) return dp[i]; // use memoized result

        int maxJump = nums[i];
        for(int j = 1; j <= maxJump; ++j) {
            if(recur(nums, i + j, dp)) {
                dp[i] = 1;
                return true;
            }
        }

        dp[i] = 0;
        return false;
    }

    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1); // initialize memoization array
        return recur(nums, 0, dp);
    }
};
