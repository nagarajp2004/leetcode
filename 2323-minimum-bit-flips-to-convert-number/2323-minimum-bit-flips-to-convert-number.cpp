class Solution {
public:
    int minBitFlips(int s, int g) {
       
       int x=s^g;
       int count=0;
       while(x){
          if(x&1){
            count++;
          }
         x=x>>1;
          
       }
       return count; 
    }
};