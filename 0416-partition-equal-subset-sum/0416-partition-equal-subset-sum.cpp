class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int tar=sum/2;
        if(sum%2==1){
            return false;
        }
        bitset<10001>bt(1);
        for(int i:nums){
            bt|=bt<<i;
            if(bt[tar]==1){
                return true;
            }
        }
        return false;
    }
};