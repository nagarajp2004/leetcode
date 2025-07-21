// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
        vector<int>den({2000,500,200,100,50,20,10,5,2,1});
       vector<int>ans;
       
       for(int i=0;i<den.size();i++){
           while(den[i]<=N){
               ans.push_back(den[i]);
               N-=den[i];
           }
       }
       return ans;
    }
};