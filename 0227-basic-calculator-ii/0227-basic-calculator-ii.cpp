class Solution {
public:
    int calculate(string s) {
        char op = '+';
        long long cur = 0, prev = 0, res = 0;
        int n = s.size();
        int i = 0;

        while (i < n) {
            if (isdigit(s[i])) {
                while (i < n && isdigit(s[i])) {
                    cur = cur * 10 + (s[i] - '0');
                    i++;
                }
                i--; // Correctly counteracts the i++ at the end of the loop

                if (op == '+') {
                    res += cur;
                    prev = cur;
                } else if (op == '-') {
                    res -= cur;
                    prev = -cur;
                } else if (op == '*') {
                    res = res - prev + prev * cur;
                    prev = prev * cur;
                } else { // division
                    res = res - prev + prev / cur;
                    prev = prev / cur;
                }
                // REMOVED: continue;

            } else if (s[i] == ' ') {
                i++;
                continue; // This continue is fine, it just skips whitespace
            } else { // operator
                op = s[i];
                cur = 0;
            }
            i++;
        }

        return res;
    }
};