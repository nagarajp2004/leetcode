class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int>presum;
        presum[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
           
           if(presum.find(sum-goal)!=presum.end())
               count+=presum[sum-goal];
        
           presum[sum]++;
        }
        return count;
         

    }
};