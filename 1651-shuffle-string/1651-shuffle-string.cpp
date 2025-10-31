class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        map<int,char>mpp;
        int i=0,j=0;
        int n=ind.size();
        for(;i<n;i++){
            mpp[ind[i]]=s[i];
        }

        string x="";
        for(auto [a,b]:mpp){
            x+=b;
        }
        return x;
    }
};