class Solution {
public:
    bool f(string s,int i,vector<string>&w, vector<int>&dp){
        if(s.size()==i){
            return true;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
    
       for(string x :w){
        int len=x.size();
        if(i+len <=s.size() && s.substr(i,len)==x){
            if(f(s,i+len,w,dp)){
                return dp[i]=true;
            }
        }
       }
  return dp[i]=false;
    }


    bool wordBreak(string s, vector<string>& wo) {
        vector<int>dp(s.size(),-1);
        return f(s,0,wo,dp);
    }
};