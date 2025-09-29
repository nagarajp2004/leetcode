class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums)
     {
        long long count=0;
        int strik=0;
        for(auto i:nums){
            if(i==0){
                strik++;
                count+=strik;
            }else{
                strik=0;
            }
        }
        return count;
    }
};