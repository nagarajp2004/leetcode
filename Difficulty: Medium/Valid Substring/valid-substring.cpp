class Solution {
  public:
    int maxLength(string& s) {
        // code here
        int ans=0;
        stack<int>st;
        st.push(-1);
        
        int n=s.size();
        
        for(int i=0;i<n;i++){
            if(s[i] =='('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }else{
                    ans=max(ans,i-st.top());
                }
            }
        }
        return ans;
        return 0;
    }
};