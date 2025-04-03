class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char>st;
        for(char i:s){
            if(i=='('){
              if(st.size()>=1)
              {
                ans+='(';
              }
              st.push('(');
             
            }
            else{
                st.pop();
                if(st.size()>=1){
                   ans+=')';
                }
            }
        }
        return ans;
    }
};