class Solution {
public:
    bool isHappy(int n) {
        int x=100;
        while(n!=1){
            int sum=0;
            while(n){
               sum+=(n%10)*(n%10);
                n=n/10;
            }
           n=sum;
        x--;
        if(!x){
            return false;
        }
         
        }
        return true;

    }
};