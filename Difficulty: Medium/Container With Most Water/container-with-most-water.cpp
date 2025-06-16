class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
      int i=0;
      int n=arr.size();
      int j=n-1;
      int ans=INT_MIN;
      while(i<=j){
          int dist=j-i;
          int mini=min(arr[i],arr[j]);
          ans=max(ans,mini*dist);
          if(arr[i]<=arr[j]){
              i++;
          }else{
              j--;
          }
      }
      return ans;
    }
};