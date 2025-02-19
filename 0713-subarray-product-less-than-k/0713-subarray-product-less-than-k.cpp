class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
    int left=0,right=0,pro=1;
    int n=nums.size();
    int cnt=0;
    while(right<n){
        pro*=nums[right];
        while(pro>=k && left<=right){
            pro/=nums[left];
            left++;
        }
   cnt+=right-left+1;
   right++;
    }    
    return cnt;
    }
};