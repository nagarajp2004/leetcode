class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
       int ans=0;

        while(i<j){
             int val=nums[i]+nums[j];
             if(val==k){
                ans++;
                i++;
                j--;
             }
             else if(val > k){
                j--;
             }else{
                i++;
             }
        }
        return ans;
    }
};