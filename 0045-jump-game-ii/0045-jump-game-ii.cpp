class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int curend=0;
         int cnt=0;
       int far=0;
       for(int i=0;i<nums.size()-1;i++){
        if(i>far){
             return 0;
        }
          far=max(far,nums[i]+i);
          if(i==curend){
            cnt++;
            curend=far;
          }

       } 
       return cnt;
    }
};