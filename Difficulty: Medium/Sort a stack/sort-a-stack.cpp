class Solution {
  public:
    void f(stack<int>& st){
        if(st.size() <=1){
            return ;
        }
        int x=st.top();
        st.pop();
        f(st);
        int y=st.top();
        st.pop();
        
        if(x<y){
            st.push(x);
            st.push(y);
        }else{
            st.push(y);
            st.push(x);
        }
        
    }
  
    void sortStack(stack<int> &st) {
        // code here
        int n=st.size();
        for(int i=0;i<n;i++)
        f(st);
    }
};
