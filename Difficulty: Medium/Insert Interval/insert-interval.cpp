// User function Template for C++

class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &it,
                                       vector<int> &nit) {
        // code here
        vector<vector<int>> ans;
        int i=0,n=it.size();
        
        while(i<n &&  it[i][1]<nit[0]){
            ans.push_back(it[i]);
            i++;
        }
        
        while(i<n && it[i][0]<=nit[1]){
            nit[0]=min(nit[0],it[i][0]);
            nit[1]=max(nit[1],it[i][1]);
            i++;
        }
        ans.push_back(nit);
        
        while(i<n){
            ans.push_back(it[i]);
            i++;
        }
        return ans;
        
    }
};