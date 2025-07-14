class Solution {
  public:
   bool f(int n,vector<int>&arr,int tar){
      if(tar==0){
          return 1;
      }   
      if(n<0){
         return 0;
      }
      if(arr[n]>tar){
          return f(n-1,arr,tar);
      }
      return f(n-1,arr,tar-arr[n])||f(n-1,arr,tar);
   }
    bool equalPartition(vector<int>& arr) {
        // code here
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%2==1){
            return 0;
        }
        int tar=sum/2;
        int n=arr.size()-1;
       return f(n,arr,tar);
    }
};