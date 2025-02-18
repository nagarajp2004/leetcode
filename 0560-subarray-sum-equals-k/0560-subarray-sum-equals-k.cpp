class Solution {
public:
    int subarraySum(vector<int>& arr, int k)
    {
         int n=arr.size();
        vector<int>vt(n);
        map<int,int>mpp;
        mpp[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];

            if(mpp.find(sum-k)!=mpp.end()){
             count+=mpp[sum-k];
            
            }
             mpp[sum]++;
        }
        return count;
    }
};