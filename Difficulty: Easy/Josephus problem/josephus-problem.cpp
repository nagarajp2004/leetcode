class Solution {
public:
    int solve(int n, int k) {
        // Base case
        if (n == 1)
            return 0;

        // Recursive call
        return (solve(n - 1, k) + k) % n;
    }

    int josephus(int n, int k) {
        return solve(n, k) + 1;  // convert to 1-based
    }
};
