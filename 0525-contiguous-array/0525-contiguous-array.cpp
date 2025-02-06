class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
    int n=nums.size();
     map<int,int>mpp;
     int sum=0;
    int sub_len=0;
    for(int i=0;i<n;i++){
        sum+=nums[i]==0? -1:1;
        if(sum==0)
        {
              sub_len=i+1;
        }else if(mpp.find(sum)!=mpp.end())
        {
             sub_len = max(sub_len, i - mpp[sum]);
        }
        else
        {
            mpp[sum]=i;
        }
    }
    return sub_len;
    }
};