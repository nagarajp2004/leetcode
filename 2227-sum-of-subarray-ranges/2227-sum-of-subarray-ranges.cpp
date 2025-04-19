class Solution {
public:
    long long subArrayRanges(vector<int>& nums) 
    {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
             long long lar=nums[i],smal=nums[i];
             for(int j=i+1;j<n;j++){
                lar=max(lar,(long long)nums[j]);
                smal=min(smal,(long  long)nums[j]);
                ans+=(lar-smal);
             }
        }
        return ans;
    }
};