class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int x=a^b;
            int y=a&b;
            y=y<<1;
            a=x;
            b=y;
        }
        return a;
    }
};