class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n = arr.size();
        int i = 0, j = n - 1;

        while (i <= j) {
            int mid = (i + j) / 2;
            int diff = arr[mid] - (mid + 1);  // missing till mid

            if (diff < k) {
                i = mid + 1;   // FIX 1: move right correctly
            } else {
                j = mid - 1;   // FIX 2: move left correctly
            }
        }

        // FIX 3: direct formula, no loop needed
        return i + k;
    }
};
