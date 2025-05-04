class Solution {
public:
     void recur(vector<int>&nums,vector<vector<int>>&vt,int k,int n,int i,vector<int>&temp){
        if(i==nums.size() && k==0 ){
            if(n==0){
                vt.push_back(temp);
            }
            return;
        }

        else if(i==nums.size()){
            return ;
        }
        recur(nums,vt,k,n,i+1,temp);
        temp.push_back(nums[i]);
        recur(nums,vt,k-1,n-nums[i],i+1,temp);
        temp.pop_back();
     }

    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>>vt;
        vector<int>nums={1,2,3,4,5,6,7,8,9};
       vector<int>temp;
 recur(nums,vt,k,n,0,temp);
      return vt;
    }
};