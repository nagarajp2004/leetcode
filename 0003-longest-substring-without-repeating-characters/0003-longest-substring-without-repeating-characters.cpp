class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mpp;
        int n=s.size();
        int maxi=0;
    int i=0;
    int j=0;
    while(i<=j && j<n){
            if(mpp.find(s[j])==mpp.end()){
                 mpp[s[j]]=j;
            }else{
               
                i=max(i,mpp[s[j]]+1);
                mpp[s[j]]=j;
            }
         
             maxi=max(maxi,j-i+1);
             cout<<maxi;
            j++;
    }
     return maxi;

    }
};