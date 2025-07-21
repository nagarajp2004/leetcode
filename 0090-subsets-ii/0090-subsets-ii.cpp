class Solution {
public:
    void f(set<vector<int>>&ans,vector<int>&x,int i,vector<int>&nums)
    {
        if(i==nums.size()){
            sort(x.begin(),x.end());
            ans.insert(x);
            return ;
        }
        f(ans,x,i+1,nums);
        x.push_back(nums[i]);
        f(ans,x,i+1,nums);
        x.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        vector<int>x;
        f(ans,x,0,nums);
        vector<vector<int>>y(ans.begin(),ans.end());
        return y;
   
    }
};