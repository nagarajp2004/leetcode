class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int>mpp;
         int max_len=0;
         int res=1;

        int left=0;
        int n=s.size();
        for(int right=0;right<n;right++){
           mpp[s[right]]++;
         max_len = max(max_len, mpp[s[right]]);


           while(left < n && ((right-left + 1 ) - max_len)>k){
            mpp[s[left]]--;
            left++;
           }

           res=max(max_len,right-left+1);
        }
        return res;
    }
};