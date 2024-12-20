class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size=nums.size();
        int subsize=(1<<size);
        vector<vector<int>>ans;
        for(int i=0;i<subsize;i++){
            vector<int>temp;
            for(int j=0;j<size;j++){
                if(i&(1<<j)){
                    temp.push_back(nums[j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};