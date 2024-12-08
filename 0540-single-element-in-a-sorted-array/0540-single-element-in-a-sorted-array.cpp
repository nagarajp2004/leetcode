class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
       if(j>=2){ 
        while(j>=i){
            int mid=(i+j)/2;
          if(mid==0){
                return nums[mid];
     
          }
          else if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                     return nums[mid];
            }
            else if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                  i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    j=mid-1;

                }
                else{
                    i=mid+1;
                }
            }
        }
        
        }else{
          return nums[0];
        }
        return 0;
    }
};