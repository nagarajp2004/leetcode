class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k)
    {
        int i=0,j=0;
        int n=nums.size();
       long long count=0;
        int mcount=0;
        int maxi=*max_element(nums.begin(),nums.end());
        while(j<n)
        {
           if(nums[j]==maxi){
            mcount++;
           }
          while(mcount==k && i<=j){
            count+=n-j;
            if(nums[i]==maxi){
                mcount--;
            }
            i++;
          }

           j++;
        }
      return count;
    }
};