// User function Template for C++

class Solution {
  public:
    unsigned int reverseBits(unsigned int n) {
        // code here
        int ans=0;
        while(n){
            bool x=n&1;
            n=n>>1;
            ans=ans|x;
            ans=ans<<1;
        
        }
        return ans>>1;
    }
};