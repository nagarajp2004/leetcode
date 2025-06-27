class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,right=0;
            int cnt=0;
            int sum=0;
            sort(nums.begin(),nums.end());
        while(right<n && left<n){
            if(right==left || nums[right]-nums[left] <k){
                right++;
            }
            else if(nums[right]-nums[left]>k){
                left++;
            }else{
                cnt++;
                left++;
                while(left<n && nums[left]==nums[left-1]){
                    left++;
                }
            }
        }
        return cnt;
        
            }
};