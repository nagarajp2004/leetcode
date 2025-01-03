class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int maxRow = 0;

            // Find the row with the maximum element in the current column
            for (int i = 0; i < n; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            // Check neighbors to decide the direction
            bool leftIsSmaller = (mid == 0) || (mat[maxRow][mid - 1] < mat[maxRow][mid]);
            bool rightIsSmaller = (mid == m - 1) || (mat[maxRow][mid + 1] < mat[maxRow][mid]);

            // If the current element is greater than its neighbors, it's a peak
            if (leftIsSmaller && rightIsSmaller) {
                return {maxRow, mid};
            }

            // Move to the side with a larger neighbor
            if (mid > 0 && mat[maxRow][mid - 1] > mat[maxRow][mid]) {
                high = mid - 1; // Search left
            } else {
                low = mid + 1; // Search right
            }
        }

        return {-1, -1}; // No peak found (shouldn't happen in a valid input)
    }
};
