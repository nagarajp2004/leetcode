class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int ones=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                maxi=max(maxi,ones);
                ones=0;
            }else{
                ones++;
            }
            
        }
         maxi=max(maxi,ones);
        return maxi;

    }
};