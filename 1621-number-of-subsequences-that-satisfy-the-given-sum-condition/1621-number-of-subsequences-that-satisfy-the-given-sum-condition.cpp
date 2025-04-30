class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int mod = 1e9 + 7;
        int ans = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, h = n - 1;

        // Precompute powers of 2 modulo `mod` up to n (since h-l <= n)
        vector<int> powerOfTwo(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            powerOfTwo[i] = (2 * powerOfTwo[i - 1]) % mod;
        }

        while (l <= h) {
            if (nums[l] + nums[h] <= target) {
                ans = (ans + powerOfTwo[h - l]) % mod;
                l++;
            } else {
                h--;
            }
        }

        return ans;
    }
};
