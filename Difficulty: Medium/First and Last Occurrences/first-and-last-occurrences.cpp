class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
         int a = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        // check if x is actually present
        if (a == arr.size() || arr[a] != x) {
            return {-1, -1};
        }

        int b = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
        return {a, b - 1};
    }
};