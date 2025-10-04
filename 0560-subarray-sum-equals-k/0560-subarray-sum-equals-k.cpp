class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
       
        mpp[0]=1;
        int count=0;
        int sum=0;
        for(auto i: nums){
          sum+=i;
         
          if(mpp.find(sum-k)!=mpp.end()){
              count+=mpp[sum-k];
              
          }
           mpp[sum]++;
        }
        return count;
    }
};