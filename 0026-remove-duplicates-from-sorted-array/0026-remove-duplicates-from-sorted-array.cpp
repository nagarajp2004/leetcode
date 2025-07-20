class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>x(nums.begin(),nums.end());
        nums=vector(x.begin(),x.end());
        return x.size();
    }
};