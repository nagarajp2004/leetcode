class Solution {
  public:
    int countSetBits(int n) {
        // code here
     int i=0;
     int total=0;
     while((1<<i) <= n){
         
         int gs=1<<(i+1);
         int cg=(n+1)/gs;
         
         total+=cg*(1<<i);
         
         int rem=(n+1)%gs;
         total+=max(0,rem-(1<<i));
         i++;
     }
     return total;
    }
};
