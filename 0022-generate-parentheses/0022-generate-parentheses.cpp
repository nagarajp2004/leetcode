class Solution {
public:
    void f(int l,int r,vector<string>&s,string temp)
     {
        if(l<=0 && r<=0){
            s.push_back(temp);
            return ;
        }
        if(l>0){
            f(l-1,r,s,temp+'(');
        }
        if(l<r){
            f(l,r-1,s,temp+')');
        }
     }

    vector<string> generateParenthesis(int n) {
        vector<string>st;
        string temp;
        f(n,n,st,temp);
        return st;
    }
};