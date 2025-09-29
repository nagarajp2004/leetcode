class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int sec=INT_MAX;

        for(auto i: nums){
            if(i<=first){
                first=i;
            }else if(i<=sec){
                sec=i;
            }else{
                return true;
            }
        }
        return false;
    }
};