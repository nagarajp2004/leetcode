class Solution {
public:
    void recur(vector<vector<int>>&vt,int i,int n,vector<int>temp,vector<int>&nums){
   if(i==n)
   {
    vt.push_back(temp);
    return ;
   }
   temp.push_back(nums[i]);
   recur(vt,i+1,n,temp,nums);
   temp.pop_back();
   recur(vt,i+1,n,temp,nums);

 
    }

    vector<vector<int>> subsets(vector<int>& nums)
     {
        vector<int>temp;
        vector<vector<int>>vt;
        recur(vt,0,nums.size(),temp,nums);
        return vt;
    }
};