class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int i=0;
        int j=m-1;
        int n=a.size();
        int ans=INT_MAX;
        while(j<n){
            ans=min(ans,a[j]-a[i]);
            i++;
            j++;
        }
        return ans;
    }
};