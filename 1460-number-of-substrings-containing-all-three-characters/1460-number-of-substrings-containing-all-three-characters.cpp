class Solution {
public:
    int f(string s ,int k){
        unordered_map<char,int>mpp;
        int i=0,j=0;
        int n=s.size();
         int ans=0;
        while(j < n)
        {
            mpp[s[j]]++;
            while(mpp.size() > k){
                mpp[s[i]]--;
                if(mpp[s[i]] <=0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }

    int numberOfSubstrings(string s) {
        return f(s,3) -f(s,2);
    }
};