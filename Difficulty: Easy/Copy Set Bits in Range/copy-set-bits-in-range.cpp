// User function Template for C++
class Solution {
  public:
    int setSetBit(int x, int y, int l, int r) {
        // code here
       
       
       for(int i=l;i<=r;i++){
       
        int m=1<<(i-1);
        
        
        if(y & m){
            x =x|m;
        } 
         
         }
         
         return x;
       }
    
};