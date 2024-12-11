class Solution {
public:
    int possible(vector<int>&nums,int x,int t){
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
           count+=ceil((double)nums[i]/(double)x);
        }
        if(count<=t){
            return 1;
        }
        else{
            return 0;
        }
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int mini=1;
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=maxi;
        while(maxi>=mini){
           int mid=(maxi+mini)/2;
            if(possible(nums,mid,t)){
              ans=min(ans,mid);
              maxi=mid-1;
            }
            else{
                mini=mid+1;
            }
        }
        return ans;
    }
};