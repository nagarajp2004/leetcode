class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) 
    {
        int i=0,j=0;
        int sum=0,maxi=INT_MAX;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
        
            while(i<=j && sum>=t)
            {
              maxi=min(maxi,j-i+1);
               sum-=nums[i];
               i++;
            }
            j++;
          
        
        }





        return maxi==INT_MAX?0:maxi;
    }
};