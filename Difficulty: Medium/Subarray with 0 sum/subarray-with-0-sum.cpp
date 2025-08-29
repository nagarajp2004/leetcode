class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        unordered_set<int>s;
        s.insert(0);
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(s.find(sum)!=s.end()){
                return true;
            }
            s.insert(sum);
            
        }
        return false;
    }
};