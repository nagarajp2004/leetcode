class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        
        int n=nums.size();
        k=k%n;
        int o=n-k;
        reverse(nums.begin(),nums.begin()+o);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};