class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]==')'){
                int x=st.top();
                st.pop();
                
                bool flag=true;
                 
                while(!st.empty() && x!='('){
                    
                    if(x=='+' || x=='-' || x=='*' || x=='/'){
                        flag=false;
                    }
                    x=st.top();
                    st.pop();
                }
                if(flag){
                    return true;
                }
                
                
            }else{
                st.push(s[i]);
            }
        }
        return false;
    }
};
