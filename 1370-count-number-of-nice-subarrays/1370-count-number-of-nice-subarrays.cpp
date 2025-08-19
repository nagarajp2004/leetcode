class Solution {
 public:
     int f(vector<int>& nums,int k){
         if(k<0){
            return 0;
         }

         int i=0;
         int j=0;
         int cnt=0;
         int ans =0;
         int n=nums.size();
        
         while(j<n)
         {
             if(nums[j]%2){
                cnt++;
             }

            
            while(cnt > k){
                if(nums[i]%2){
                    cnt--;
                }
                i++;
            }
            if(cnt <= k){
                ans+=j-i+1;
            }

            j++;
         }
         return ans ;

     }


    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums,k) - f(nums,k-1);
    }
};