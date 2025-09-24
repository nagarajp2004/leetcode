class Solution {
  public:
    bool validateOp(vector<int>& a, vector<int>& b) {
        // code here
        stack<int>st;
        
         int i=0;
         int n=a.size();
         int j=0;
         
         while(i<n){
             st.push(a[i]);
             i++;
             while(!st.empty() && st.top()==b[j]){
                 st.pop();
                 j++;
             }
             
         }
         
         if(j==n){
             return true;
         }
         return false;
    }
};