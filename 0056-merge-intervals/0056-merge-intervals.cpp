class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ins) {
        sort(ins.begin(),ins.end(),[](const vector<int>&a ,const vector<int>& b){
            return a[0] < b[0];
        });

        vector<vector<int>>ans;

        ans.push_back(ins[0]);
      int n=ins.size();
      int i=1;
      while(i<n){
        if(ans.back()[1] >=ins[i][0]){
            ans.back()[1]=max(ins[i][1],ans.back()[1]);
        }else{
            ans.push_back(ins[i]);
        }
        i++;
      }
      return ans;

    }
};