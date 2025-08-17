class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
       int i=0;
       int j=0;
       int n=nums.size();
       int z=0;
       int count=0;
       int maxi=0;
       while(j<n)
       {
       if(nums[j]==0){
        z++;
       }
       while(z>k){
         
          if(nums[i]==0){
            z--;
          }

           i++;
       } 
       
        maxi=max(maxi,j-i+1);
         j++;
       }
       return maxi;    
    }
};