class Solution {
public:
    string convert(string s, int nr) {
        if(nr == 1 || nr >=s.size())return s;

       int currow=0;
       bool godown=false;
       vector<string>st(nr);


        for(auto c:s){
           st[currow]+=c;

           if(currow==0 || currow == nr-1){
             godown=!godown;
           }
           currow+=godown?1:-1;
        } 
        string res;
        for(auto i:st)
        {
            res+=i;
        }
        return res;
    }
};