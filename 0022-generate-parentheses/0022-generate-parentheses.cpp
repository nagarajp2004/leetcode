class Solution {
public:
void recur(vector<string>&vt,int o,int c,int n,string temp){

    
       if(o==n && c==n){
        vt.push_back(temp);
        return ;
       }
     

    if(o<n)
    {
        recur(vt,o+1,c,n,temp+'(');
    }
    if(c<o){
         recur(vt,o,c+1,n,temp+')');
    }

}
   

    vector<string> generateParenthesis(int n)
    {
        int o=0,c=0;
        vector<string>vt;
        string temp;
        recur(vt,o,c,n,temp);
        return vt;
   
    }
};