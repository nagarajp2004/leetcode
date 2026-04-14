#include <queue>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& target) {
        // Max heap
        priority_queue<long long> pq;
        long long sum = 0;

        // Step 1: Build heap and compute sum
        for (int x : target) {
            pq.push(x);
            sum += x;
        }

        // Step 2: Work backwards
        while (true) {
            long long maxVal = pq.top();
            pq.pop();

            // All elements are 1 → success
            if (maxVal == 1) return true;

            long long rest = sum - maxVal;

            // rest must be at least 1 (n >= 1, all values >= 1)
            if (rest <= 0) return false;

            // Use modulo to handle large repeated subtractions efficiently
            long long prev = maxVal % rest;

            // If prev == 0, it means prev should be `rest` itself
            // e.g., [1, 1] → max=1, but for [2,1]: 2 % 1 = 0 → prev = 1
            if (prev == 0) prev = rest;

            // If prev == maxVal, we're stuck in a loop → impossible
            if (prev == maxVal) return false;

            sum = rest + prev;
            pq.push(prev);
        }
    }
};