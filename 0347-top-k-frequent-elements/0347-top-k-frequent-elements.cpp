class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> x;

        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto& [val,count] : mpp){
            if(x.size()<k){
              x.push({count,val});
            }else if(x.top().first< count){
                  x.pop();
                  x.push({count,val});
            }
        }
        vector<int>ans;

        while(!x.empty()){
                 ans.push_back(x.top().second);
                 x.pop();
        }
        return ans;

    }
};