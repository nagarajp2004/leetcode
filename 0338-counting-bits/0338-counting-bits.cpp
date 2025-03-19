class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1,0);
        int last=1;
        for(int i=1;i<=n;i++){
            if(last*2==i){
               last=i;
            }
            dp[i]=dp[i-last]+1;
        }
        return dp;
    }
};