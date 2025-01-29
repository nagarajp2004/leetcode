class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int x=0,ans=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
           x+=nums[i];
            ans=max(ans,x);
            if(x<0)
            {
            x=0;
            }
           
      
        }
        return ans;
    }
};