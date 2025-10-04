#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0, n = s.size();

        // Count frequency of each unique word
        unordered_map<string,int> mymap;
        for (auto &w : words) {
            mymap[w]++;
        }

        // Check each unique word
        for (auto &entry : mymap) {
            string p = entry.first;
            int freq = entry.second;

            int i = 0, j = 0;   // i -> s, j -> p
            int m = p.size();

            // Two pointer check
            while (i < n && j < m) {
                if (s[i] == p[j]) {
                    i++; j++;  // match, move both
                } else {
                    i++;       // move only on s
                }
            }

            // If j reached end, p is a subsequence of s
            if (j == m) count += freq;
        }

        return count;
    }
};
