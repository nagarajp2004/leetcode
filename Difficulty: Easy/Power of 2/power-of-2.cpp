class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        if(n & n-1){
            return 0;
        }
        else{
            return 1;
        }
        return 0;
    }
};