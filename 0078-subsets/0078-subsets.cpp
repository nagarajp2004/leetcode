class Solution {
public:
    void subarray(vector<int>&a,int index,int n,vector<vector<int>>&ans,vector<int>temp){
          if(index==n){
            ans.push_back(temp);
            return;
          } 
          subarray(a,index+1,n,ans,temp);
          temp.push_back(a[index]);
          subarray(a,index+1,n,ans,temp);
 }
   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        subarray(nums,0,nums.size(),ans,temp);
        return ans;
    }
};