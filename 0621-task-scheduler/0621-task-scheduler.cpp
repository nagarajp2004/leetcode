class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<int,int>mpp;
        int maxi=0;

        for(auto i: tasks){
            mpp[i]++;
            maxi=max(maxi,mpp[i]);
        }
       int count=0;
        for(auto& [x,y] :mpp){
            if(y == maxi){
               count++;
            }
        }
        int size=tasks.size();

        int r=max(size,(maxi-1)*(n+1)+count);
      return r;
    }
};