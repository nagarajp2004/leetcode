class Solution {
public:
    int reverseBits(int n) {
        int res=0;
        int x=32;
        while(x){
           res=res<<1;
            if(n&1){
                
                res|=1;
            }
            n=n>>1;
            x=x-1;
        }
        return res;
    }
};