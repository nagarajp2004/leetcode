class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<char,string>mpp;
        
        int n=p.size();
        vector<string>vt;
        stringstream ss(s);
        string x;
        while(ss>>x){
            vt.push_back(x);
        }
     int m=vt.size();
    if(n!=m){
        return false;
    }

  for(int i=0;i<n;i++){
    if(mpp.find(p[i])!=mpp.end()){
        if(mpp[p[i]]!=vt[i]){
            return false;
        }
    }else{
        for(auto&k :mpp){
            if(k.second==vt[i]){
                return false;
            }
        }
        mpp[p[i]]=vt[i];
    }
  }
  return true;

    }
};