class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;

        for (int num : st) {
            // start of a new sequence
            if (st.find(num - 1) == st.end()) {
                int curr = num;
                int count = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};
