class Solution {
public:
   vector<int> f(vector<int>& nums)
   {

     int n=nums.size();
     int i=n-2;
     while(i>=0 && nums[i] >=nums[i+1]   )i--;

     if( i< 0){
        reverse(nums.begin(),nums.end());
        return nums;
     }

     int j=n-1;

     for(;j>=0;j--){

          if(nums[j] > nums[i])
          {
            break;
          }
       }
       swap(nums[i],nums[j]);
    
    reverse(nums.begin()+i+1,nums.end());
       return nums;
   }


    vector<vector<int>> permute(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        res.push_back(nums);
      
         vector<int>start=nums;
         

         while(true){
             nums=f(nums);
             if(nums==start){
                break;
             }
             
             res.push_back(nums);
         
         }
   return res;
    }
};