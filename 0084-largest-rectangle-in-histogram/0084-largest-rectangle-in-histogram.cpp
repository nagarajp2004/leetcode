class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int ans = 0;
        int n = h.size();
        
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && h[st.top()] >= h[i]) {
                int height = h[st.top()];
                st.pop();
                int width = st.empty() ? i : (i - st.top() - 1);
                ans = max(ans, height * width);
            }
            st.push(i);
        }

        while (!st.empty()) {
            int height = h[st.top()];
            st.pop();
            int width = st.empty() ? n : (n - st.top() - 1);
            ans = max(ans, height * width);
        }

        return ans;
    }
};
