class Solution {
public:
     int f(int i,vector<int>&nums,int target){
        
    
        if(i==0 && target == 0){
            return 1;
        }
        
        if(i==0){
            return 0;
        }
   

        return f(i-1,nums,target+nums[i-1]) + f(i-1,nums,target-nums[i-1]);
     }


    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return f(n,nums,target);
    }
};