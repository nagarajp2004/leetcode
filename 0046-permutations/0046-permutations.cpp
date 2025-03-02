class Solution {
public:
    void recu(vector<int>& a, vector<vector<int>>& ans, vector<int>& temp, vector<int>& flag) {
        if (temp.size() == a.size()) {
            ans.push_back(temp);
            return;
        }
        int n = a.size();
        for (int i = 0; i < n; i++) {
            if (flag[i] != 1) {
                flag[i] = 1;
                temp.push_back(a[i]);
                recu(a, ans, temp, flag);
                flag[i] = 0;  // Backtrack
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> flag(nums.size(), 0);
        recu(nums, ans, temp, flag);
        return ans;
    }
};
