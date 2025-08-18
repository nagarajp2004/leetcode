class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxf=0;
        int mpp[26]={0};
        int n=s.size();
        int ans=0;
        while(j<n){
            mpp[s[j]-'A']++;
            maxf=max(maxf,mpp[s[j]-'A']);
            while((j-i+1)-maxf >k){
                mpp[s[i]-'A']--;
                i++;
            }
            if((j-i+1)-maxf <=k){
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};