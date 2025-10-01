class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int>mpp;

        for(auto i:nums){
            mpp[i]++;
        }
        
        int ans=0;

        for(auto [a,b] :mpp){
            ans+=((b-1)*(b))/2;
        }
        return ans;
    }
};