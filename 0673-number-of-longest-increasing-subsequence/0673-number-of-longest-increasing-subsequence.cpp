class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> count(n, 1), dp(n, 1);
        int maxi = 0;

        // Compute the length of LIS and count of LIS ending at each index
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    if (dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j];
                    } else if (dp[i] == dp[j] + 1) {
                        count[i] += count[j];
                    }
                }
            }
            maxi = max(maxi, dp[i]);  // Track the overall LIS length
        }

        // Sum up counts of LIS for all indices where dp[i] == maxi
        int totalCount = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] == maxi) {
                totalCount += count[i];
            }
        }

        return totalCount;
    }
};
