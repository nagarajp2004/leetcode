// User function Template for C++

class Solution {
  public:
     void f(stack<int>&st,int x){
         if(st.empty()){
             st.push(x);
             return;
         }
         
         int y=st.top();
         st.pop();
         f(st,x);
         st.push(y);
     }
    stack<int> insertAtBottom(stack<int> st, int x) 
    {
        f(st,x);
        return st;
    }
};