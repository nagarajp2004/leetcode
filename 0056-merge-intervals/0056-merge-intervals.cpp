class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& x) {
        vector<vector<int>>ans;
    
        sort(x.begin(),x.end());
        ans.push_back(x[0]);
        for(int i=1;i<x.size();i++){
            if(ans.back()[1]>=x[i][0]){
                ans.back()[1]=max(ans.back()[1],x[i][1]);
            }
            else{
                ans.push_back(x[i]);
            }
        }
        return ans;

    }
};