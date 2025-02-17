class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;  // Adding one to the number
        
        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
            
            // If no carry, return early
            if (carry == 0) {
                return digits;
            }
        }
        
        // If there's still a carry, insert 1 at the beginning
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};
