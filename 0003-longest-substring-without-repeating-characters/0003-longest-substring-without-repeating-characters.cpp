class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mpp;

        int i=0,j=1;
        int n=s.size();
        if(n==0){
            return 0;
        }
         mpp[s[i]]=0;

         int ans=1;

         while(j<n && i < j){
            if(mpp.find(s[j])!=mpp.end()){
                int x=mpp[s[j]]+1;
                if(i<x)
                   i=x;
            }
               mpp[s[j]]=j;
        
        ans=max(ans,j-i+1);
        j++;
         }
         return ans;
    }
};