class Solution {
public:
     vector<vector<int>>dp;

    int help(vector<int>&a,vector<int>&b,int i,int j){
        if(i>=a.size() || j>=b.size()){
            return 0;
        }
       if(dp[i][j]!=-1){
        return dp[i][j];
       }
       if(a[i]==b[j]){
        return dp[i][j]=1+help(a,b,i+1,j+1);
       }
       else{
        return dp[i][j]=0;
       }
       return dp[i][j]=0;
      
    } 


    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        dp=vector<vector<int>>(n,vector<int>(m,-1));
    
         int maxi=0;      
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              maxi=max(maxi,help(nums1,nums2,i,j));
            }
        }
        return maxi;
        
    }
};