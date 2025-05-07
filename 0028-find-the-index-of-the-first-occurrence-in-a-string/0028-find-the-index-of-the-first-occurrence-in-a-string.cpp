class Solution {
public:
    vector<int> find_lps(string n) {
        int m0 = n.size();
        int len = 0;
        vector<int> lps(m0, 0);

        for (int i = 1; i < m0;) {
            if (n[i] == n[len]) {
                lps[i++] = ++len;
            } else if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }

        return lps;
    }

    int strStr(string h, string n) {
        if (n.empty()) return 0;

        vector<int> lps = find_lps(n);
        int i = 0, j = 0;
        int n0 = h.size(), m0 = n.size();

        while (i < n0) {
            if (h[i] == n[j]) {
                i++; j++;
            }

            if (j == m0) {
                return i - j;
            } else if (i < n0 && h[i] != n[j]) {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }

        return -1;
    }
};
