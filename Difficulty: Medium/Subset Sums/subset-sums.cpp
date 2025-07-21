class Solution {
  public:
     void f(int i,int x,vector<int>&arr,vector<int>&ans){
         if(i>=arr.size()){
               ans.push_back(x);
               return;
         }
         f(i+1,x,arr,ans);
         f(i+1,x+arr[i],arr,ans);
     }
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int x=0;
        vector<int>ans;
         f(0,0,arr,ans);
        return ans;
        
    }
};