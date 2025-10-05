class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int max_len=0;
unordered_map<int,int>mpp;
  mpp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]?1:-1;
   
            if(mpp.find(sum)!=mpp.end()){
                max_len=max(max_len,i-mpp[sum]);
            }else{
                mpp[sum]=i;
            }
        }
        return max_len;
    }
};