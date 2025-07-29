class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low=0,high=m;
        while(low<=high){
            int mid=(high+low)/2;
            int power=pow(mid,n);
            if(power==m){
                return mid;
            }
            else if(power >m){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return -1;
    }
};