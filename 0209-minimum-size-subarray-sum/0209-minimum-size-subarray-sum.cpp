class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int cnt=INT_MAX;
       int sum=nums[0];
       int n=nums.size();
       int i=0;
       if(sum>=target){
        cnt=1;
       }
    
       for(int j=1;j<n;j++){
          sum+=nums[j];
          while(sum>=target){
               cnt=min(cnt,j-i+1);
               sum-=nums[i];
               i++;
          }
       }
      if(cnt==INT_MAX){
        return 0;
      } 
      return cnt;
    }
};