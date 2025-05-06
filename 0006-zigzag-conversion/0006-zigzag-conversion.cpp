class Solution {
public:
    string convert(string s, int r) 
    {
        if(s.size()<r || r==1){
            return s;
        }
        int idx=0;
        int d=0;
        vector<string>rows(r);

  for(char c: s)
  {
       rows[idx]+=c;
       if(idx==0)
       {
        d=1;
       }else if(idx==r-1)
       {
        d=-1;
       }
       idx+=d;
  }
 string ans;
  for(auto& row :rows){
    for(auto& c:row){
        ans+=c;
    }
  }
  return ans;

    }
};