class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor){
            return 1;
        }if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // Special case to prevent overflow
        }
        

        
        bool sign=0;
        if(dividend>=0 && divisor<0){
            sign=1;
            
        }
        if(dividend<0 && divisor>=0){
            sign=1;
           
        }
       long divisor1=abs(divisor);
        long dividend1=abs(dividend);
        long ans=0;
        while(dividend1>=divisor1){
            int count=0;
            while(dividend1>=(divisor1<<count+1)){
                count++;
            }
              ans+=(1<<count);
              dividend1-=(divisor1<<count);
        }
        if(ans>=pow(2,31)&& sign==1){
            return INT_MAX;
        }
        if(ans>=pow(2,31) && sign==0){
            return INT_MIN;
        }
        return sign?-ans:ans;
    }
};