class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& qr) {
        // code here
        vector<int>ans;
        
        int n=qr.size();
        
        for(int i=0;i<n;i++){
            int up=upper_bound(arr.begin()+qr[i][0] ,arr.begin()+qr[i][1]+1,qr[i][2])-arr.begin();
             int lb=lower_bound(arr.begin()+qr[i][0] ,arr.begin()+qr[i][1]+1,qr[i][2])-arr.begin();
             ans.push_back(up-lb);
        }
        return ans;
    }
};