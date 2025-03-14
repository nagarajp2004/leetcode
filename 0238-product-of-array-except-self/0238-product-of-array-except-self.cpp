class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,1);
        int l=1;
        for(int i=0;i<n;i++){
            res[i]*=l;
            l*=nums[i];
        }
       int r=1;
        for(int j=n-1;j>=0;j--){
            res[j]*=r;
            r*=nums[j];
        }
        return res;


    }
};