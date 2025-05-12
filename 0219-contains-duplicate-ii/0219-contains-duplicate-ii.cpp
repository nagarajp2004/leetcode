class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
       unordered_map<int,int>mpp;
       for(int i=0;i<nums.size();i++)
       {
          if(mpp.find(nums[i])!=mpp.end()){
            int diff=i-mpp[nums[i]];
            if(diff<=k){
                return true;
            }
            mpp[nums[i]]=i;
          }else{
            mpp[nums[i]]=i;
          }
       }
       return false;
    }
};