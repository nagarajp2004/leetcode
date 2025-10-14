class Solution {
public:
      int oper(char x,int a,int b){
        if(x=='/'){
            return a/b;
        }
        else if(x=='*'){
            return a*b;
        }
        else if(x=='+'){
            return a+b;
        }
        else if(x=='-' ){
            return a-b;
        }else if(x=='^'){
            return a^b;
        }

        return 0;
      }

    int evalRPN(vector<string>& tokens) {
        stack<int>st;
         int ans=0;
        

        for(auto i:tokens){
int val=0;
              if(i.size() > 1 || isdigit(i[0])){
                st.push(stoi(i));
              }else{
                int a,b;
                if(!st.empty())
                { b=st.top();
                st.pop();
                }
                if(!st.empty()){
                 a=st.top();
                st.pop();
                }
                val=oper(i[0],a,b);
                st.push(val);
              }   
             
        }
        return st.top();
    }
};