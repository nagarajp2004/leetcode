class Solution {
public:
    int f(int i,vector<int>&nums,vector<int>&vt){
        if(i<0){
            return 0;
        }
        if(vt[i]!=-1){
            return vt[i];
        }

        int p=nums[i]+f(i-2,nums,vt);
        int np=f(i-1,nums,vt);

        return vt[i]=max(p,np);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>vt(n+1,-1);
        return f(n-1,nums,vt);
    }
};