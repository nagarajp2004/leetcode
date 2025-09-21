class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int>d={10,5,2,1};
        int cnt=0;
        
        for(int i=0;i<5;i++){
            if(d[i] <= n && n>0){
                cnt+=(n/d[i]);
                n=n%d[i];
            }
        }
        return cnt;
    }
};