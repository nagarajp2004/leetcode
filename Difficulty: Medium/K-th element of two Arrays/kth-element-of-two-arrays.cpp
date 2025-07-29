class Solution {
public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int n1 = a.size();
        int n2 = b.size();

        // Always binary search on the smaller array
        if (n1 > n2)
            return kthElement(b, a, k);

        // ✅ Correct binary search range over number of elements to take from a
        int l = max(0, k - n2), h = min(k, n1);

        while (l <= h) {
            int mid1 = (l + h) / 2;
            int mid2 = k - mid1;

            // ✅ Boundaries setup
            int l1 = (mid1 == 0) ? INT_MIN : a[mid1 - 1];
            int l2 = (mid2 == 0) ? INT_MIN : b[mid2 - 1];
            int r1 = (mid1 == n1) ? INT_MAX : a[mid1];
            int r2 = (mid2 == n2) ? INT_MAX : b[mid2];

            // ✅ Correct partition condition
            if (l1 <= r2 && l2 <= r1) {
                return max(l1, l2);  // kth element found
            }
            else if (l1 > r2) {
                // Too many from a, go left
                h = mid1 - 1;
            } else {
                // Too few from a, go right
                l = mid1 + 1;
            }
        }

        return -1; // Should never reach here if inputs are valid
    }
};
