class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int i=0;
        int j=m-1;
        sort(a.begin(),a.end());
        int n=a.size();
        if(n<m){
            return -1;
        }
        int mini=INT_MAX;
        for(;j<n;j++,i++)
        {
            mini=min(mini,a[j]-a[i]); 
        }
        return mini;
    }
};