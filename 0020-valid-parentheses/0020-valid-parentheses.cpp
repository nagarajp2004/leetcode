class Solution {
public:
     char f(char x){
        if(x==')'){
            return '(';
        }
        else if(x==']'){
            return '[';
        }else {
            return '{';
        }
     }

    bool isValid(string s) {
        stack<int>st;
        
        for(auto& i:s){
            if(i=='(' || i=='[' || i=='{'){
                st.push(i);
            }
            else{
                if(st.empty() || f(i)!=st.top()){
                   return false;
                }
                st.pop();
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};