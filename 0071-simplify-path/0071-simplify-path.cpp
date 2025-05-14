class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string>st;
        string dir;
        stringstream ss(path);
        while(getline(ss,dir,'/')){
            if(dir=="" || dir=="."){
                continue;
            }else if(dir==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(dir);
            }
        }
        if(st.empty()){
            return "/";
        }
string ans;
 while(!st.empty()){
    ans='/'+st.top()+ans;
    st.pop();
 }
return ans;
    }
};