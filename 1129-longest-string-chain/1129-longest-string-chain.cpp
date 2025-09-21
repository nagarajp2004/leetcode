class Solution {
public:
  static  bool compare( string s1, string s2){
        return s1.length() < s2.length();
    }

    int longestStrChain(vector<string>& words) {
        unordered_map<string,int>dp;
        sort(words.begin(),words.end(),compare);

     int ans=0;
        for(auto w:words){
            for(int i=0;i<w.size();i++){
                string temp=w.substr(0,i)+w.substr(i+1);
                dp[w]=max(dp[w],dp.find(temp)==dp.end()?1:dp[temp]+1);
            }
            ans=max(ans,dp[w]);
        }
        return ans;
    }
};