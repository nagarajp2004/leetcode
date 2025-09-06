class Solution {
public:
    int f(int i,int sum,vector<int>&arr){
        if(i==0){
            if(sum ==0 && arr[0]==0){
                return 2;
            }

            if(sum+arr[0] ==0){
                return 1;
            }else if(sum - arr[0] ==0){
                 return 1;
            }else{
                return 0;
            }
        }

        int mi=f(i-1,sum-arr[i],arr);
        int mx=f(i-1,sum+arr[i],arr);
        return mx+mi;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return f(n-1,target,nums);
    }
};