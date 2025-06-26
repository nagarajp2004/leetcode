class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
      
        int cnt=0;
        unordered_map<long long ,int>mpp;
        int n=arr.size();
        mpp[0]=0;
        long long  sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mpp.find(sum-k)!=mpp.end()){
                cnt=max(cnt,int(i+1-mpp[sum-k]));
            }
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i+1;
            }
        }
     return cnt;   
    }
};