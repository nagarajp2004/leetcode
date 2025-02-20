class Solution {
public:
    int f(vector<int>& nums, int k){
          int total=0;
        unordered_map<int,int>mp;
        int i=0,j=0,n=nums.size(),count=0;

        while(j<n)
        {
            mp[nums[j]]++;
            if(mp[nums[j]]==1){
                count++;
            }
            while(count==k && i<=j){
                 total+=n-j;
                 mp[nums[i]]--;
                 if(mp[nums[i]]==0){
                    count--;
                 }
                 i++;
            }

            j++;
        }
        return total;
    }
    

    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return f(nums,k)-f(nums,k+1);
    }
};