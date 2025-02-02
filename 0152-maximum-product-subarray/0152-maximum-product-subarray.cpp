class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1,sufix=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
          if(prefix==0){
            prefix=1;
          }
          if(sufix==0){
            sufix=1;
          }
          prefix*=nums[i];
          sufix*=nums[nums.size()-1-i];
          maxi=max(maxi,prefix);
          maxi=max(maxi,sufix);
        }
        return maxi;
    }
};