class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& ns) {
      int i=0;
      int j=0;
      int sum=0;
      int n=ns.size();
      int sol=INT_MAX;
      while(j<n){
         sum+=ns[j];
         while(sum>=tar){
            sol=min(sol,j-i+1);
             sum-=ns[i];
             i++;
         }
         j++;
      }
      return sol==INT_MAX?0:sol;

    }
};