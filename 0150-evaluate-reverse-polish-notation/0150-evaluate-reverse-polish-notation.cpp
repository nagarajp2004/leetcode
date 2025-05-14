class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>st;
    int n=t.size();
    int ans=0;
    int i=00;
    while(i<n){
        if(t[i]!="-" && t[i]!="+" && t[i]!="/" && t[i] !="*"){
            st.push(stoi(t[i]));
        }
        else{
           int b=st.top();
           st.pop();
           int a=st.top();
           st.pop();
           if(t[i]=="+"){
            st.push(a+b);
           }else if(t[i]=="-"){
               st.push(a-b);
           }else if(t[i]=="/"){
                st.push(a/b);
           }else{
              st.push(a*b);
           }
        }
        i++;
    }
    return st.top();
    }
};