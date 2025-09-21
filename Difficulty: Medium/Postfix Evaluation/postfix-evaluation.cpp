#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   int perform(char x, int a, int b) {
    if (x == '*') return a * b;
    if (x == '/') {
        if (b == 0) throw runtime_error("Division by zero");
        int q = a / b;   // truncates toward 0
        int r = a % b;
        // If remainder exists and signs differ → adjust down
        if (r != 0 && ((a < 0) ^ (b < 0))) {
            q -= 1;
        }
        return q;
    }
    if (x == '^') return (int)pow(a, b);
    if (x == '+') return a + b;
    if (x == '-') return a - b;
    throw runtime_error("Invalid operator");
}


    bool isNumber(const string &s) {
        if (s.empty()) return false;
        int start = (s[0] == '-') ? 1 : 0; // allow negatives
        if (start == 1 && s.size() == 1) return false; // just "-" is not valid
        for (int i = start; i < (int)s.size(); i++) {
            if (!isdigit(s[i])) return false;
        }
        return true;
    }

    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;

        for (auto &i : arr) {
            if (isNumber(i)) {
                st.push(stoi(i));
            } else {
                if (st.size() < 2) {
                    throw runtime_error("Invalid postfix expression");
                }
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int sol = perform(i[0], a, b);
                st.push(sol);
            }
        }

        if (st.size() != 1) {
            throw runtime_error("Invalid postfix expression");
        }

        return st.top();
    }
};
