class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
     long long  sum=((n+1)*1ll*(n+2))/2;
       long long  dsum=accumulate(arr.begin(),arr.end(),0);
        return sum-dsum;
    }
};