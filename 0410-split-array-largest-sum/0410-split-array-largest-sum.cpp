class Solution {
public:
    int f(vector<int>nums,int x){
        int count=1;
        int sum=0;
     for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=x){
            sum+=nums[i];
        }
        else{
            sum=nums[i];
            count++;
        }
     }
     return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int maxi=high;
        int mid=0,x=0;
        int ans=0;
        while(high>=low){
            mid=(high+low)/2;
            x=f(nums,mid);
           
            if(x>k){
              
                low=mid+1;
            }
            else{
                high=mid-1;
            }
    }
    return low;
     
    }
};