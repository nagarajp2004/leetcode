class Solution {
public:
   int f(char op,int a,int b){
    if(op=='+'){
        return a+b;
    }
    else if(op =='-'){
        return  a-b;
    }else if(op =='*'){
        return a*b;
    }
    return a/b;
   }


    int evalRPN(vector<string>& tok) {
        
        int n=tok.size();

        stack<int>st;

        for(int i=0;i<n;i++){
            int a,b;
            if(tok[i]=="+" || tok[i]=="-" || tok[i]=="*" || tok[i]=="/"){
                if(!st.empty()){
                  b=st.top();
                  st.pop();
                
                } 

                if(!st.empty()){
                    a=st.top();
                    st.pop();
                }
                st.push(f(tok[i][0],a,b));

            }else{
            int x=stoi(tok[i]);
            st.push(x);
        }
        }
     return st.top();
    }
};