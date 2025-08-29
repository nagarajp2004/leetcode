class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        unordered_set<int>ans;
        
        unordered_set<int>st(arr1.begin(),arr1.end());
        for(auto x:arr2){
            if(st.count(x)){
                ans.insert(x);
            }
        }
        if(ans.empty()){
            return {-1};
        }
        
        set<int>res;
        
        for(int x:arr3){
            if(ans.count(x)){
                res.insert(x);
            }
        }
        vector<int>x (res.begin(),res.end());
         return x; 
                                   
                               }
};