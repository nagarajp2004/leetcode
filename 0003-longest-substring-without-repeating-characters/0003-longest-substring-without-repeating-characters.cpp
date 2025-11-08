class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = -1;
        unordered_map<char, int> mpp;
        int ans = 0;
        
        for (int j = 0; j < n; j++) {
            if (mpp.find(s[j]) != mpp.end()) {
                i = max(i, mpp[s[j]]);
            }
            mpp[s[j]] = j;
            ans = max(ans, j - i);
        }
        return ans;
    }
};
