class Solution {
public:
    bool divideArray(vector<int>& nums)
{
      unordered_map<int,int>mpp;
      for( auto i:nums)
      {
        mpp[i]++;
      } 

        for(auto i:mpp){
            if(i.second%2!=0){
                return false;
            }
        }
        return true;
}
};