class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nu1, vector<int>& nu2) {
        
        stack<int>st;
        unordered_map<int,int>mpp;

       int n=nu2.size();

       for(int i=n-1;i>=0;i--){
          int ele=nu2[i];

          while(!st.empty() && st.top() <= ele){
            st.pop();
          }
          if(st.empty()){
            mpp[ele]=-1;
          }else{
            mpp[ele]=st.top();
          }
          st.push(ele);
       }

       vector<int>res;
       for(int i=0;i<nu1.size();i++){
           res.push_back(mpp[nu1[i]]);
       }
       return res;

    }
};