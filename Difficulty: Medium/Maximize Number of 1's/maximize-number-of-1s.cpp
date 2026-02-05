class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int n = arr.size();
        int j = 0;      // Left pointer
        int no_z = 0;   // Count of zeros in the current window
        int maxi = 0;   // Initialize to 0 for cases where no 1s can be formed

        for (int i = 0; i < n; i++) {
            // Expand the window by including arr[i]
            if (arr[i] == 0) {
                no_z++;
            }

            // If zeros exceed k, shrink the window from the left
            while (no_z > k) {
                if (arr[j] == 0) {
                    no_z--;
                }
                j++;
            }

            // Update the maximum length of the valid window
            maxi = max(maxi, i - j + 1);
        }
        return maxi;
    }
};