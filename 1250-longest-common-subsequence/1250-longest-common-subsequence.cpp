class Solution {
public:
    int f(int ind1,int ind2,string a,string b,vector<vector<int>>&dp){
        if(ind1==0 || ind2==0){
            return 0;
        }
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        if(a[ind1-1]==b[ind2-1]){
            return dp[ind1][ind2]=1 +f(ind1-1,ind2-1,a,b,dp);
        }
        return dp[ind1][ind2]=max(f(ind1-1,ind2,a,b,dp),f(ind1,ind2-1,a,b,dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
         vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,0));
        
         for(int ind1=1;ind1<=(text1.size());ind1++){
            for(int ind2=1;ind2<=(text2.size());ind2++){
            if(text1[ind1-1]==text2[ind2-1]){
             dp[ind1][ind2]=1 +dp[ind1-1][ind2-1];
        }  
        else
            dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
         }

       
        return dp[text1.size()][text2.size()];
    }
};