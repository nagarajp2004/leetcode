class Solution {
public:
    double myPow(double x, int n) {
     // Handle INT_MIN specifically
        long long N = n; // Use long long to handle INT_MIN safely
        double ans = 1.0;
        if (N < 0) {
            x = 1 / x;  // Invert x for negative powers
            N = -N;     // Convert N to positive safely
        }

        while (N) {
            if (N % 2 == 1) {  // If the current power is odd
                ans *= x;
                N -= 1;
            } else {           // If the current power is even
                x *= x;
                N /= 2;
            }
        }
        return ans;


    }
};