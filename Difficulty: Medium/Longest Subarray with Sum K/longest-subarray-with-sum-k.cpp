class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        int sum=0;
        int ans=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mpp.find(sum-k)!=mpp.end()){
               ans=max(ans,i-mpp[sum-k]);            
            }
            
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
        return ans==-1?0:ans;
    }
};