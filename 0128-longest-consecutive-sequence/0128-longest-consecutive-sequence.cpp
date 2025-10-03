class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st(nums.begin(),nums.end());
        int mc=0;
        int i=0;
        int n=nums.size();
        while(i<n)
        {
            if(st.find(nums[i]-1)==st.end()){
                  int x=nums[i];
                  int count=0;
                  while(st.find(x)!=st.end()){
                     count++;
                     st.erase(x);
                     x++;
                 }
              mc=max(mc,count);
            }
            i++;
        }
        return mc;
    }
};