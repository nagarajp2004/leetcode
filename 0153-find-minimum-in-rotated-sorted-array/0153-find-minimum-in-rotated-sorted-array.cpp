class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int sol=-1;
        int i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[0]<=nums[mid]){
                i=mid+1;
            }
            else{
                sol=nums[mid];
                j=mid-1;
            }
        }
        if(sol==-1){
            return nums[0];
        }
        return sol;
    }
};