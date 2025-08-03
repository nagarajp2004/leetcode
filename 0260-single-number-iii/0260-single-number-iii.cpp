class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long val = 0;
        for (int num : nums) {
            val ^= num; // XOR all elements to get a ^ b
        }

        // Get the rightmost set bit (differs between a and b)
        int right = val & -val;

        int a = 0, b = 0;
        for (int num : nums) {
            if (num & right) {
                a ^= num; // Group with the set bit
            } else {
                b ^= num; // Group with the unset bit
            }
        }

        return {a, b}; // both a and b are the unique numbers
    }
};
