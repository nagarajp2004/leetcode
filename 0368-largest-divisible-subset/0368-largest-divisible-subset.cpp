class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int>vt(nums.size(),1),hash(nums.size());
        int last=0;
       int maxi=1;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            hash[i]=i;
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && vt[i]<vt[j]+1){
                    vt[i]=vt[j]+1;
                    hash[i]=j;

                }
            }
            if(maxi<vt[i]){
                maxi=vt[i];
                last=i;
            }


        }
        vector<int>ans;
        ans.push_back(nums[last]);
        while(hash[last]!=last){
            last=hash[last];
            ans.push_back(nums[last]);
        }
        reverse(ans.begin(),ans.end());
return ans;
    }
};