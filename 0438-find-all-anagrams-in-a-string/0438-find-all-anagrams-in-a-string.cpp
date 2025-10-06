class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp;
        unordered_map<char,int>ms;

        for(auto i:p){
            mp[i]++;
        }
        vector<int>ans;

     int m=p.size();
        int n=s.size();
        for(int i=0;i<n;i++){
            ms[s[i]]++;

            if(i>=m){
                ms[s[i-m]]--;
                if(ms[s[i-m]] ==0){
                    ms.erase(s[i-m]);
                }
            }
            if(mp==ms){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};