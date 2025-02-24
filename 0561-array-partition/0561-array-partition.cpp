class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i=i+2){
        ans+=min(nums[i],nums[i+1]);    
        }
        return ans;
    }
};