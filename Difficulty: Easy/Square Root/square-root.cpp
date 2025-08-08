class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        if(n==1){
            return 1;
        }
        int i=1;
        int j=n-1;
        int ans=1;

        while(i<=j){
            int mid=(i+j)/2;
            if(mid*mid <= n){
                ans=mid;        
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return ans;
    }
};