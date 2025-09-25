class Solution {
public:
    void f(int i,int tar,vector<vector<int>>&ans,vector<int>&arr,vector<int>&temp){
        if(i<0){
            return ;
         }
        
         if(tar==0){
            ans.push_back(temp);
            return;
          }
          if(tar<0){
            return;
          }


        temp.push_back(arr[i]);
      f(i,tar-arr[i],ans,arr,temp);
      temp.pop_back();
      f(i-1,tar,ans,arr,temp);
    }
 

    vector<vector<int>> combinationSum(vector<int>& ca, int target) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=ca.size();
        f(n-1,target,ans,ca,temp);
        return ans;
    }
};