class Solution {
public:
    vector<string> tostringvec(string& s){
        stringstream ss(s);
        vector<string> ans;
        string w;
        while(ss >> w){
            ans.push_back(w);
        }
        return ans;
    }

    bool areSentencesSimilar(string sen1, string sen2) {
        auto s1 = tostringvec(sen1);
        auto s2 = tostringvec(sen2);
        int n = s1.size();
        int m = s2.size();

        if(n > m) {
            swap(s1, s2);
            swap(n, m);
        }

        int l = 0, r1 = n - 1, r2 = m - 1;
        
        // Left to right comparison
        while(l < n && s1[l] == s2[l]) l++;

        // Right to left comparison
        while(r1 >= 0 && s1[r1] == s2[r2]) {
            r1--;
            r2--;
        }

        // Check if the left index surpasses the right index
        return r1 < l;
    }
};
