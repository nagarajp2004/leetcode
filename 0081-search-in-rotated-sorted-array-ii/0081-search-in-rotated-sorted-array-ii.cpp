class Solution {
public:
    bool search(vector<int>& nums, int target) {
       int i=0;
       int j=nums.size()-1;
       
      
       while(j>=i){
          int mid=i+(j-i)/2;
        

         
        if(nums[mid]==target){
            return true;
        }

        else  if(nums[i]==nums[mid] && nums[mid]==nums[j])
         {
            i=i+1;
            j=j-1;
            continue;
         }
        else if(nums[i]>nums[mid]){
               if(nums[mid]<=target && nums[j]>=target){
                i=mid+1;
               }
               else{
                j=mid-1;
               }
        }
        else{
                  if(nums[i]<=target && nums[mid]>=target){
                    j=mid-1;
                  }
                  else{
                    i=mid+1;
                  }
        }
       }
       return false; 
    }
};