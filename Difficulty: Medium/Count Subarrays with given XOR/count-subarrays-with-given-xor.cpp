class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        
        int count=0;
        int n=arr.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum^=arr[i];
            if(mpp.find(sum^k)!=mpp.end()){
                count+=mpp[sum^k];
            }
            mpp[sum]++;
        }
        return count;
    }
};