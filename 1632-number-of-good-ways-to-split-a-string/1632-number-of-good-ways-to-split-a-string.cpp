class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;

        for(auto i:s){
            mpp1[i]++;
        }
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
        mpp1[s[i]]--;
        
        if(mpp1[s[i]]==0){
            mpp1.erase(s[i]);
        }
         mpp2[s[i]]++;
         if(mpp1.size()==mpp2.size()){
            ans++;
         }
        }
        return ans;
    }
};