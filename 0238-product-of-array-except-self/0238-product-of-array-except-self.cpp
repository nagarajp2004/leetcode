class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
          int n=nums.size();
          vector<int>prev(n,1);
          vector<int>suc(n,1);

          for(int i=1;i<n;i++){
            prev[i]=prev[i-1]*nums[i-1];
            suc[n-i-1]=suc[n-i]*nums[n-i];
          } 

        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(prev[i]*suc[i]);
        }
        return ans;
    }
};