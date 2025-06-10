class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int x=nums[mid];
            if(x==tar){
                return mid;
            }
            else if(nums[0]<=nums[mid])
            {
                 if(tar>=nums[i] && tar<=x){
                    j=mid-1;
                 }else{
                    i=mid+1;
                 }
            }
            else
            {
                  if(tar >= x && tar <=nums[j]){
                         i=mid+1;
                  }else{
                     j=mid-1;
                  }
            }
           
        }
        return -1;
    }
};