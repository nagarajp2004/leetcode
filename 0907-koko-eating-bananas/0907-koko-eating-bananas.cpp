class Solution {
public:
    long long cal(vector<int>& arr, int k) {
        long long count = 0;
        for (int i = 0; i < arr.size(); i++) {
            count += (arr[i] + k - 1) / k; // integer ceil
        }
        return count;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hrs = cal(piles, mid); // use long long to be safe
            if (hrs > h) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
