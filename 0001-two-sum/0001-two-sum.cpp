class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       unordered_map<int,int>mpp;
       for(int i=0;i<nums.size();i++){
         mpp[nums[i]]=i;
       }
       
    for(int i=0;i<nums.size();i++){
        if(mpp.find(target-nums[i])!=mpp.end()){
         if(i==mpp[target-nums[i]])
             continue;
             
         if(i<mpp[target-nums[i]]){
            return {i,mpp[target-nums[i]]};
         }  
         else{
            return {mpp[target-nums[i]],i};
         }
        
        }
    }
 return {-1,-1};

    }
};