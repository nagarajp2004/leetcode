class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size();
        int r=0,l=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(r<n && l<m)
        {
            if(g[r]<=s[l])
            {
               r++;
            }
            l++;
        }
        return r;
    }
};