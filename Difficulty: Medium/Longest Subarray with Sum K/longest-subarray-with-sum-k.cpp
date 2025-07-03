class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k)
    {
    
    unordered_map<int,int>mpp;
    mpp[0]=-1;
    int n=arr.size();
    int sum=0; 
    int maxi=0;
    
    for(int i=0;i<n;i++)
    {
      sum+=arr[i];      
      if(mpp.find(sum-k)!= mpp.end()){
          maxi=max(maxi,i-mpp[sum-k]);
      }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
        
    }
    
    
    return maxi;
    }
};