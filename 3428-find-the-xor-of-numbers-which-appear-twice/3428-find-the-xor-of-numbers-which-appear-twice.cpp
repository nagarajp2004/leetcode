class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int>st;
        int res=0;
        for(auto i:nums){
            if(st.find(i)!=st.end()){
              res^=i;
            }else{
                st.insert(i);
            }

        }
        return res;
    }
};