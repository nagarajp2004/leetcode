class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        set<vector<int>>vt;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                  int k=j+1;
                  int l=nums.size()-1;
                  while(k<l){
                    long long sum=1ll*nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                     vt.insert({nums[i],nums[j],nums[k],nums[l]});
                     k++;
                     l--;
                    }
                     else if(sum<target){
                      k++;
                     }else{
                       l--;
                     }
                  }

            }
        }
        vector<vector<int>>ans(vt.begin(),vt.end());
        return ans;
    }
};