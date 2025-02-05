class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(), a.end());
        int n = a.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && a[i] == a[i - 1]) continue;  // Skip duplicate elements

            int j = i + 1, k = n - 1;
            while (k > j) {
                int sum = a[i] + a[j] + a[k];
                if (sum == 0) {
                    ans.push_back({a[i], a[j], a[k]});
                    j++;
                    k--;

                    // Skip duplicates for j
                    while (j < k && a[j] == a[j - 1]) j++;
                    // Skip duplicates for k
                    while (j < k && a[k] == a[k + 1]) k--;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }
        return ans;
    }
};
