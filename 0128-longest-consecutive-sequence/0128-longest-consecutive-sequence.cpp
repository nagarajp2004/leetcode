class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int  ans=1;
        if(nums.empty()){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        map<int,int>mpp;
        for(auto& i:nums){
            mpp[i]++;
        }
        
        int x=INT_MIN;
  int maxi_ans=1;
        for(auto& i:mpp){
            if(x==INT_MIN){
                x=i.first;
                continue;
            }

            if(i.first==(x+1)){
                ans++;
                x=i.first;
                maxi_ans=max(maxi_ans,ans);
            }else{
                ans=1;
                x=i.first;
            }

        }
        return maxi_ans;
    }
};