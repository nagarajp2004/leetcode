class Solution {
public:
   void f(vector<vector<int>>&ans,vector<int>nums,int index)
   {
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=index;i<nums.size();i++){
           swap(nums[index],nums[i]);
           f(ans,nums,index+1);
        } 
   }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int index=0;
        f(ans,nums,index);
        return ans;
    }
};