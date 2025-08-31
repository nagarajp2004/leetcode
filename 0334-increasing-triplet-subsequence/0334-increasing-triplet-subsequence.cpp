class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int s=INT_MAX;
        int m=INT_MAX;

        for(auto& i: nums){
            if(s>=i){
                s=i;
            }else if(m >=i){
                m=i;
            }else{
                return true;
            }
        }
        return false;
    }
};