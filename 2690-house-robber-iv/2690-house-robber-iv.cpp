class Solution {
public:
    int f(vector<int>&nums,int mid)
    {  int n=nums.size();
       int count=0;
       for(int i=0;i<n;i++){
         if(nums[i]<=mid){
            count++;
            i++;
         }
       }

      return count;
    }
    int minCapability(vector<int>& nums, int k) 
    {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(mini<=maxi){
            int mid=(mini+maxi)/2;
            int x=f(nums,mid);
          
            if(x>=k){
               ans=mid;
              
               maxi=mid-1;
            }else{
                mini=mid+1;
            }
           
        }
        return ans;

    }
};