class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
          unordered_map<int,int>mpp;
          int n=arr.size();
          mpp[0]++;
          int x=0;
          int cnt=0;
          
          for(int i=0;i<n;i++){
             
              x=x^arr[i];
              int y=x;
              if(mpp.find(y^k)!=mpp.end()){
                 cnt+=mpp[y^k];
              }
              mpp[x]++;
          
              
          }
          return cnt;
          
    }
};