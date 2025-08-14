class Solution {
  public:
    int findPosition(int n) {
        // code here
        if((n& (n-1))){
            return -1;
        }
        int i=1;
        while(n){
            if(n&1){
                return i;
            }
            n=n>>1;
            i++;
        }
        return -1;
        
    }
};