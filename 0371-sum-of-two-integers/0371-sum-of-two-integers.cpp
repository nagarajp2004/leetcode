class Solution {
public:
    int getSum(int a, int b) {
        

        while(b!=0){
            int cary=(a&b)<<1;
            a=a^b;
            b=cary;
        }
        return a;
    }
};